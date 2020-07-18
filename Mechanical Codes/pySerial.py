# -*- coding: utf-8 -*-
"""
Created on Sat Mar 16 23:49:51 2019

@author: deepa
"""

from time import sleep
import serial
from serial import Serial
ser=serial.Serial('/dev/ttyUSB0', 9600)
counter=32
while True:
    counter=counter+1
    ser.write(str(chr(counter)))
    print(ser.readLine())
    sleep(.1)
    if counter==255:
        counter=32