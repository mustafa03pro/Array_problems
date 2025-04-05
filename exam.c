#include<stdio.h>
int main(){
    int a[100],n,i,j,c,count;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid size...!");return 0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The frequency of all elements of an array:\n");
    // 
      for(int i = 0;i<n;i++) {
        int c = 1;
        for(int j = i+1;j<n;j++) {
            if(a[i]==a[j]) {
                c++;
                a[j] = '*';
            }
        }
        if(a[i]!='*'){
             
        printf("%d occurs %d times\n",a[i],c);
    }
        }
  
    return 0;
}
// Input:
// 4 25 25 32 4

// Expected Output:
// The frequency of all elements of an array:
// 25 occurs 2 times
// 32 occurs 1 times
// 4 occurs 1 times
// Output:
// The frequency of all elements of an array:
// 25 occurs 2 times
// 32 occurs 1 times
// 4 occurs 1 times