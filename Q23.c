#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int greenCost, purpleCost;
        scanf("%d %d", &greenCost, &purpleCost);

        int n;
        scanf("%d", &n);

        int solved1 = 0;
        int solved2 = 0;

        for (int i = 0; i < n; i++) {
            int p1, p2;
            scanf("%d %d", &p1, &p2);

            if (p1 == 1) {
                solved1++;
            }
            if (p2 == 1) {
                solved2++;
            }
        }

        int costOption1 = solved1 * greenCost + solved2 * purpleCost;
        int costOption2 = solved1 * purpleCost + solved2 * greenCost;

        if (costOption1 < costOption2) {
            printf("%d\n", costOption1);
        } else {
            printf("%d\n", costOption2);
        }
    }

    return 0;
}