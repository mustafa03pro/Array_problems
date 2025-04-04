#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements :",n);
    for(int i = 0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i = 0;i<n;i++) {
        int c = 0;
        for(int j = 0;j<n;j++) {
            if(a[i]==a[j]) c++;
        }
        if(c==1) {
            count++;
            printf("%d ",a[i]);
        }
       
    }
        printf("\nTotal number of unique : %d",count);

    return 0;
}