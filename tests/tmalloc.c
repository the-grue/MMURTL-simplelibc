#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    int* ptr; 
    int n, i; 
  
    n = 100; 
    printf("Enter number of elements: %d\r\n", n); 
  
    ptr = (int*)malloc(n * sizeof(int)); 
  
    if (ptr == NULL) { 
        printf("Memory not allocated.\r\n"); 
        exit(0); 
    } 
    else { 
  
        printf("Memory successfully allocated using malloc.\r\n"); 
  
        for (i = 0; i < n; ++i) { 
            ptr[i] = i + 1; 
        } 
  
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d ", ptr[i]); 
        } 
	printf("\r\n");
    } 
  
    return 0; 
} 
