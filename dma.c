// C Program to demonstrate the use of malloc() function
#include <stdio.h> 
#include <stdlib.h> 
void main() { 
    // This pointer will hold the base address of the block created 
    int* usingmalloc,*usingcalloc,*usingrealloc; 
    int n,new, i; 
    // Get the number of elements for the array 
    printf("Enter number of elements:"); 
    scanf("%d",&n);
    // Dynamically allocate memory using malloc() 
    usingmalloc = (int*)malloc(n * sizeof(int)); 
    usingcalloc=(int*)calloc(n,sizeof(int));
   
    // Check if the memory has been successfully allocated by malloc or not
   printf("using malloc function: \n") ;
    if (usingmalloc == NULL) { 
        printf("Memory not allocated by malloc.\n"); 
    } 
    else { 
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n"); 
        // Get the elements of the array 
       for (i = 0; i < n; i++) { 
            printf("enter element no %d :",i+1) ;
            scanf("%d",&usingmalloc[i]);
        } 
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf(" %d , ", usingmalloc[i]); 
        } 
    } 
     printf("\n\nusing calloc function: \n"); 
      if (usingcalloc == NULL) { 
        printf("Memory not allocated by calloc.\n"); 
    } 
    else { 
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using calloc.\n"); 
        // Get the elements of the array 
        for (i = 0; i < n; i++) { 
            printf("enter element no %d :",i+1) ;
            scanf("%d",&usingcalloc[i]);
        } 
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf(" %d , ", usingcalloc[i]); 
        } 
    } 
    printf("\n\nusing realloc function for calloc array : \n"); 
    printf("Enter new number of elements:"); 
    scanf("%d",&new);
    usingrealloc=(int*)realloc(usingcalloc,new*(sizeof(int)));
      if (usingrealloc == NULL) { 
        printf("Memory not allocated by realloc.\n"); 
    } 
    else { 
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using realloc.\n"); 
        // Get the elements of the array 
        for (i = 0; i < new; i++) { 
            printf("enter element no %d :",i+1) ;
            scanf("%d",&usingrealloc[i]);
        } 
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < new; ++i) { 
            printf(" %d , ", usingrealloc[i]); 
        } 
    } 
    printf("\n\nusing free function : \n") ;
     free(usingmalloc);
     printf(" malloc memory freed successfully\n ");
}