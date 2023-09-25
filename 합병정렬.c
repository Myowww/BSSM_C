#include <stdio.h>
int result[100];

void merge(int list[], int left, int mid, int right){
    int i, j, k, l;
    
    i = left;
    j = mid + 1;
    k = left;
    
    while(i <= mid && j <= right){
        if(list[i] <= list[j])
            result[k++] = list[i++];
        else
            result[k++] = list[j++];
    }
    
    if(i > mid){
        for(l=j; l <= right; l++){
            result[k++] = list[l];
        }
    } 
    
    else{
        for(l=i; l <= mid; l++){
            result[k++] = list[l];
        }
    }
    
    for(l=left; l <= right; l++)
        list[l] = result[l];

}

void mergesort(int list[], int left, int right){
    int mid;
    
    if(left < right){
        mid = (left + right) / 2;
        
        mergesort(list, left, mid);
        mergesort(list, mid+1, right);
        
        merge(list, left, mid, right);
    }
}

int main()
{
    int list[] = {27, 10, 12, 20, 25, 13, 15, 22};
    
    // 리스트 개수
    int n = sizeof(list)/sizeof(int);
    int i;
    
    // 합병 정렬
    mergesort(list, 0, n-1);
    for(i=0; i<n; i++){
        printf("%d ", list[i]);
    }
    
    return 0;
}

