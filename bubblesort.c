#include<stdio.h>
#include<string.h>

int main(){
    int arr[]={5,2,6,9,1,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0; i<n;i++){
        for(int j=0; j<n-i-1;j++){
            if ( arr[j]>arr[j+1] ){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
                printf("the sorted array is:");
                for(int i=0; i<n;i++){
            printf("%d",arr[i]);
            }
}