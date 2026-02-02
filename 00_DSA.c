//Accept AND DISPLAY ARRAY OF 10 ELEMENTS   
#include<stdio.h>
int main(){
    int a[2],i;
    for(i=0;i<2;i++){
        printf("Enter elements:");
        scanf("%d",&a[i]);
    }
    
        printf("Elements are :");
        for(i=0;i<2;i++)
        printf("\n%d",a[i]);
    
    return 0;
}