                      /*STACK IMPLEMENTATION USING ARRAY*/
                         /*A.VEDAKEERTHI 1936120008*/


#include<iostream>
using namespace std;

class stack{
	public:
		int size(int n);
		int a[100],top = -1;
		bool isfull();
		bool isempty();
		int peek();
		int pop(void);
		int push(int x);
		int getdata();
		
};


bool stack :: isfull()   /*RETURNING A BOOLEAN WHETHER TRUE OR FALSE*/
{
	if(top > 100)
		return true;
	else 
	    return false;
}

bool stack :: isempty()
{
	if(top < 0)
	   return true;
	else
	   return false;
}

int stack :: peek()
{
	if(!isempty())
	{
		cout<< "\n" <<  a[top] << " IS THE TOP MOST ELEMENT PRESENT";
	}
	else
	{
		cout<<"THERE IS NO ELEMENT TO BE PRESENT";
	}
}

int stack :: push (int x) 
{
   	if(!isfull())  /*HERE THE ISFULL FUNCTION IS EXECUTED IF IT RETURNS TRUE THEN THE CONDITION IS EXECUTED*/
	{
		top = top+1;    /*THE TOP IS INCREMENTED TO STORE THE NEXT VALUE*/
		a[top] = x;
		cout<< x <<" IS PUSHED INTO THE STACK"<<"\n";
	}
	else
	{
		cout<<"THE STACK IS IN OVERFLOW CONDITION (WHICH MEANS THE STACK IS FULL)";
	}
}

int stack :: pop(void)
{
	if(!isempty())
	{
		cout<<"\n";
	    cout << a[top] << " IS REMOVED FROM THE STACK" << "\n";
		top = top-1;   /*THE TOP VALUE IS DECREMENTED TO THE NEXT THE ELEMENT AND THE UPPER MOST IS DELETED*/
	}
	else
	{
		cout<<"THE STACK IS IN AN UNDERFLOW CONDITION (WHICH MEANS THE STACK IS EMPTY)";
	}
}

int stack ::  getdata()
{
	int i;
	cout<<"\n\nTHE CURRENT STACK , AFTER ALL OPERATIONS HAS: ";
	for( i = top;i >= 0;i--)  /*SINCE ONLY ONE POINTER TOP AND THE LAST VALUE INDEX IS NOT KNOWN WE DECREMENT*/
	{
		cout<<"\n" << a[i] <<"\n";
	}
}

int main()
{
	stack s;
	s.push(40);
	s.push(45);
	;s.push(49);
	s.push(32); 
	s.push(50);
	s.pop();
	s.peek();
	s.getdata();
}
