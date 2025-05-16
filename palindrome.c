#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string:\n");
    scanf("%s",str);
    int n = strlen(str);
    int flag=1;

    for (int i=0;i<n/2;i++){
        if (str[i] != str[n-i-1]){
        flag=0;
        break;
        }
    }

    printf(flag==0 ? "its not a palindrome\n" : "it is a palindrome\n");
    return 0;
}