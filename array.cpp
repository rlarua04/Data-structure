#include <stdio.h>

int main(){
	// 1차원 배열 초기화
	int arr_1[3] = {0, 1, 2};  
	
	// 2차원 배열 초기화   
	int arr_2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	
	// 1차원 배열 요소 출력  
	for (int i = 0; i < 3; i++){
		printf("%d", arr_1[i]);
	}
	printf("\n");
	
	// 2차원 배열 요소 출력 
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d", arr_2[i][j]);
		}
	}
}
