#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;



struct Node {
	int data;
	struct Node* right;
	struct Node* left;
	struct Node* parent;
	~Node(){
		delete right;
		delete left;
		delete parent;
};

typedef struct Node* NODE;

NODE createNode(int data) {
	NODE newNode = (NODE)malloc(sizeof(struct Node));
	if (!newNode) {
		exit(-1);
	}
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->data = data;
	newNode->parent = NULL;
	return (newNode);
}
Node* GetNewNode(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	newNode->parent = NULL;
	return(newNode);
}
NODE root = NULL;

Node* insertNode(NODE head_, NODE cur, int data) {
	if (head_ == NULL) {
		head_ = GetNewNode(data);
		if (count == 0) {
			root = head_;
			count++;
		}
		else {
			head_->parent = cur;
			cout << "head->parent " << head_ << endl;
		}
		return head_;
	}
	else if (data <= head_->data) {
		head_->left = insertNode(head_->left, head_, data);
	}
	else
		head_->right = insertNode(head_->right, head_, data);

	return head_;

}

int main() {
	int N;
	cin >> N;
	vector <int> v;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	int erase;
	cin >> erase;

}