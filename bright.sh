#!/bin/bash
sudo -u ${USERNAME} echo $1 > /sys/class/backlight/acpi_video0/brightness
echo Brigthness set to $1
