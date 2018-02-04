import sys
import os
i=5
if sys.argv[0] == "Sully.py":
	i=i+1
if i > 0:
	name = "Sully_%d.py" % (i-1)
	a = "import sys%cimport os%ci=%d%cif sys.argv[0] == %cSully.py%c:%c%ci=i+1%cif i > 0:%c%cname = %cSully_%cd.py%c %c (i-1)%c%ca = %c%s%c%c%cbuf = a %c (10,10,i-1,10,34,34,10,9,10,10,9,34,37,34,37,10,9,34,a,34,10,9,37,10,9,34,34,10,9,10,9,10,9,34,34)%c%cf = open(name,%cw%c)%c%cf.write(buf)%c%cf.close()%c%cos.system(%c/usr/bin/python %c+name)"
	buf = a % (10,10,i-1,10,34,34,10,9,10,10,9,34,37,34,37,10,9,34,a,34,10,9,37,10,9,34,34,10,9,10,9,10,9,34,34)
	f = open(name,"w")
	f.write(buf)
	f.close()
	os.system("/usr/bin/python "+name)