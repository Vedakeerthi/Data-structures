# Data-structures
A glance to all the basic data structures, and these data structures are executed using c++ programming language. The data structures include :
* Stack
* Queue
* Linked list
<br/>

# **1. Stack :**

A linear data structure which is based on the LIFO (Last In First Out) algorithm, to brief it, the last element in the array is the first to be removed. In real life application, consider a stack of plates vertically where the last plate which is on the top is the first to be removed, this is how stack works. Stack has two keywords namely Push and Pop, which means if any element is to be inserted in the stack then it is the push operation and if the top most element is to be removed it is known as the pop operation. 

Considering the program, it consists of a class stack and public variables top and a, here we are going to implement stack using array. Addition to that many other functions are declared to the class stack. The _*isfull()*_ function is used to return true or false if the stack is full, the same goes to the _*isempty()*_ function. *_peek()_* function is used to display the topmost element of the stack if the stack is not empty, *_push()_* function takes an integer as an parameter, which is to be pushed into the stack based on a condition, if the stack is not empty. *_pop()_* function is used to remove the top most element of the stack and the _*getdata()*_ function is the initial declaration of the array.

<img src='https://i1.faceprep.in/Companies-1/stack-operations-in-c.gif' align='center' alt='Stack operations' height=300 width=1000>
<br/>

# **2. Queue :**

Another linear data structure, this is similar to the real world queue operation, and follows the FIFO (First In First Out) algorithm. According to the algorithm, the data structure consists of two ends, the front and the rear, the rear is where the data elements are added and the front is where we remove the elements, the best example for queue data structure is more people standing in a queue, the first standing person will the first to be sent out.

Considering the program, it is quiet similar to the stack program, a class queue where all the public variables a, rear, front. Many other functions are also declared in the class queue to perform the queue operation. The _*isfull()*_ function is used to return true or false if the queue is full, the same goes to the _*isempty()*_ function. *_peek()_* function is used to display the topmost element of the queue if the queue is not empty, *_enqueue()_* function takes an integer as an parameter, which is to be added to the queue based on a condition, if the queue is not empty. *_dequeue()_* function is used to remove the front most element of the queue and the _*display()*_ function is used to display the whole queue.

Let's discuss the different types of queue data structure:
* Simple queue
* Circular queue
* Priority queue
* Double ended queue
<br/>

* *_Simple queue :_*
The simple queue is what we have discussed so far, so there is no need for an explanation and the graphical representation of the simple queue is displayed below.

<img src='https://cdn.programiz.com/sites/tutorial2program/files/simple-queue_0.png' align='center' alt='Simple Queue operations' height=300 width=1000>
<br/>

* *_Circular queue :_*
The working of circular queue is very simple, if the front and the rear locations of a queue are connected then it forms a circular queue, memory utilization is the main advantage of using circular queue, and an element can be added if the last or the rear if full but the front has no element in it, this can't be done in a simple queue.

<img src ='https://cdn.programiz.com/sites/tutorial2program/files/circular-queue.png' alt='Circular queue' align='center' height=300 width=1000>
<br/>

* *_Priority queue :_*
Priority queue is a simple queue in case of insertion but in case of removing an element from the queue, it is based on priority assigned to the elements of the queue, in case if two elements meant to be having the same priority it can be removed according to the order of the queue.

<img src='https://cdn.programiz.com/sites/tutorial2program/files/priority-queue.png' align='center' alt='Priority queue' height=300 width=1000>
<br/>

* *_Double ended queue :_*
Double ended queue known as Deque, where the elements of the queue can be added or removed from both sides of the queue, and well this queue structure does not follows FIFO.

<img src='https://cdn.programiz.com/sites/tutorial2program/files/double-ended-queue.png' align='center' alt='Double ended queue' height=300 width=1000>
<br/>

# **3. Linked list :**

A linear data structure consists of nodes where each node contains a data field and the reference to the next node, in case of my program, the data and the next node are declared inside the structure, the data is stored in the variable data and the reference to the next node is declared using pointer.

A class LinkedList with a constructor which specifies the head node and a destructor which deletes the head node. Other functions _*Append()*_, _*AddAfter()*_, _*AddAtBegin()*_, _*Display()*_, _*Count()*_, _*Delete()*_ are used for the linked list. 

_*Append()*_ function is used to add the element, to a linked list, it checks if the head is null then if the head is not null then the element is added and the element is updated as the head, else a new node is created and the data is stored and the next pointer is updated to null.

_*AddAfter()*_ function is used to add the data in the specified location, based on a condition if the linked list is not full, then a loop is placed to reach the location, once it reached the next data point is identified and the data element is placed and the pointer is updated to the previous data point.

_*AddAtBegin()*_ function takes the data element and place it at the front of the linked list.

_*Display()*_ function is used to display all the data elements of the linked list.

_*Count()*_ function is used to count how many elements are present in the linked list.

_*Delete()*_ function deletes the data specified, if the data element is the head value, the head value is moved to the next value and the data value is removed, else if the data element's next value is pointed towards null, then the data is deleted simply. 

A switch case is used to present the code, which provides a neat interface to the program, the gif of the linked list is shown below for more understanding.

<img src='https://www.codesdope.com/staticroot/images/ds/link18.gif' alt='Linked list' align='center' height=300 width=1000>
<br/>

Linked list can also be used as other two types:
* Singly linked list
* Circular linked list
* Doubly linked list
<br/>

* *_Singly linked list :_*
Singly linked list is what explained above, it is known as singly linked list because it consists of a single pointer to the next node.

<img src='https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png' alt='Singly Linked list' align='center' height=300 width=1000>
<br/>

* *_Circular linked list :_*
A linked list is a linked list where all the nodes are connected to form a circle, there is no null at the end, here there is neither a starting node nor an ending node, we can traverse the list from any node and using this data structure we can implement queue data structure.

<img src='https://media.geeksforgeeks.org/wp-content/uploads/CircularLinkeList.png' alt='Circular Linked list' align='center' height=300 width=1000>
<br/>

* *_Doubly linked list :_*
A complex linked list in which there are two pointers maintained, a pointer points to the previous node and an another pointer points to the next node. So that we can traverse in both forward and backward direction of the linked list. Every operations on a linked list can be carried out quickly but the only drawback is extra space is required for the other extra pointer and the operations are very complex to be carried out in a doubly linked list.

<img src='https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png' align='center' alt='Doubly linked list' height=300 width=1000>
<br/>
