### Project for IoT

##### Setup
First run the build.sh file, then the cp_and_chmod.sh
These may require sudo privledges

Use GPIO49 (P9 23) for the LED

##### View
Navigate to <ip_address>:port/home/html to view the page
An internet connection is required for the stylesheet CDNs to load

##### Note
I have run into an issue where sometimes members not in the gpio group
cannot write to the gpio pins. I included an example of it reading from
the analog pins to try to compensate. If you press F12 in the browser,
you should see what command the server is trying to run.


Even the author's example that worked in class sometimes has this issue.
