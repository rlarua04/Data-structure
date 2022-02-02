#include <stdio.h> 
#include <stdlib.h>  

// 노드를 표현하는 구조체 선언 
struct Node{  
	// 포인터 영역  
	struct Node *next; 
	
	// 데이터 영역  
	int data;  
}; 

int inputData() {
	int temp;
	printf("데이터를 입력해주세요\n");
	scanf("%d", &temp);
	return temp;
}
 
int main(){ 
	int temp;

	struct Node *head = (struct Node*)malloc(sizeof(struct Node));  // Node타입 크기의 메모리를 할당하고 성공하면 메모리 첫 주소를 Node타입 포인터 변수인 head에 할당  
	
	struct Node *node1 = (struct Node*)malloc(sizeof(struct Node)); 
	head->next = node1; // head안에 next에 접근하여 node1의 값을 할당. (node1의 값은 node1의 메모리 주소) 
	node1->data = inputData();  // node1의 데이터 영역의 값에 10을 할당  
	
	struct Node *node2 = (struct Node*)malloc(sizeof(struct Node)); 
	node1->next = node2; 
	node2->data = inputData();  
	node2->next = NULL;  // node2의 값은 NULL로 마지막임을 나타냄.  
	
	struct Node *curr  = head->next;  // curr에 node1의 주소를 저장  
	
	while (curr != NULL){ // 값이 NULL이 아니면  
	printf("%d\n", curr->data); // curr가 가르키는 노드의 데이터 영역을 출력  
	curr = curr->next; // 작업 후 다음 노드를 가리킴  
	}  
	
	free(node2); // 할당한 동적 메모리 해제  
	free(node1); // 할당한 동적 메모리 해제  
	free(head);  // 할당한 동적 메모리 해제  
	
	return 0; 
}
