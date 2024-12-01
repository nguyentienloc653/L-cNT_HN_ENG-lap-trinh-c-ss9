#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5, position, value;
    printf("1.Nhap vao mang \n");
	printf("2.Hien thi mang \n");
	printf("3.Them phan tu \n");
    printf("4.Sua phan tu \n");
	printf("5.Xoa phan tu \n");
	printf("6.Thoat \n");
    int choice;
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    while(choice > 6){
        printf("Lua chon cua ban ");
        scanf("%d", &choice);
    }
    while(choice < 6){
        switch(choice){
            case 1: 
                printf("Nhap so luong phan tu trong mang: ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++){
                printf("[%d] = ",i);
                scanf("%d", &arr[i]);
                    }
                break;
            case 2:
                for(int i = 0;i < n;i++){
                printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Nhap vi tri can them: ");
                scanf("%d", &position);
                printf("Nhap gia tri moi: ");
                scanf("%d",&value);
                for(int i = n; i > position; i--){ 
                        arr[i] = arr[i - 1]; 
                    }
                arr[position] = value; 
                n++; 
                break;
            case 4:
                printf("Chon vi tri can thay doi: ");
                scanf("%d", &position);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[position] = value;
                break;
            case 5:
                printf("Chon vi tri can xoa: ");
                scanf("%d", &position);
                for(int i = position; i < n - 1; i++){ 
                        arr[i] = arr[i+1]; 
                    }
                n--;
            }
        printf("lua chon cua ban: "); 
        scanf("%d",&choice);
    }
    return 0;
}
