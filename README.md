# QtCurl_ssl
Example of cURL using SSL Certificate verification with apache, https



## Dependencies
1. [Apache2](https://ubuntu.com/tutorials/install-and-configure-apache#1-overview)
2. libssl1.0-dev
3. OpenSSL - Optional


## Apache2 site configuration

1. Copy Sample_HTML/ to /var/www/html/

		sudo cp -rvf <Path_To>/QtCurl_ssl/Sample_HTML/* /var/www/html/
		
2. Copy site conf to apache site-available

		sudo cp -rvf <Path_To>/QtCurl_ssl/apache/System.org.conf /etc/apache2/sites-available

3. Copy sample certificates

		sudo cp -rvf <Path_To>/QtCurl_ssl/ssl_certs/ /opt
		sudo chown <USERNAME>:<USERNAME> -R /opt/ssl_certs/

4. Enable site

		sudo a2ensite System.org
		
5. set HostName

		sudo vim /etc/hosts
		SYSTEM_IP System System.org
	
	save and exit
	
6. Restart apache2 service

		sudo systemctl restart apache2
		
		
7. Verify url open any web browser

		https://System.org
		

## Add CAFile in system

		sudo ln -s /opt/ssl_certs/arise1600.crt /etc/ssl/certs/TestSystem.pem


## build (anyone step 1 or 2) and Run QtCurl_ssl

1. Cmake build

		cd <Path_To>/QtCurl_ssl/
		mkdir cBuild && cd cBuild/
		cmake ..
		make

2. Qmake build

		cd <Path_To>/QtCurl_ssl/
		mkdir qBuild && cd qBuild/
		qmake ..
		make

3. Run

		./QtCurl_ssl




