//Rotate the array N times  clock wise[Left shifting]
#include <stdio.h>

int main()
{
    int n, r;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements :",n);
    for(int i = 0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter number of rotation : ");
    scanf("%d",&r);//4
   
    r =r%n;
    while(r!=0) {
     int temp = a[0];
     for(int i = 0;i<n-1;i++) {
         a[i] = a[i+1];
     }
     a[n-1] = temp;
     r--;
    }
   
   for(int i = 0;i<n;i++) {
       printf("%d ",a[i]);
   }

    return 0;
}