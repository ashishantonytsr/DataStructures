import random
from MergeSort import mergeSort

def isSorted(List):
	for i in range (1,len(List)-1):
		left = List[i-1]
		right = List[i+1]
		if List[i] < left or List[i] > right:
			return False
	
	return True

test = []
for i in range(100):
	test.append(random.randrange(999))
mergeSort(test)
print(test)
if(isSorted(test)):	print("Test Passed")
else:	print("Test Failed")