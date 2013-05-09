f = open('randnums.txt', 'r')

lines = f.readlines()
counts = {}

k = 2

for line in lines:
	if int(line) in counts:
		counts[int(line)] += 1
	else:
		counts[int(line)] = 1

sorted_list = sorted(counts.items(), key = lambda x: x[1], reverse = True)

if k < len(sorted_list):
	print str(sorted_list[0:k])
else:
	print str(sorted_list)
