#include <cs50.h>
#include <stdio.h>

/*
int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", n);
    printf("%p\n", &n);
    printf("%p\n", p);
}
*/

int main(void)
{
    string s = "HI!";
    char c = s[0];
    char *p = &c;
    //char *s = "HI!";
    printf("%p\n", p);
    //printf("%s\n", s);
    //printf("%s\n", s);
}