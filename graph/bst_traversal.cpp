#include <iostream>
#include <queue>
using namespace std;

struct Node{
	char data;
	Node* left;
	Node* right;
};

void LevelOrder(Node* root){
	if(root == nullptr) return;
	queue<Node*> q;
	q.push(root);
	
	// while there is at least one discovered Node
	while(!q.empty()){
		Node* current = q.front();
		cout << current->data << " ";
		if(current->left != nullptr) q.push(current->left);
		if(current->right != nullptr) q.push(current->right);
		q.pop();
	}
}

Node* insert(Node* root, char data){
	if(!root){
		root = new Node;
		root->data = data;
		root->left = root->right = nullptr;
	}
	else if(data <= root->data) root->left = insert(root->left, data);
	else root->right = insert(root->right, data);
	return root;
}

int main(){
	Node* root = nullptr;
	root = insert(root, 'M');
	root = insert(root, 'Q');
	root = insert(root, 'A');
	root = insert(root, 'B');
	root = insert(root, 'Z');
	root = insert(root, 'C');
	
	LevelOrder(root);
}
