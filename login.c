// wap to check if the number is even or odd

#include <stdio.h>
#include <string.h>

int main()
{
    int otp;
    long long int phone;
    char password[100], storedPassword[100] = "ashutosh";
    for (int i = 0; i < 3; i++)
    {
        fgets(password, sizeof(password), stdin);

        if (strcmp(password, storedPassword) == 0)
        {
            printf("\nPassword Correct");
            break;
        }
        else
        {
            printf("\nIncorrect Password, Attempts left = %d\n", 2 - i);
        }
    }
    if (strcmp(password, storedPassword) !=0)
    {
        printf("\nEnter your Phone No:");
        scanf("%lld", &phone);
        printf("%lld",phone);
        if (phone == 6207689508)
        {
            printf("\nEnter new password:");
            gets(storedPassword);
            printf("\nPassword Updated !");
        }
        else
        {
            printf("\nOTP sent to your number, Enter OTP:");
            scanf("%d", &otp);
            printf("%d",otp);

            if (otp == 1234)
            {
                printf("\nEnter new password:");
                fgets(storedPassword, sizeof(storedPassword), stdin);
                printf("\nPassword Updated !");
            } else{
                printf("\nIncorrect OTP");
            }
        }
    }

    return 0;
}