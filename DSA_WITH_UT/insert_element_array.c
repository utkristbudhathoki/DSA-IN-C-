#include<stdio.h>
int main(){
    int a[10],i,pos,val;
    
    for(i= 0;i<9;i++){
        printf("\n Enter Number");
        scanf("%d",&a[i]);
    }
    printf("Enter position to insert:");
    scanf("%d",&pos);
    printf("Enter value to be inserted:");
    scanf("%d",&val);

    printf("\n Original Array is :");
    for(i=0;i<=9;i++)
        printf("%d\t",a[i]);
    
        for(i=8;i>=pos-1;i--)
        a[i+1] = a[i];
    a[pos-1]=val;
    printf("\n Updated Array is:");
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);
return 0;

}