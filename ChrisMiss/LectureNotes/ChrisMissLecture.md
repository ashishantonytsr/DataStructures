# Data Structures
![Data Structues heirarchy](https://i.ytimg.com/vi/br48f5875IA/maxresdefault.jpg)
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



