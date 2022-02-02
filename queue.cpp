#include <stdio.h>
#include <stdlib.h>

// ť�� ũ�⸦ 100���� ���� 
#define QueueSize 100  

// front �ʱ�ȭ  
int front=-1; 

// rear �ʱ�ȭ  
int rear=-1; 

 // queue��� �̸��� �迭 ����  
int queue[QueueSize];
 
// ť�� ����°�? 
int IsEmpty(void){ 
    if(front==rear) // front�� rear�� ������ ť�� ����ִ� ���� 
        return true;
    else 
		return false;
}

// overflow �˻�  
int IsFull(void){ 
    int tmp=(rear+1)%QueueSize; // ���� ť���� rear+1�� MAX�� ���� ����������
    if(tmp==front) // front�� ������ ť�� ������ �ִ� ���� 
        return true;
    else
        return false;
}

// �ڷ� ���� 
void add(int value){  
    if(IsFull()){  
        printf("Overflow.\n");
    }else{
         rear = (rear+1)%QueueSize;
         queue[rear]=value;
    }
}

// �ڷ� ����  
int del(){ 
    if(IsEmpty()){
        printf("ť�� ����ֽ��ϴ�.\n");
        exit(0);
    }else{
        front = (front+1)%QueueSize;
        return queue[front];
    }
}

// ������ �Է�  
void whileAdd(){
	int data = 0;
	char userAnser;
	
	while (true){
		scanf("%d", &data);
		add(data);
		printf("����ؼ� ���� �Ͻðڽ��ϱ�? (��:y / �ƴϿ�:n)\n");
		scanf("%s", &userAnser);
		if (userAnser != 'y') break;
	}
}


// ������ ����  
void whileDel(){
	int data;
	char userAnser;
	
	while (true){
		printf("%d ",del());
		printf("����ؼ� ���� �Ͻðڽ��ϱ�? (��:y / �ƴϿ�:n)\n");
		scanf("%s", &userAnser);
		if (userAnser != 'y') break;
	}
}
 
int main(){
	whileAdd();
	whileDel(); 
	
    return 0;
}

