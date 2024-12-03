#include <stdio.h>
int main()
{
    char word[1000001];
    int a[26] = {
        0,
    };
    scanf_s("%s", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
            word[i] -= 32;
        a[word[i] - 65]++;
    }
    int max = a[0];
    int flag = 0;
    for (int i = 0; i < 26; i++)
        if (max < a[i])
        {
            max = a[i];
            flag = i;
        }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
        if (max == a[i])
            cnt++;
    if (cnt == 1)
        printf("%c", flag + 65);
    else
        printf("?");
    return 0;
}