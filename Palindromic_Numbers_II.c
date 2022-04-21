//  https://lightoj.com/problem/palindromic-numbers-ii

#include <stdio.h>
long long int reverse(long long int num)
{
    int rem, res = 0;
    while (num > 0)
    {
        rem = num % 10;
        res = (res * 10) + rem;
        num = num / 10;
    }
    return res;
}
int main()
{
    int t, i;
    long long int num, rev;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lld", &num);
        rev = reverse(num);
        if (num == rev)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}