#! /usr/bin/python
import sys

f1 = file(sys.argv[2])
f2 = file(sys.argv[3])
l1 = f1.readlines()
l2 = f2.readlines()
if len(l1)==len(l2):
    for i in xrange(0,len(l1)):
	if l1[i]!=l2[i]:
	    print "0"
	    print "Wrong answer"
	    print "Wrong line %d" % i
	    sys.exit(0)
else:
    print "0"
    print "Wrong answer"
    print "Wrong number of lines"
    sys.exit(0)

print sys.argv[4]
print "Accepted"

