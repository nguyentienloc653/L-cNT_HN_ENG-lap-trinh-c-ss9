#include <stdio.h>
int main() {
  	int a[5]={1, 2, 3, 4, 5};
  	int n = 5;
	int Value, index;
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\nNhap vi tri can thay doi: ");
	scanf("%d" ,&index);
	printf("Nhap so moi: ");
	scanf("%d", &Value);
	a[index] = Value;
	for (int i = 0; i < n; i++){
    	printf("%d ", a[i]);
    }
	
  return 0;
}
