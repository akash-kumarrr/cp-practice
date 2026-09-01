#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

#define lp(i, e) for (int i = 0; i < e; i++)

bool is_valid_paranthesis(char* arr, int n) {
    char stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {

        if (*(arr + i) == '(') {
            *(stack + (++top)) = '(';
        }

        else if (*(arr + i) == ')') {

            if (top == -1)
                return false;

            if (stack[top] == '(')
                top--;
        }
    }
    return top == -1;
}

int main() {
    int n;

    if (scanf("%d", &n) != 1)
        return 0;

    char arr[n];

    for (int i = 0; i < n; i++) {
        if (scanf(" %c", arr + i) != 1)
            return 0;
    }

    is_valid_paranthesis(arr, n) ? printf("valid\n") : printf("not valid\n");

    return 0;
}
