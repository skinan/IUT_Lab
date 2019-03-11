#include<stdio.h>
#include<math.h>


void main()
{
    int n,a,b;
    double t,sum;

    int i;
    printf("Enter Opening Range = ");
    scanf("%d", &a);
    printf("Enter Closing Range = ");
    scanf("%d", &b);

    for(i = a; i <= b; i = i + 1)
    {
        sum = 0;
        t = 0;
        for(n = i; n > 0; n = n / 10)
        {
            t = n % 10;
            sum = sum + pow((double)t, 3) ;

        }
        if( i == sum)
        {
            printf("%d\n", i);
        }

    }
    return 0;

}
