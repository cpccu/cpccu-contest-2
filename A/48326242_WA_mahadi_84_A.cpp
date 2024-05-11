
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n + 1], b[n + 1];

        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 1; i <= n; i++) {
            scanf("%d", &b[i]);
        }

        int total_experience = 0;

        for (int i = 1; i <= n; i++) {
            if (i <= k) {
                total_experience += a[i];
            }

            if (i > 1) {
                int subsequent_completions = (k < i - 1) ? k : (i - 1);
                total_experience += b[i] * subsequent_completions;
                k -= subsequent_completions;
            }

            if (k == 0) {
                break;
            }
        }

        printf("%d\n", total_experience);
    }

    return 0;
}
