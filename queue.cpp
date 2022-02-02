#include <stdio.h>
#include <stdlib.h>

// 큐의 크기를 100으로 정의 
#define QueueSize 100  

// front 초기화  
int front=-1; 

// rear 초기화  
int rear=-1; 

 // queue라는 이름의 배열 선언  
int queue[QueueSize];
 
// 큐가 비었는가? 
int IsEmpty(void){ 
    if(front==rear) // front와 rear가 같으면 큐는 비어있는 상태 
        return true;
    else 
		return false;
}

// overflow 검사  
int IsFull(void){ 
    int tmp=(rear+1)%QueueSize; // 원형 큐에서 rear+1을 MAX로 나눈 나머지값이
    if(tmp==front) // front와 같으면 큐는 가득차 있는 상태 
        return true;
    else
        return false;
}

// 자료 삽입 
void add(int value){  
    if(IsFull()){  
        printf("Overflow.\n");
    }else{
         rear = (rear+1)%QueueSize;
         queue[rear]=value;
    }
}

// 자료 삭제  
int del(){ 
    if(IsEmpty()){
        printf("큐가 비어있습니다.\n");
        exit(0);
    }else{
        front = (front+1)%QueueSize;
        return queue[front];
    }
}

// 데이터 입력  
void whileAdd(){
	int data = 0;
	char userAnser;
	
	while (true){
		scanf("%d", &data);
		add(data);
		printf("계속해서 삽입 하시겠습니까? (예:y / 아니오:n)\n");
		scanf("%s", &userAnser);
		if (userAnser != 'y') break;
	}
}


// 데이터 삭제  
void whileDel(){
	int data;
	char userAnser;
	
	while (true){
		printf("%d ",del());
		printf("계속해서 삭제 하시겠습니까? (예:y / 아니오:n)\n");
		scanf("%s", &userAnser);
		if (userAnser != 'y') break;
	}
}
 
int main(){
	whileAdd();
	whileDel(); 
	
    return 0;
}

