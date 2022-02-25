import serial
import time

ser = serial.Serial('/dev/ttyACM0', 9600)
i = 0
while True:
    ser.write("Oi {}".format(i).encode('ascii', 'ignore'))
    time.sleep(1)
    i = i + 1
