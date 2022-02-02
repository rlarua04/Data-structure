#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 선언
struct Node{ 
	// 데이터  
	int data;  
	
	// 자식 노드  
	Node *left; 
	Node *right; 
};

// 근노드  
struct Node *root; 

// 트리 초기화  
void initTree(int data) {  
	Node *New = (Node*)(malloc(sizeof(Node))); // 동적 할당  
	root = New; // 근노드 생성  
	root->data = data; // 근노드 값 할당  
	New->left = NULL;
	New->right = NULL;
}

// 자식 노드 추가 
Node *AddChild(Node *parrent, int data){  
	if((parrent->left != NULL) && (parrent->right != NULL)){ // 자식 노드가 모두 있으면  
		printf("이미 가득차서 추가할 수 없습니다. \n'");
		return 0;
	}
	struct Node *New = (Node*)(malloc(sizeof(Node))); 
	New->left = NULL;
	New->right = NULL; 
	New->data = data;
	if (parrent->left == NULL){ // 부모 노드의 왼쪽 자식 노드가 없으면 추가  
		parrent->left = New;
	}else if (parrent->right == NULL){
		parrent->right = New;
	}
	return New;
}

// 전위 순회  
void PreOrder(Node *r){ 
	printf("%d", r->data);
	if(r->left) PreOrder(r->left);
	if(r->right) PreOrder(r->right);
}

// 중위 순회 
void InOrder(Node *r){  
	if(r->left) PreOrder(r->left);
	printf("%d", r->data);
	if(r->right) PreOrder(r->right);
}

// 후위 순회  
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
	printf("후위순회 :");
	PostOrder(root);
	printf("중위순회 :");
	InOrder(root);
	printf("전위순회 :");
	PreOrder(root);
}
