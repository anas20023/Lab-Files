#include <stdio.h>

int main()
{
    printf("\t\t\t\t\tSend Instructions\n\n");
    printf("no cash\n");
    printf("1.Send Money\n");
    printf("2.Send Money to Non-noCash User\n");
    printf("3.Mobile Recharge\n");
    printf("4.Payment\n");
    printf("5.Cash out\n");
    printf("6.Pay Bill\n");
    printf("7.Micro finance\n");
    printf("8.Download no cash App\n");
    printf("9.My No Cash\n");
    printf("10.Reset Pin\n\n");
    int n;
    scanf("%d", &n);

    switch (n)
    {

    case 1:
        printf("Enter a number:");
        int num;
        scanf("%d", &num);
        break;
    case 2:
        printf("Enter a Non No Cash number:");
        int num2;
        scanf("%d", &num2);
        break;
    case 3:
        printf("1.Robi\n");
        printf("2.Airtel\n");
        printf("3.Banglalink\n");
        printf("4.GrameenPhone\n");
        printf("5.Teletalk\n");
        printf("6.Get instant cashback on NoCash Recharge\n");
        printf("7.Main Menu\n");

        int num3;
        scanf("%d", &num3);
        switch (num3)
        {
        case 1:
            printf("Enter Robi Number:");
            int robi;
            scanf("%d", &robi);
            break;

        case 2:
            printf("Enter Airtel Number:");
            int air;
            scanf("%d", &air);
            break;
        case 3:
            printf("Enter BL Number:");
            int bl;
            scanf("%d", &bl);
            break;
        case 4:
            printf("Enter GP Number:");
            int gp;
            scanf("%d", &gp);
            break;
        case 5:
            printf("Enter Teletalk Number:");
            int tlt;
            scanf("%d", &tlt);
            break;
        default :
            printf("\aInvalid Choice!\n");
        }
        printf("Enrer your Amount:");
        int am;
        scanf("%d",&am);
        if(am<20)
        {
            printf("Amount must be 20 Taka or More...\n");
            break;
        }
        break;
    case 4:
        printf("Enter a number for Payment:");
        int num4;
        scanf("%d", &num4);
        break;
    case 5:
        printf("1.Cash out from Agent\n");
        printf("2.cash out from ATM\n");
        int num5;
        scanf("%d", &num5);
        switch (num5)
        {

        case 1:
            printf("Enter Agent Number:");
            int agent;
            scanf("%d", &agent);
            break;
        case 2:
            printf("Enter ATM Booth Number:");
            int atm;
            scanf("%d", &atm);
            break;
        }

        break;
    case 6:
        printf("Pay Your Bill:");
        int num6;
        scanf("%d", &num6);
        break;
    case 7:
        printf("Your Micro Finance Account Number Here:");
        int num7;
        scanf("%d", &num7);
        break;
    case 8:
        printf("Download Our App From here:\t");
        printf("https://cut.ly/nocash_app\n");

        break;
    case 9:
        printf("My No Cash number:+880155247614\n");
        printf("My No Cash Balance:500.10 BDT\n");

        break;
    case 10:
        printf("Call Us to Reset Pin\n\n");
        printf("Our Contact Number:+8801158146535\n");
    default:
        printf("Invalid Input\n");
        printf("Back to Main Menu\n");
    }

    return 0;
}
