#include <stdio.h>
#include <stdlib.h>

// ������ �ִ� ����� 100���� ����  
#define StackSize 100 

// int �� stack�̶�� �̸��� �迭 ����  
int stack[StackSize];

// top �ʱ�ȭ   
int top=-1; 

// underflow�˻�  
int IsEmpty(){
    if(top<0) // underflow
        return true;
    else
        return false;
}

// overflow�˻�  
int IsFull(){
    if(top>=StackSize-1) // overflow
        return true;
    else
        return false;
}


// pushó��
void push(int value){
    if(IsFull()==true){
    	printf("Overflow.\n");
    	exit(0);
	}else{
    	stack[++top]=value; 
	}
}

// pop ó��  
int pop(){
    if(IsEmpty()==true){
    	printf("Underflow.\n");
        exit(0);
	}else{
		return stack[top--];
	}
}


// ����� �Է�  
int input(){
	int value;
	printf("push�� ���� �ּ���.\n");
	scanf("%d", &value);
	return value;
}


// push�� ������ �Է� �ޱ�  
void whilePushing(){
	char userAnser;
	
	while (true){
		push(input());
		printf("����ؼ� push �Ͻðڽ��ϱ�? (��:y / �ƴϿ�:n)\n");
		scanf("%s", &userAnser);
		if (userAnser != 'y') break;
	}
}

// pop �Է�  
void whilePop(){
	char userAnser;
	
	printf("pop �Ͻðڽ��ϱ�? (��:y / �ƴϿ�:n)\n");
	scanf("%s", &userAnser);
	
	while (userAnser == 'y'){
		printf("%d ",pop());
		printf("����ؼ� pop �Ͻðڽ��ϱ�? (��:y / �ƴϿ�:n)\n");
		scanf("%s", &userAnser);
	}
}
 
int main(){
	whilePushing();
	whilePop();
	
    return 0;
}
