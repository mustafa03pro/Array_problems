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
   
   for(int i = 0;i<n;i++) {
      for(int j = a[i];j<a[i+1];j++){
          if(j!=a[i]) {
              printf("%d ",j);
          }
      }
   }

    return 0;
}