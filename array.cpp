#include <stdio.h>

int main(){
	// 1���� �迭 �ʱ�ȭ
	int arr_1[3] = {0, 1, 2};  
	
	// 2���� �迭 �ʱ�ȭ   
	int arr_2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	
	// 1���� �迭 ��� ���  
	for (int i = 0; i < 3; i++){
		printf("%d", arr_1[i]);
	}
	printf("\n");
	
	// 2���� �迭 ��� ��� 
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d", arr_2[i][j]);
		}
	}
}
