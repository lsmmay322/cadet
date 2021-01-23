FROM debian:buster

MAINTAINER hwalee <hwalee@student.42seoul.kr>

ENV AUTO off
ARG CPYDIR=/srcs
ARG TODIR=./tmp

RUN apt-get -y update && apt-get -y upgrade
RUN apt-get install -y nginx \
	vim \
	wget \
	openssl \
	mariadb-server \
	php-mysql \
	php-fpm \
	php-mbstring

COPY ${CPYDIR}/run.sh ./
COPY ${CPYDIR}/default ${TODIR}
COPY ${CPYDIR}/wp-config.php ${TODIR}
COPY ${CPYDIR}/config.inc.php ${TODIR}
COPY ${CPYDIR}/phpMyAdmin-5.0.2-all-languages.tar.gz ./
COPY ${CPYDIR}/latest.tar.gz ./

RUN sed -i "s|on;|${AUTO};|g" ${TODIR}/default


EXPOSE 80 443

CMD bash run.sh
