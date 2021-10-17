#include <stdio.h>
void main()
{
    float amount,netAmount;
    char member;
    printf("Enter amount:");
    scanf("%f", &amount);
    printf("Enter a member or not(m/n):");
    getchar();//enter character also captured by scanf so we need to insert this function, always before [scanf %c]
    scanf("%c",&member);

    switch (member)
    {
        case 'm':
            if (amount > 5000)
            {
                netAmount = amount * 0.85;
            }
            else
            {
                netAmount = amount * 0.9;
            }
            printf("Net amount is %0.f",netAmount);
            break;
        case 'n':
            if (amount>5000)
            {
                netAmount = amount * 0.93;
            }
            else
            {
                netAmount = amount;
            }
            printf("Net amount is %0.2f",netAmount);
            break;
    }
}

