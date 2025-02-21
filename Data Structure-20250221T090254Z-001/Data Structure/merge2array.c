#include <stdio.h>

void main() {
    int n1, n2, a[20], b[20], res[40];
    int i = 0, j = 0, r = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter the first array: \n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter the second array: \n");
    for (j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    
    i = 0; 
    j = 0; 

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            res[r] = a[i];
            i++;
        } else {
            res[r] = b[j];
            j++;
        }
        r++; 
    }

    while (i < n1) {
        res[r] = a[i];
        r++;
        i++;
    }

    while (j < n2) {
        res[r] = b[j];
        r++;
        j++;
    }

    printf("Resultant Array: ");
    for (int k = 0; k < r; k++) {
        printf("%d ", res[k]); 
    }
    printf("\n");
}

