#include <iostream>
#include <cstdlib>
using namespace std;

struct BSTnode
{
	int data;
	BSTnode *left, *right;
};
class BinarySearchTree
{
	BSTnode *Root;

  public:
	BinarySearchTree()
	{
		Root = NULL;
	}
	~BinarySearchTree() { delete Root; }
	BSTnode *GetRoot(void)
	 { return Root; }
	void SetRoot(BSTnode *root) 
	{ Root = root; }
	BSTnode *CreateNode(void);
	void Insert(BSTnode *root,BSTnode *New);
	void Preorder(BSTnode *temp);
	void Inorder(BSTnode *temp);
	void Postorder(BSTnode *temp);
	void Display(BSTnode *temp, int row, int low, int high);
};

BSTnode *BinarySearchTree::CreateNode()
{
	BSTnode *temp;
	temp = new BSTnode;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void BinarySearchTree::Insert(BSTnode *root, BSTnode *New)
{
	if (New->data < root->data)
	{
		if (root->left == NULL)
			root->left = New;
		else
			Insert(root->left, New);
	}
	if (New->data >= root->data)
	{
		if (root->right == NULL)
			root->right = New;
		else
			Insert(root->right, New);
	}
} 
void BinarySearchTree::Preorder(BSTnode *temp)
{
	if (temp != NULL)
	{
		cout << "-> " << temp->data << " ";
		Preorder(temp->left);
		Preorder(temp->right);
	}
}

void BinarySearchTree::Inorder(BSTnode *temp)
{
	if (temp != NULL)
	{
		Inorder(temp->left);
		cout << "-> " << temp->data << " ";
		Inorder(temp->right);
	}
}

void BinarySearchTree::Postorder(BSTnode *temp)
{
	if (temp != NULL)
	{
		Postorder(temp->left);
		Postorder(temp->right);
		cout << "-> " << temp->data << " ";
	}
}
void BinarySearchTree::Display(BSTnode *temp, int row, int low, int high)
{
	if (temp != NULL)
	{
		Display(temp -> left,row+ 2, low, (low+ high) / 2);
		
	    goto xy;((low+high)/2 , row);
		cout << temp->data;
		Display(temp->right, row + 2, (low+ high) / 2, high);
	}
}
int main()
{ 
	BinarySearchTree B;
	int ch;
	BSTnode *New = NULL, *root = NULL;
	while (1)
	{
		
		cout << "\n\t\t\tBinary Search Tree";
		cout << "\n\t\t\t ~~~~~~~~~~~~~~~~~~";
		cout << "\n1-Create";
		cout << "\n2-Preorder";
		cout << "\n3-Inorder";
		cout << "\n4-Postorder";
		cout << "\n5-Display";
		cout << "\n6-Exit\n";
		cout << "\nEnteryour choice : ";
		cin >> ch;
		root = B.GetRoot();
		switch (ch)
		{
		case 1:
			cout << "\nEnter elements 1 by 1:(0 to stop entering)\n";
			do
			{
				New = B.CreateNode();
				cin >> New->data;
				if (New->data == 0)
					break;
				if (root == NULL)
					root = New;
				else 
				B.Insert(root, New);
			}while (1);
			B.SetRoot(root);
			break;
		case 2:
			if (root == NULL)
				cout << "\nNo element in Tree\n";
			else
			{
				cout << "\n~~~Preorder Traversal~~~\n\nThe Tree is:\n";
				B.Preorder(root);
			}
			break;
		case 3:
			if (root == NULL)
				cout << "\nNo element in Tree\n";
			else
			{
				cout << "\n~~~Inorder Traversal~~~\n\nThe Tree is:\n";
				B.Inorder(root);
		    }
			break;
		case 4:
			if (root == NULL)
				cout << "\nNo element in Tree\n";
			else
			{
				cout << "\n~~~Postorder Traversal~~~\n\nThe Tree is:\n";
				B.Postorder(root);
			}
			break;
		case 5:
			B.Display(root, 1, 1, 80);
			break;
		case 6:
			cout << "\n~~~Exit~~~\n";
			exit(0);
		default:
			cout << "\nEnter between 1 to 5\n\n";
			break;
		}
	}
	return 0;
}
