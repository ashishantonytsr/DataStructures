# Data Structures
![Data Structues heirarchy](https://www.softwaretestinghelp.com/wp-content/qa/uploads/2019/06/Data-structures.png)
- Data Structures
	- Primitive Data Structures
		- integer
		- float
		- char
		- boolean
	- Non Primitive Data Structures
		- Linear Data Structures
			- Array
			- Stack
			- Queue
			- Linked List
		- Non Linear Data Structures
			- Tree
			- Graph

---

## Stack

- Principle - **LIFO**
- Stack insertion - POP
- Stack deletion  - PUSH
- Stack insertion when Stack is full - *Stack overflow*
- Stack deletion when Stack is emply - *Stack underflow*

---

## Queue

- Principle - **FIFO**
- Queue insertion - ENQUEUE - rear end
- Queue deletion  - DEQUEUE - front end
- These *front* and *rear* are pointers
- Rear will point to the last element inserted, and not the last position
- Similarly, front will point to the first element inserted, and not the first position. 
 *If we DEQUEUE, front will point to the second element.*

---

## Linked List

- Linked List is a Dynamic Data Structure *No memory wastage*
- Each element in the Linked list is called a **NODE**
- Linked List are categorized into 2
	- Single Linked List
	- Double Linked List

### Single Linked List
- A Node contains a DATA and an ADDRESS to the next node
- HEAD will point to the first element in the list
- Last node will have an address NULL

### Double Linked List
- In this Linked List, a NODE contains 3 parts; Left address, data, End address
- In the first node, left address contains NULL
- In the last node, right address contains NULL

---

## Tree

- **ROOT** Node - Top position ( Which doesn't have parents )
- **LEAF** Node - End Position ( Which doesn't have branches/childs )
- **CHILD** Nodes are nodes under a PARENT NODE
- Subtrees are small trees inside a Root trees
- Level - ROOT Node will have a LEVEL 0
- * From there onwards, the childs will have incremented level * 

					A				// level 0 
				B		C			// level 1 
			D		E		F		// level 2 
		G		H		I		J	// level 3 

---

## Graph

- A graph contains *vertices* and *edges*
- We call vertices as *Nodes* in DS
- There are **Undirected Graphs** and **Directed Graphs**
	- Directed Graphs have direction on their edges

# Operations on Data Structures

## Traversal
Visiting each elements in an array/List.

## Searching
Searching in the array for an given element.
We have two types of Searching in Data Structures *Sequential Searching* & *Non Sequential Searching*
- Sequential Searching
	- Searching all elements one after other; a linear searching
- Non Sequential Searching
	- A non linear Searching which does not traverse through all elements
	- Searching the given element by splitting the given List
	- eg: **Binary Search**: Dividing a array into 2 parts

## Insertion
Inserting elements in the List. 
Element can be inserted anywhere in the list.

## Deletion
Deleting elements from the Data Structures.

## Sorting
Sorting the elements in the list. It can be *ascending order* or *descending order*.
We have different types of Sorting . They are :
- Selection Sort
- Insertion Sort
- Heap Sort
- Radix Sort
- Merge Sort
- Quick Sort
- Bubble Sort
Choosing a good sorting method depends on the Time Space complexity and Efficiency.

## Merging

Simply Merging two or different array/List avoiding duplicates.