from numpy.random import randint
import sys

n = 10000000
N = 1000000

for i in range(N):
	r = randint(0,3)
	if r == 2:
		print str(randint(2, n))
	else:
		print str(r)

