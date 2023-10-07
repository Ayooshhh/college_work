#include <stdio.h>
int main(){
         int n,i=0,x;
         int a[n];
         printf("Enter the size of array\n");
         scanf("%d",&n);
         printf("Enter elements for array\n");
                  
                  
         for(i=0; i<n; i++){
              scanf("%d",&a[i]);         
         }
         x= a[0];
         for(i=0; i<n; i++){
             if(a[i]<x){
                  x= a[i];
         }
   }      
         printf("the smallest value of array is %d\n",x);  
        return 0;
 }     
