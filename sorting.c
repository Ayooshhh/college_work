#include <stdio.h>
int main()
{
          int n, i, j, x, temp;
          int a[n];
          printf("Enter the size of array\n");
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
        for(i=0; i<n; i++){
                  printf("%d\n", a[i]);
       }
       return 0;
}       
