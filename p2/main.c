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
    
    int *p = a + N - 1;
    int *q = b + N - 1;
    
    
    while (p >= a){
        printf(" %d", *p + *q);
    q--;
    p--;
    }
    
    return 0;
}
