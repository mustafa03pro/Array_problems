// #include<stdio.h>
// int main(){
//     int a[100],n,i,j,c,count;
//     scanf("%d",&n);
//     if(n<0){
//         printf("Invalid size...!");return 0;
//     }
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
   
     
//       for(int i = 0;i<n;i++) {
        
//         for(int j = 2;j<=n/2;j++) {
//             int c=1;
//             if(a[i]%j==0) {
//                 c++;
                
//             }
//         }
//         if(c==2){
//             printf("%d",a[i]);
//         }
//     }
  
//     return 0;
// }
#include <stdio.h>

int main() {
    int a[100], n;

    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid size...!");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    //printf("Prime numbers in the array:\n");
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int isPrime = 1;

        if (num <= 1) {
            continue;  // skip non-prime numbers
        }

        for (int j = 2; j <= num / 2; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    return 0;
}
