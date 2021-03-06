import serial
arduino  = serial.Serial('COM4', 9600)

while (True) :
    a = arduino.readline()
    # print(a)
    a = a[:-2].decode()
    print(a)