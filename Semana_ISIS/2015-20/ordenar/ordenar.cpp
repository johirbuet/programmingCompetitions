#include <stdio.h>

int main() {
      long long TC, n, i, j;
      scanf("%lld", &TC);

      while(TC--) {
            scanf("%lld", &n);
            long long a[n];
            for(i = 0; i < n; i++)
                  scanf("%lld", &a[i]);
            
            long long ans = 0, current = 0;
            for (i = 0; i < n; i++) {
                  current = i;
                  for (j = i+1; j < n; j++)
                        current = (a[j] < a[current]) ? j : current;
                  
                  if (current != i) {
                        long long temp = a[i];
                        a[i] = a[current];
                        a[current] = temp;
                        ans += 1;
                  }            
            }
            printf("%lld\n", ans);
      }

      return 0;
}