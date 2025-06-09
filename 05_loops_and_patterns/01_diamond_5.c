#include <stdio.h>

int main(void) {
    int n = 5;
    //upper part
    for (int i = 1; i <= n; i++) {
        // space
        for (int space = 0; space < 2*(n-i); space++) {
            printf(" ");
        }
        // decreasing 5-(i-1)
        for (int num = n; num >= n-(i-1); num--) {
            printf("%d ", num);
        }
        // increasing 5-(i-1)+1
        for (int num = n-(i-1)+1; num <= n; num++) {
            printf("%d ", num);
        }
        printf("\n");
    }
    // lower part
    for (int i = n-1; i>=1; i--) {
        // space
        for (int space = 0; space < 2*(n-i); space++) {
            printf(" ");
        }
        // decreasing 5-(i-1)
        for (int num = n; num >= n-(i-1); num--) {
            printf("%d ", num);
        }
        // increasing 5-(i-1)+1
        for (int num = n-(i-1)+1; num <= n; num++) {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}

//result
        5
      5 4 5
    5 4 3 4 5
  5 4 3 2 3 4 5
5 4 3 2 1 2 3 4 5
  5 4 3 2 3 4 5
    5 4 3 4 5
      5 4 5
        5
