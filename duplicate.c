//Printing duplicate elements and count of duplicates
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
    // int count = 0;
    // for(int i = 0;i<n;i++) {
    //     int c = 1;
    //     for(int j = i+1;j<n;j++) {
    //         if(a[i]==a[j]) c++;
    //     }
    //     if(c==2) {
    //         count++;
    //         printf("%d ",a[i]);
    //     }
       int count=1;
       for(int i=1;i<n;i++){
        int c=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])c++;
            if(c==2) {
                count++;
                printf("%d ",a[i]);

        }
        
       }
    }
        printf("\nTotal number of duplicate elements : %d",count);

    return 0;
}
//======================================================
// ////Printing all elements occurrence
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the array size : ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter %d elements :",n);
//     for(int i = 0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
   
//     for(int i = 0;i<n;i++) {
//         int c = 1;
//         for(int j = i+1;j<n;j++) {
//             if(a[i]==a[j]) {
//                 c++;
//                 a[j] = '*';
//             }
//         }
//         if(a[i]!='*'){
//             printf("%d = %d\n",a[i],c);
//         }
       
       
//     }

//     return 0;

// }
