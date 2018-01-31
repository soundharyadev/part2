#include <stdlib.h>
 int main() 
 {
    int f, d, t, val, s=0, i;
    printf("Enter the number of terms in AP series\n");
    scanf("%d", &t);
     printf("Enter first term and common difference of AP series\n");
    scanf("%d %d", &f, &d);
    val = f;
    printf("AP SERIES\n");
    for(i = 0; i < t; i++) 
    {
        printf("%d ", val);
        s += val;
        val = val + d;
    }
     printf("\nSum of the AP series till %d terms is %d\n", t, s);
 return 0;
}
