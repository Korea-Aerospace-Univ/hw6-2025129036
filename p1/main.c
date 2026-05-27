#include <stdio.h>
int main()
{
    char arr[11];
    int max = 0;
    char result = 0;
    
    scanf("%s", arr);
    
    for(char *p = arr; p < arr + 10; p++) {
        int count = 0;
        
        for (char *q = arr; q < arr + 10; q++) {
            if (*q == *p){
                count++;
            }
        }
            if (count > max){
                max = count;
                result = *p;
        }
    }
    printf("%c %d", result, max);
    return 0;
}
