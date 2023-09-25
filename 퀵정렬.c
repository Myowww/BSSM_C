#include <stdio.h>
#define SWAP(a, b) {int tmp = a; a = b; b = tmp;}

int partition(int list[], int left, int right) {
   int pivot, low, high;
   
   low = left;
   high = right+1;
   pivot = list[left];
   
   do {
       
      do {
         low++;
      }while(pivot > list[low]);
      
      do {
         high--;
      }while(pivot < list[high]);
      
      if(low<high)
         SWAP(list[low], list[high]);
         
   }while(low < high);
   
   SWAP(list[left], list[high]);
   
   return high;
}

void quicksort(int list[], int left, int right) {
   int q;
   
   if(left < right) {
      q = partition(list, left, right);
      
      quicksort(list, left, q-1);
      quicksort(list, q+1, right);
   }
}

int main()
{
    int list[] = {5, 3, 8, 4, 9, 1, 6, 2, 7};
    // int list[] = {1, 3, 2, 4};
    
    int n;
    n = sizeof(list) / sizeof(int);
    
    quicksort(list, 0, n-1);
    
    for(int i=0; i<n; i++){
        printf("%d ", list[i]);
    }

    return 0;
}

