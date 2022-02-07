# Data-structures
A glance to all the basic data structures, and these data structures are executed using c++ programming language. The data structures include :
* Stack
* Queue
<br/>

**1. Stack :**

A linear data structure which is based on the LIFO (Last In First Out) algorithm, to brief it, the last element in the array is the first to be removed. In real life application, consider a stack of plates vertically where the last plate which is on the top is the first to be removed, this is how stack works. Stack has two keywords namely Push and Pop, which means if any element is to be inserted in the stack then it is the push operation and if the top most element is to be removed it is known as the pop operation. 

Considering the program, it consists of a class stack and public variables top and a, here we are going to implement stack using array. Addition to that many other functions are declared to the class stack. The _*isfull()*_ function is used to return true or false if the stack is full, the same goes to the _*isempty()*_ function. *_peek()_* function is used to display the topmost element of the stack if the stack is not empty, *_push()_* function takes an integer as an parameter, which is to be pushed into the stack based on a condition, if the stack is not empty. *_pop()_* function is used to remove the top most element of the stack and the _*getdata()*_ function is the initial declaration of the array.

<img src='https://i1.faceprep.in/Companies-1/stack-operations-in-c.gif' align='center' alt='Stack operations' height=300 width=1000>
<br/>

**2. Queue :**

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
