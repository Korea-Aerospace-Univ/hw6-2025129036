#include <stdio.h>

int main()
{
    int a[20], b[20];
    int N;
    
    scanf("%d", &N);
    
    for (int *p = a; p < a + N; p++)
        scanf("%d", p);
        
    for (int *p = b; p < b + N; p++)
        scanf("%d", p);
    
    for (int *p = a, *q = b + N -1; p < a + N; q--, p++)
        printf(" %d", *p + *q);
  
    return 0;
}
