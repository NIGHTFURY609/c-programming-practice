#include<stdio.h>
int main(){
    int array[] = {1,4,6,2,9,1,5};
    int n = sizeof(array)/sizeof(array[0]);
    int largest=array[0];
    int smallest=array[0];
    for (int i=1;i<n;i++){
        if (array[i]>largest){
        largest=array[i];
        }
        
        if (array[i]<smallest){
            smallest=array[i];
        }
    }
    printf ("largest:%d\n",largest);
    printf ("smallest:%d\n",smallest);

}