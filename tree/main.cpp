#include<iostream>
#define Null 0
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	Node(int data){
		this->data = data;
		left = right = Null;
	}
};


void preorder(struct Node* node ){
	if (node == Null)
		return ;
	cout << node->data << " ";
	preorder(node->left);
	preorder(node->right);
}
void Inorder(struct Node* node){
	if (node == Null)
		return;
	Inorder(node->left);
	cout << node->data<< " ";
	Inorder(node->right);
}

void Postorder(struct Node* node){
	if (node == Null)
		return;
	Postorder(node->left);
	Postorder(node->right);
	cout << node->data<<" ";
}


int main(){
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout<<"pre order "<<endl;
	preorder(root);

	cout<<"\nIn order "<<endl;
	Inorder(root);

	cout<<"\npost order "<<endl;
	Postorder(root);



	return 0;
}
