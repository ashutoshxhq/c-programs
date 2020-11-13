#include <stdio.h>
int main()
{
    int pass = 12345, p, i, n = 3, m, o, otp = 123;
    long long int mob = 9876543211;
    printf("enter the password:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p);
        if (p == pass)
        {
            printf("password is correct");
            return 0;
        }
        else
        {
            printf("you can try again");
        }
    }

    printf("you can reset your password\n\n");
    printf("you have to provide your mob no.\n");
    printf("enter your mob no.:");
    scanf("%d", &m);

    if (m == mob)
    {
        printf("mob matches the previous stored no.\n");
        printf("you can change the password");
    }
    else
    {
        printf("an OTP is send to your registered mail id\n ");
        printf("enter the otp:");
        scanf("%d", &o);
        if (o == otp)
        {
            printf("you can reset the password");
        }
        else
        {
            printf("you password is incorrect");
        }
    }

    return 0;
}