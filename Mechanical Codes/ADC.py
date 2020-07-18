#Converting 
from gpiozero import Button
button1=Button(2)
button2=Button(3)
button3=Button(4)
button4=Button(5)
button5=Button(6)
button6=Button(7)
button7=Button(8)
button8=Button(9)
b1=0
b2=0
b3=0
b4=0
b5=0
b6=0
b7=0
b8=0
if button1.is_pressed():
	b1=1
if button2.is_pressed():
	b2=1
if button3.is_pressed():
	b3=1
if button4.is_pressed():
	b4=1
if button5.is_pressed():
	b5=1
if button6.is_pressed():
	b6=1
if button7.is_pressed():
	b7=1
if button8.is_pressed():
	b8=1
res=128*b8+64*b7+32*b6+16*b5+8*b4+4*b3+2*b2+1*b1






