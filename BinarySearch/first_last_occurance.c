#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, x ,b, i, j ,n;
    printf("enter the size : ");
    if(!scanf("%d", &n)) return 0;
    
    int arr[n];

    for (int i=0; i<n; i++) {
        if (!(scanf("%d", arr+i))) return 0;
    }

    i=0, j=n-1;

    
}