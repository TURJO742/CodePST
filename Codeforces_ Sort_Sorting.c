#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int cnt[26] = {0};
    getchar();

    for (int i = 0; i < n; i++)
    {
        char ch = getchar();
        cnt[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
        {
            putchar(i + 'a');
        }
    }
    putchar('\n');
    return 0;
}
