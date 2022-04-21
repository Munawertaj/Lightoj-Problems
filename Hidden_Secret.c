//  https://lightoj.com/problem/hidden-secret

#include <stdio.h>
#include <string.h>
int main()
{
    int t, i, c1[130], c2[130], j, len1, len2, x;
    char str[101], ch[101];
    scanf("%d", &t);
    scanf("%*c");
    for (i = 1; i <= t; i++)
    {
        gets(str);
        gets(ch);
        len1 = strlen(str);
        len2 = strlen(ch);
        for (j = 97; j <= 122; j++)
        {
            c1[j] = 0;
            c2[j] = 0;
        }
        for (j = 0; j < len1; j++)
        {
            x = (int)str[j];
            if (x < 97)
                x = x + 32;
            c1[x]++;
        }
        for (j = 0; j < len2; j++)
        {
            x = (int)ch[j];
            if (x < 97)
                x = x + 32;
            c2[x]++;
        }
        for (j = 97; j <= 122; j++)
        {
            if (c1[j] != c2[j])
                break;
        }
        if (j > 122)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}