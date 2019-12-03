echo "Building LED cgi..."
g++ ledBlink.cpp GPIO.cpp -o ledBlink -pthread
