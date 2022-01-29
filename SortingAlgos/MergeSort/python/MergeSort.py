# merge fn
def merge(List, start, end, mid):
	temp = []
	i = start
	j = mid+1

	# checking & adding smallest number to temp
	while i<=mid and j<=end:
		if List[i] <= List[j]:
			temp.append(List[i])
			i+=1
		else:
			temp.append(List[j])
			j+=1
		
	# adding rest from left subList to temp
	while i<=mid:
		temp.append(List[i])
		i+=1
	
	# adding rest from right subList to temp
	while j<=end:
		temp.append(List[j])
		j+=1

	# adding items from temp to List
	for i in range(start,end+1):
		List[i] = temp[i-start]

# mergeSort fn
def mergeSort(List, start=0, end=None):
	if (end == None):
		end = len(List) - 1
	if start < end:
		mid = int((start+end)/2)
		mergeSort(List, start, mid)
		mergeSort(List, mid+1, end)
		merge(List, start, end, mid)
	
