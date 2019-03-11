/*"Cube Numbers" are those numbers which number's summation of each digit's cube, is equal to the value of that number.
Example :  371 = (1)cube + (7)cube + (3)cube .*/

#include<stdio.h>
#include<math.h>


void main()
{
    int n,a,b;
    double t,sum;

    int i;
    //Enter starting point of the range
    printf("Enter Opening Range = ");
    scanf("%d", &a);
    //Enter closing point of the range
    printf("Enter Closing Range = ");
    scanf("%d", &b);

    for(i = a; i <= b; i = i + 1)
    {
        sum = 0;
        t = 0;
        for(n = i; n > 0; n = n / 10)
        {
            t = n % 10;
            sum = sum + pow((double)t, 3);//double is used to typecast here 

        }
        if( i == sum)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
