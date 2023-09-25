#include <stdio.h>

int main()
{
    
    int list[] = {5, 3, 8, 1, 2, 7};
    int n, i, j, tmp, min;

    n = sizeof(list) / sizeof(int);

    for (i = 0; i < n - 1; i++){
        
        for(j=0; j<n; j++){
            
            if(list[j]>list[j+1]){
                
                tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
        
        for(int k=0; k<n; k++)
            printf("%d ", list[k]);
        printf("\n");
    }
    
    for(i=0; i<n; i++)
        printf("%d ", list[i]);
        
    
    return 0;
}

