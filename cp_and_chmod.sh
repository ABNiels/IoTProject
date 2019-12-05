echo "Copying files to their locations.."
cp tmp36raw ledBlink /usr/local/bin
cp tmp36raw.cgi ledBlink.cgi /usr/lib/cgi-bin
cp home.html /var/www/html

echo "Adding permissions..."
chmod 755 /usr/lib/cgi-bin/tmp36raw.cgi
chmod 755 /usr/lib/cgi-bin/ledBlink.cgi
# Led must give others execute permissions
chmod 777 /sys/class/gpio/gpio49/*
chmod +s /usr/lib/cgi-bin/tmp36raw.cgi
chmod +s /usr/lib/cgi-bin/ledBlink.cgi

