#include <stdio.h>
int main()
{
          int n, i, j, x, temp;
          int a[n];
          printf("Enter the size of array\n");      // kaam baki hai
          scanf("%d",&n);
          printf("Enter elements for array\n");
          
          for(i=0; i<n; i++){
              scanf("%d",&a[i]);         
         }
         x= a[0];
         for(i=0; i<n; i++)
         {
                 for(j=0; j<n; j++){
                  
                            if(a[i] < a[j]){
                               temp = a[i];
                               a[i] = a[j];
                               a[j] = temp;
                         }
               }                
       }    
        printf("order of elements in the given array are\n");                  
        for(i=0; i<n; i++){
        
                 printf("%d\n", a[i]);
       }
        printf("horizontal histogram of sorting array\n");
        for(i=0; i<n; i++){
        for(j=0; j<a[i];j++){
                  printf("@");
                  }
                  printf("\n");
       }
       printf("verical histogram of sorting array\n"); 
       for(i=0; i<n; i++){
                  for (j=0; j<a[i]; j++){
                         if(a[j]<=i){
                         printf(" ");
                         }
                         else{
             printf("@ ");
       }
       }
       }
       
       
    return 0;
}       
