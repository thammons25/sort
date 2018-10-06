#include <iostrean> 
using namespace std;
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)          
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
}
int main() 
{ 
    int n;cin>>n;
    int arr[n];
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i])<<" ";
    return 0; 
} 
