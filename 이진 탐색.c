#include <stdio.h>

int list[] = {2, 6, 11, 13, 18, 20, 22, 27, 30, 34, 38, 41, 42, 45, 47};
int key, count, result;

int binary_search(int low, int high){
    
    int middle = (low + high) / 2;
    
    if(low <= high) {
        
        count++;
        if(list[middle] == key) return middle;
        else if(list[middle] > key) return binary_search(low, middle-1);
        else if(list[middle] < key) return binary_search(middle+1, high);
    }
    return -1;
}

int main()
{
    
    int n = sizeof(list) / sizeof(int);
    
    scanf("%d", &key);
    result = binary_search(0, n-1);
    
    if(result == -1) printf("탐색 실패");
    else printf("탐색 성공\n탐색 횟수 : %d", count);
    
    return 0;
}

