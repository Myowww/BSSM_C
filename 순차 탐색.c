#include <stdio.h>


int search(int list[], int n, int key){
    for(int j=0; j<n; j++){
        if(key == list[j]) return j;
    }
    
    return -1;
}

int main()
{
    
    int i, key, n, result;
    int list[] = {9, 5, 8, 3, 7};
    n = sizeof(list) / sizeof(int);
    
    scanf("%d", &key);
    
    result = search(list, n, key);
    
    if(result == -1) printf("탐색 실패");
    else printf("탐색 성공 \n탐색 횟수 : %d", result+1);
    
    return 0;
}


