#include <stdio.h> 

// ����� �ִ� ���� 1000��
int Graph[1000][1000];   

// ��� ����, ���� ����
int node,edge;   

int main() 
{
	printf("����� ������ ������ ������ ���� �Է����ּ�\n");
	scanf("%d %d", &node, &edge);
  
	for (int i = 0; i < edge; i++){
    	int x, y;
    	printf("���� ������ ����� ��ȣ�� ������ \n ");
    	scanf("%d %d", &x, &y); // �Է� �� �� ���� �̾��� �ִٴ� �� 
    
    	// �̾����� 1�� ǥ��  
    	Graph[x][y] = 1; 
    	Graph[y][x] = 1;
  	}
  
	// ���  
	for (int i = 0; i < node; i++){
    	for (int j = 0; j < node; j++){
       	 printf("%d ", Graph[i][j]);
		}
		printf("\n");
	}
}
