#include <stdio.h> 
#include <stdlib.h>  

// ��带 ǥ���ϴ� ����ü ���� 
struct Node{  
	// ������ ����  
	struct Node *next; 
	
	// ������ ����  
	int data;  
}; 

int inputData() {
	int temp;
	printf("�����͸� �Է����ּ���\n");
	scanf("%d", &temp);
	return temp;
}
 
int main(){ 
	int temp;

	struct Node *head = (struct Node*)malloc(sizeof(struct Node));  // NodeŸ�� ũ���� �޸𸮸� �Ҵ��ϰ� �����ϸ� �޸� ù �ּҸ� NodeŸ�� ������ ������ head�� �Ҵ�  
	
	struct Node *node1 = (struct Node*)malloc(sizeof(struct Node)); 
	head->next = node1; // head�ȿ� next�� �����Ͽ� node1�� ���� �Ҵ�. (node1�� ���� node1�� �޸� �ּ�) 
	node1->data = inputData();  // node1�� ������ ������ ���� 10�� �Ҵ�  
	
	struct Node *node2 = (struct Node*)malloc(sizeof(struct Node)); 
	node1->next = node2; 
	node2->data = inputData();  
	node2->next = NULL;  // node2�� ���� NULL�� ���������� ��Ÿ��.  
	
	struct Node *curr  = head->next;  // curr�� node1�� �ּҸ� ����  
	
	while (curr != NULL){ // ���� NULL�� �ƴϸ�  
	printf("%d\n", curr->data); // curr�� ����Ű�� ����� ������ ������ ���  
	curr = curr->next; // �۾� �� ���� ��带 ����Ŵ  
	}  
	
	free(node2); // �Ҵ��� ���� �޸� ����  
	free(node1); // �Ҵ��� ���� �޸� ����  
	free(head);  // �Ҵ��� ���� �޸� ����  
	
	return 0; 
}
