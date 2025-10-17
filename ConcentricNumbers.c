#include <stdio.h>

int main() {
    int n = 4;
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min_dist = i < j ? i : j;
            int rev_i = size - 1 - i;
            int rev_j = size - 1 - j;
            if (rev_i < min_dist) min_dist = rev_i;
            if (rev_j < min_dist) min_dist = rev_j;
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }

    return 0;
}
