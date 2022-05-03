#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*
    long ans;
    do
    {
        ans = get_long("Number: ");
    }
    while (ans < 1e12 && 1e13 <= ans && ans < 1e14 && ans > 1e16);

    printf("%li\n", ans);

*/

    long ans = get_long("Number: ");

    //invalid test - digit
    int i = 1;
    long d = ans;
    while (d > 10)
    {
        d = d / 10;
        i++;
    }
    if (i != 13 && i != 15 && i != 16)
    {
        printf("INVALID\n");
    }

    //invalid test - Luhn’s Algorithm
    int t_ans = 0;
    for (i = 1; (ans % 10 ^ i) < 10; i += 2)
    {
        t_ans += (ans % 10^i) * 2;
        printf("%i\n", t_ans);
    }
    printf("%i\n", t_ans);

    int x = 456 / 10;
    printf("%i\n", x);


}