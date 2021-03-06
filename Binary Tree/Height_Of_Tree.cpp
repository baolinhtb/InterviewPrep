//finds the height of the tree using recursion
#include<iostream>
using namespace std;

//node structure for tree node
struct Node{
	Node *left,*right;
	int data;
};

//creates node for tree
Node* createNode(int data){
	Node *node=new Node;
	if(node){
		node->left=NULL;
		node->right=NULL;
		node->data=data;
		return node;
	}
	else
		return NULL;
}

//finds the height of the tree
int findHeightOfTree(Node *root){
	if(root==NULL)
		return 0;
	return 1+max(findHeightOfTree(root->left),findHeightOfTree(root->right));
}

int main(){
/*				1
			  /   \
			 2     5
			/ \
		  3   4
*/
	Node *root=createNode(1);
	root->right=createNode(5);
	root->left=createNode(2);
	root->left->left=createNode(3);
	root->left->right=createNode(4);

	cout<<"Height:"<<findHeightOfTree(root);
	return 0;
}
