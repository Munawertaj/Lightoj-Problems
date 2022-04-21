//  https://lightoj.com/problem/ekka-dokka

#include <iostream>
using namespace std;
int main()
{
    int t, i;
    long long int w, even, odd;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> w;
        if ((w % 2) == 0)
        {
            even = 2;
            while (1)
            {
                odd = w / even;
                if ((odd % 2) != 0)
                    break;
                even = even * 2;
            }
            cout << "Case " << i << ": " << odd << " " << even << endl;
        }
        else
            cout << "Case " << i << ": "
                 << "Impossible" << endl;
    }
    return 0;
}