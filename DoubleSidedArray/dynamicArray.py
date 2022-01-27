class DoubleEndedList:

	def __init__(self):
		self.frontList = []	
		self.backList = []

	def addFirst(self,item):
		self.frontList.append(item)

	def addLast(self,item):
		self.backList.append(item)

	# TODO: add getAt functionality
	def getAt(self,pos):
		pass

	# TODO: add setAt functionality
	def setAt(self,pos,item):
		pass

	def printList(self):
		# printing frontList in reverse order
		for i in range(len(self.frontList)-1,-1,-1):
			print(self.frontList[i], end=' ')
		# printing backList in normal order
		for i in range(len(self.backList)):
			print(self.backList[i], end=' ')
		

