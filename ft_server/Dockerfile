FROM debian:buster

LABEL maintainer="hwalee@student.42seoul.kr"

RUN apt update

RUN apt-get -y install vim
RUN apt-get -y install wget
RUN apt-get -y install nginx
RUN apt-get -y install openssl
RUN apt-get -y install mariadb-server
RUN apt-get -y install php-fpm
RUN apt-get -y install php-mysql
RUN apt-get -y install mariadb-server

COPY ./srcs/run.sh ./
COPY ./srcs/default ./tmp
COPY ./srcs/wp-config.php ./tmp
COPY ./srcs/config.inc.php ./tmp

EXPOSE 80 443

CMD bash run.sh
