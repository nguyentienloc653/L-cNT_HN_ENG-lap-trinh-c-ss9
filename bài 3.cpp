#include <stdio.h>
int main() {
    int arr[100];
    int n, currentLength;
    printf("Nhap ss luong phan tu: ");
    scanf("%d", &n);
    if (n > 100 || n < 0){
        printf("Phan tu khong hop le");
        return 0;
    }
    currentLength = n;
    printf("Nhap phan tu:\n");
    for (int i = 0; i < n; i++){
        printf("[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int deleteIndex;
    printf("Nhap vi tri xoa: ");
    scanf("%d", &deleteIndex);
    if (deleteIndex < 0 || deleteIndex >= 100){
        printf("vi tri khong hop le\n");
        return 0;
    }
    for(int i = deleteIndex; i < n - 1; i++){
    	arr[i] = arr[i+1];
	}
    currentLength--;
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < currentLength; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
