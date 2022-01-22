                                     /*QUEUE IMPLEMENTATION USING ARRAY*/
	                                   /*VEDAKEERTHI.A  1936120008*/


#include<iostream>
using namespace std;

class queue{
	public:
		int a[1000];
		int rear,front = 0;
		bool isfull();
		bool isempty();
		int peek();
		int enqueue(int x);
		int dequeue();
		int display();
};

bool queue :: isfull()
{
	if(rear >= 1000-1)
		return true;
	else
	    return false;
}

bool queue :: isempty()
{
	if((front >= rear) && (front < 0))
       return true;
	else
	   return false;	
}

int queue :: enqueue(int x)
{
	if(!isfull())
	{
		
		a[rear] = x;
		rear = rear +1;
		cout<< "\n" << x << " IS ADDED TO THE QUEUE" << "\n";
	}
	else
	    cout<<"THE QUEUE IS IN OVERFLOW CONDITION (FULL)";
}

int queue :: dequeue()
{
	if(!isempty())
	{
		cout<< "\n" <<  a[front] <<" IS REMOVED FROM THE QUEUE" << "\n";
		a[front] = 0;
		front++;
	}
	else
	    cout<<"THE QUEUE IS IN UNDERFLOW CONDITION (EMPTY)";
}

int queue :: peek()
{
	if(!isempty())
	{
		cout << "\n" << a[front] << "IS THE FRONT MOST ELEMENT PRESENT IN THE QUEUE\n";
	}
	else
	{
		cout << "THE QUEUE IS EMPTY!!";
	}
}


int queue :: display()
{
	cout<<"\n" << "THE CURRENT QUEUE , AFTER ALL OPERATIONS HAS: ";
	for(int z = front ; z <= rear ; z++ )
	{
		cout<< "\n" << a[z] << "\n";
	}
}

int main()
{
	queue q;
	q.enqueue(83);
	q.enqueue(344);
	q.enqueue(364);
	q.enqueue(532);
	q.enqueue(32);
	q.dequeue();
	q.peek();
	q.display();
}
