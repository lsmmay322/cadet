#!/bin/bash

chmod 700 run.sh

cp -rp /tmp/default /etc/nginx/sites-available/

openssl req -newkey rsa:4096 -days 365 -nodes -x509 -subj "/C=KR/ST=Seoul/L=Seoul/O=42Seoul/OU=Lee/CN=localhost" -keyout localhost.dev.key -out localhost.dev.crt
chmod 700 /etc/ssl
mv localhost.dev.crt etc/ssl/certs/
mv localhost.dev.key etc/ssl/private/
chmod 600 etc/ssl/certs/localhost.dev.crt etc/ssl/private/localhost.dev.key

wget https://files.phpmyadmin.net/phpMyAdmin/5.0.4/phpMyAdmin-5.0.4-all-languages.tar.gz
tar -xvf phpMyAdmin-5.0.4-all-languages.tar.gz
mv phpMyAdmin-5.0.4-all-languages phpmyadmin
mv phpmyadmin /var/www/html/
cp -rp /tmp/config.inc.php /var/www/html/phpmyadmin/
service php7.3-fpm start

service nginx reload
service mysql start
service php7.3-fpm restart

mysql < var/www/html/phpmyadmin/sql/create_tables.sql -u root --skip-password
mysqladmin -u root -p password

echo "CREATE DATABASE IF NOT EXISTS wordpress;" | mysql -u root --skip-password
echo "GRANT ALL PRIVILEGES on *.* to 'hwalee'@'%' IDENTIFIED BY 'Leehwanseob94!' WITH GRANT OPTION;" | mysql -u root --skip-password
echo "flush privileges;" | mysql -u root --skip-password
service mysql restart

wget https://wordpress.org/latest.tar.gz
tar -xvf latest.tar.gz
mv wordpress/ var/www/html/
chown -R www-data:www-data /var/www/html/wordpress
cp -rp ./tmp/wp-config.php /var/www/html/wordpress

service nginx start
service php7.3-fpm start


bash
