#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
    char s[10], t;
    int a, b, c = 0;
    int n, i, m, j, q, r, p;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
        m = strlen(s);
        if (m > 1)
        {
        end:
            scanf("%d", &a);
            c = 0;
            for (j = 0; j < m; j++)//将char类型转化成int类型
            {
                r = j;
                q = 1;
                while (r < m - 1)
                {
                    q *= 10;
                    r++;
                }
                c += (s[j] - 48) * q;
            }
            b = a;
            a = c;
            if (t == 97)
            {
                printf("%d+%d=%d\n", a, b, a + b);
                p = a + b;
            }
            if (t == 98)
            {
                printf("%d-%d=%d\n", a, b, a - b);
                p = a - b;
            }
            if (t == 99)
            {
                p = a * b;
                printf("%d*%d=%d\n", a, b, a * b);
            }
            printf("%d\n", Long(a, b, p));
            if (m == 1)
                m++;
        }
        if (m == 1)
        {

            if (s[0] < 58)
                goto end;            //goto命令，弥补算法漏洞
            scanf("%d %d", &a, &b);
            if (s[0] == 97)
            {
                printf("%d+%d=%d\n", a, b, a + b);
                p = a + b;
            }
            if (s[0] == 98)
            {
                printf("%d-%d=%d\n", a, b, a - b);
                p = a - b;
            }
            if (s[0] == 99)
            {
                p = a * b;
                printf("%d*%d=%d\n", a, b, a * b);
            }
            t = s[0];
            printf("%d\n", Long(a, b, p));
        }
    }
    return 0;
}
int Long(int a, int b, int p)
{
    int count = 0;
    if (a == 0)
    {
        count++;
    }
    else
    {
        while (a > 0)
        {
            a /= 10;
            count++;
        }
    }
    if (b == 0)
    {
        count++;

    }
    else
    {
        while (b > 0)
        {
            b /= 10;
            count++;
        }
    }
    if (p < 0) {//减法有可能得到负数（说实话：没想到）
        p = -p;
        count++;
    }
    if (p == 0)
    {
        count++;
    }
    else
    {
        while (p > 0)
        {
            p /= 10;
            count++;
        }
    }
    return count + 2;
}