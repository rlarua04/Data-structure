#include <stdio.h>
#include <stdlib.h>

// ��� ����ü ����
struct Node{ 
	// ������  
	int data;  
	
	// �ڽ� ���  
	Node *left; 
	Node *right; 
};

// �ٳ��  
struct Node *root; 

// Ʈ�� �ʱ�ȭ  
void initTree(int data) {  
	Node *New = (Node*)(malloc(sizeof(Node))); // ���� �Ҵ�  
	root = New; // �ٳ�� ����  
	root->data = data; // �ٳ�� �� �Ҵ�  
	New->left = NULL;
	New->right = NULL;
}

// �ڽ� ��� �߰� 
Node *AddChild(Node *parrent, int data){  
	if((parrent->left != NULL) && (parrent->right != NULL)){ // �ڽ� ��尡 ��� ������  
		printf("�̹� �������� �߰��� �� �����ϴ�. \n'");
		return 0;
	}
	struct Node *New = (Node*)(malloc(sizeof(Node))); 
	New->left = NULL;
	New->right = NULL; 
	New->data = data;
	if (parrent->left == NULL){ // �θ� ����� ���� �ڽ� ��尡 ������ �߰�  
		parrent->left = New;
	}else if (parrent->right == NULL){
		parrent->right = New;
	}
	return New;
}

// ���� ��ȸ  
void PreOrder(Node *r){ 
	printf("%d", r->data);
	if(r->left) PreOrder(r->left);
	if(r->right) PreOrder(r->right);
}

// ���� ��ȸ 
void InOrder(Node *r){  
	if(r->left) PreOrder(r->left);
	printf("%d", r->data);
	if(r->right) PreOrder(r->right);
}

// ���� ��ȸ  
void PostOrder(Node *r){ 
	if(r->left) PreOrder(r->left);
	if(r->right) PreOrder(r->right);
	printf("%d", r->data);
}

int main(){
	initTree(1);
	Node *l = AddChild(root, 2);
	Node *r = AddChild(root, 3);
	AddChild(l,4);
	AddChild(l,5);
	AddChild(r,6);
	AddChild(r,7);
	printf("������ȸ :");
	PostOrder(root);
	printf("������ȸ :");
	InOrder(root);
	printf("������ȸ :");
	PreOrder(root);
}
