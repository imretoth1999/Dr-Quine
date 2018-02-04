a = "a = %c%s%c%cbuf = a %c (34,a,34,10,37,10,34,34,34,34,10,10,10)%cf = open(%cGrace_kid.py%c,%cw%c)%cf.write(buf)%c#Scz%c"
buf = a % (34,a,34,10,37,10,34,34,34,34,10,10,10)
f = open("Grace_kid.py","w")
f.write(buf)
#Scz
