#include<iostream>
using namespace std;

//  THIS IS THE GRAPH THAT WE ARE GOING TO TRAVERSE
//         1      1 : 2,3 
//        / \      
//       2   3    2 : 4,5   3 : 6,7
//      /\   /\      
//     4  5 6  7  4,5,6,7 : leaf nodes

class graph
{
	int a[100][100],n,s;
	public:
		void getdata();
		void dfs();
		void bfs();
};

void graph :: getdata(void)
{
	cout<<"\nENTER THE NUMBER OF NODES PRESENT IN YOUR GRAPH : ";
	cin>>n;
	cout<<"\nENTER THE ADJACENCY MATRIX OF YOUR GRAPH : \n";
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nENTER THE NODE FROM WHERE YOU WANT TO TRAVERSE YOUR GRAPH : ";
	cin>>s;
}

void graph :: bfs(void)
{
	cout<<"\n---------------BREADTH FIRST SEARCH---------------";
	int*visited = new int[n];
    int queue[10], front=-1, rear = 0, i;
    for(int j=0; j<n ; j++)
    {
    	visited[j]=0;
	}
    queue[rear] = s;
    visited[s] = 1;
    
	while(front!=rear)
	{
		cout<<queue[++front]<<"  ";
        i=queue[front];
        for(int j=0; j<n ; j++)
        {
           if(a[i][j]!=0 && visited[j]!=1) 
           {
             queue[++rear]=j;
             visited[j]=1;
			}
        }
	}
}

void graph :: dfs(void)
{
	cout<<"\n---------------DEPTH FIRST SEARCH---------------";
	int * visited = new
    int[n];
    int stack[10] , top = -1 , i;
    for(int j=0;j<n;j++)
    {
    	visited[j]=0;
	}
    
	cout<<"\n The Depth First Search Traversal : ";
    i=stack[++top]=s;
    visited[s]=1;

    while(top>=0)
    {
    	i=stack[top];
        cout<<stack[top--]<<"  ";
        for(int j=n-1 ; j>=0 ; j--)
        {
        	if(a[i][j]!=0 && visited[j]!=1)
            {
        	stack[++top]=j;
            visited[j]=1;
	     	}
		}
    }
}

int main()
{
	graph g;
	cout << "---------------TREE TRAVERSAL---------------";
	int n;
	f: cout<<"\nDEPTH FIRST SEARCH - PRESS(1)";
	cout<<"\nBREADTH FIRST SEARCH - PRESS(2)\n";
	cin>>n;
	switch(n)
	{
		case 1: g.getdata();g.dfs();
		case 2: g.getdata();g.bfs();
		default: cout<<"\n!PLEASE ENTER THE CORRECT NUMBER!";
	}
	goto f;
	exit();
}
