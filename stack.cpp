#include <stdio.h>
#include <stdlib.h>

// 스택의 최대 사이즈를 100으로 정의  
#define StackSize 100 

// int 형 stack이라는 이름의 배열 생성  
int stack[StackSize];

// top 초기화   
int top=-1; 

// underflow검사  
int IsEmpty(){
    if(top<0) // underflow
        return true;
    else
        return false;
}

// overflow검사  
int IsFull(){
    if(top>=StackSize-1) // overflow
        return true;
    else
        return false;
}


// push처리
void push(int value){
    if(IsFull()==true){
    	printf("Overflow.\n");
    	exit(0);
	}else{
    	stack[++top]=value; 
	}
}

// pop 처리  
int pop(){
    if(IsEmpty()==true){
    	printf("Underflow.\n");
        exit(0);
	}else{
		return stack[top--];
	}
}


// 사용자 입력  
int input(){
	int value;
	printf("push할 값을 주세요.\n");
	scanf("%d", &value);
	return value;
}


// push할 데이터 입력 받기  
void whilePushing(){
	char userAnser;
	
	while (true){
		push(input());
		printf("계속해서 push 하시겠습니까? (예:y / 아니오:n)\n");
		scanf("%s", &userAnser);
		if (userAnser != 'y') break;
	}
}

// pop 입력  
void whilePop(){
	char userAnser;
	
	printf("pop 하시겠습니까? (예:y / 아니오:n)\n");
	scanf("%s", &userAnser);
	
	while (userAnser == 'y'){
		printf("%d ",pop());
		printf("계속해서 pop 하시겠습니까? (예:y / 아니오:n)\n");
		scanf("%s", &userAnser);
	}
}
 
int main(){
	whilePushing();
	whilePop();
	
    return 0;
}
