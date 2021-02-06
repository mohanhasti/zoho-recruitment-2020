#include <stdio.h>

int main()
{
    int mat[5][5],i,j;
    for (i =1;i<=5;i++){
        for(j=5;j>=4;j--){
            
           printf("%d",j);
           
        }
        for(j=1;j<5;j++){
            printf("%d",5-i+1);
        }
        printf("\n");
    }

    
    return 0;
}
