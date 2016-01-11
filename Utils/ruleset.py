#
#	Skripta za obradu liste sufiksa
#	
#


import fileinput

def myKey(s):
	return -len(s.decode('UTF-8')), s

a = []

for line in fileinput.input():
	a.append(line)

a.sort(key=myKey)

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 1:
		print ('strcpy(sufixList1['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 2:
		print ('strcpy(sufixList2['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 3:
		print ('strcpy(sufixList3['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 4:
		print ('strcpy(sufixList4['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1


count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 5:
		print ('strcpy(sufixList5['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 6:
		print ('strcpy(sufixList6['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 7:
		print ('strcpy(sufixList7['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 8:
		print ('strcpy(sufixList8['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1


count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 9:
		print ('strcpy(sufixList9['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 10:
		print ('strcpy(sufixList10['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1


count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 11:
		print ('strcpy(sufixList11['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 12:
		print ('strcpy(sufixList12['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 13:
		print ('strcpy(sufixList13['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1

count=0
for x in a:
	if len(x.rstrip().decode('UTF-8')) == 14:
		print ('strcpy(sufixList14['+str(count)+'], \"'+x.rstrip()+'\");')
		count = count + 1
