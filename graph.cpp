#include <stdio.h> 

// 노드의 최대 개수 1000개
int Graph[1000][1000];   

// 노드 개수, 간선 개수
int node,edge;   

int main() 
{
	printf("노드의 개수와 간선의 개수를 각각 입력해주세\n");
	scanf("%d %d", &node, &edge);
  
	for (int i = 0; i < edge; i++){
    	int x, y;
    	printf("서로 연결할 노드의 번호를 쓰세요 \n ");
    	scanf("%d %d", &x, &y); // 입력 된 두 수는 이어져 있다는 뜻 
    
    	// 이어지면 1로 표시  
    	Graph[x][y] = 1; 
    	Graph[y][x] = 1;
  	}
  
	// 출력  
	for (int i = 0; i < node; i++){
    	for (int j = 0; j < node; j++){
       	 printf("%d ", Graph[i][j]);
		}
		printf("\n");
	}
}
