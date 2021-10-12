#include <stdio.h>
#include <string.h>
#define ll long long
int main()
{
    char num1[32];
    char num2[32];

    scanf("%s %s", &num1, &num2);

    int carry = 0;
    char sum[32];

    int len1 = strlen(num1);
    int len2 = strlen(num2);
    if (len1 > len2)
    {
        int Endpoint = 0;
        for (int i = len1 - 1; i >= 0; i--)
        {
            if (num2[i] == '1' && num1[i] == '1' && carry == 0)
            {
                sum[i] = '0';
                carry = 1;
            }
            if ((num1[i] == '1' && num2[i] == '0') || (num2[i] == '1' && num1[i] == '0') && carry == 0)
            {
                sum[i] = '1';
            }

            if ((num1[i] == '1' && num2[i] == '0') || (num2[i] == '1' && num1[i] == '0') && carry == 1)
            {
                sum[i] = '1';
                carry = 1;
            }
            Endpoint = i;
        }
        for (int i = Endpoint - 1; i >= 0; i--)
        {
            if (num1[i] == '1' && carry == 1)
            {
                sum[i] = '0';
                carry = 1;
            }
            if (num1[i] == '1' && carry == 0)
            {
                sum[i] = '1';
                carry = 0;
            }
            if (num1[i] == '0' && carry == 1)
            {
                sum[i] = '1';
                carry = 0;
            }
            if (num1[i] == '0' && carry == 0)
            {
                sum[i] = '0';
                carry = 0;
            }
        }
    }
    else
    {
        int Endpoint = 0;
        for (int i = len2 - 1; i >= 0; i--)
        {
            if (num2[i] == '1' && num1[i] == '1' && carry == 0)
            {
                sum[i] = '0';
                carry = 1;
            }
            if ((num1[i] == '1' && num2[i] == '0') || (num2[i] == '1' && num1[i] == '0') && carry == 0)
            {
                sum[i] = '1';
            }

            if ((num1[i] == '1' && num2[i] == '0') || (num2[i] == '1' && num1[i] == '0') && carry == 1)
            {
                sum[i] = '1';
                carry = 1;
            }

            Endpoint = i;
        }

        for (int i = Endpoint - 1; i >= 0; i--)
        {
            if (num1[i] == '1' && carry == 1)
            {
                sum[i] = '0';
                carry = 1;
            }
            if (num1[i] == '1' && carry == 0)
            {
                sum[i] = '1';
                carry = 0;
            }
            if (num1[i] == '0' && carry == 1)
            {
                sum[i] = '1';
                carry = 0;
            }
            if (num1[i] == '0' && carry == 0)
            {
                sum[i] = '0';
                carry = 0;
            }
        }
    }

    printf("%s", sum);
    return 0;
}