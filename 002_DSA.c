//FOR FINDING BOTH MAXIMUM AND MINIMUM
#include<stdio.h>
int main(){
    int a[3],i;
  
        for(i=0;i<3;i++){
            printf("Enter an Elements:");
            scanf("%d",&a[i]);
        }

        for(i=0;i<3;i++){
            printf("Elements are:%d\n",a[i]);
        }

        int max = a[0];
        int min = a[0];

        for(i=1;i<3;i++){

            if(a[i]>a[0]){
                max = a[i];
            }
        if(a[i]<a[0]){
            min = a[i];
        }
    }
  printf("\n\nMAXIMUM NUMBER IS: %d", max);
    printf("\n\nMINIMUM NUMBER IS: %d", min);
    return 0;
}
