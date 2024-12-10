#include <stdio.h>
int main(){
    int arr[100]; //mang
    int n, position, value, sum, max, min, checkNumber;
    printf("1.Enter array \n");
	printf("2.Show array \n");
	printf("3.Print out even numbers and sum of it in string \n");
    printf("4.MAX and MIN value in array \n");
	printf("5.Prime number in array \n");
	printf("6.Amount of duplicate numeber in array \n");
	printf("7.Add element \n");
	printf("8.Exit \n");
    int menu;
    printf("Your choice: ");
    scanf("%d",&menu);
    while(menu>8){ //neu menu chon khac 6 thi hoi lai
        printf("Your choice: ");
        scanf("%d",&menu);
    }
    while(menu<8){
        switch(menu){
            case 1: 
                printf("Select number of elements in array: ");
                scanf("%d",&n);
                for(int i=0;i<n;i++){
                printf("Input elemet number %d: ",i + 1);
                scanf("%d",&arr[i]);
                    }
                max=arr[0];
                min=arr[0];
                break;
            case 2:
                for(int i=0;i<n;i++){
                printf("[%d]",arr[i]);
                    }
                printf("\n");
                break;
            case 3:
                for(int i=0;i<n;i++){
                    if(arr[i]%2==0){
                        printf("[%d]",arr[i]);
                        sum+=arr[i];
                        }
                    }
                printf("\nSum of even numbers in the array = %d\n",sum);
                break;
            case 4:
                for(int i=0;i<n;i++){
                    if(arr[i]>max){
                        max=arr[i];
                        }
                    else if(arr[i]<min){
                        min=arr[i];
                        }
                    }
                printf("Max value in the array: %d\n",max);
                printf("Min value in the array: %d\n",min);
                break;
            case 5:
                for(int i=0;i<n;i++){
                    int prime=1;
                    for(int k=2;k<arr[i];k++){
                        if(arr[i]%2==0){
                            prime=0;
                        }
                    }
                    if(prime==1){
                        printf("[%d]",arr[i]);
                    }
                }
                printf("\n");
                break;
            case 6:
                int count=0;
                printf("Number to check duplicate: ");
                scanf("%d",&checkNumber);
                for(int i=0;i<n;i++){
                    if(arr[i]=checkNumber){
                        count++;
                        }
                }
                printf("There is %d duplicate in the array\n",count);
                break;
            case 7:
            printf("Select position you want to add: ");
                scanf("%d",&position);
                printf("Input new value: ");
                scanf("%d",&value);
                for(int i=n;i>position;i--){ //vong lap chay tu cuoi mang den vi tri can thay
                        arr[i] = arr[i - 1]; //phan tu sau = phan tu truoc
                    }
                arr[position]=value; //them vao vi tri can thay
                n++; //tang do dai mang 
                break;
        }
        printf("Your choice: "); //hoi lai cho den khi chon 6. thoat
        scanf("%d",&menu);
    }
}
