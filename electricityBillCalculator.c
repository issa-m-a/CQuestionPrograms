/*
Write a C program that will calculate and print bills for the city power company. The rates
vary depending on whether the use is residential (R), commercial (C), or industrial (I).
A code R means residential use, code C is commercial use, and code I means industrial use.
Any other code should be treated as an error. The rates are computed as follows:
R: sh. 500 plus sh. 4.8 per K Wts. used 
C: sh. 50,000 for the first 1000 KWts. and sh. 3.75 for each additional KWs.
I: rate varies depending on time of usage:
 -Peak hours: Sh. 68,000 for first 1000 KWts. and Sh. 5.60 for each additional KWts. 
 -Offpeak hours: Sh. 37,000 for first 1000K Wts. and Sh. 2.75 for each additional KWts.
The C program should prompt the user to enter an integer account number, the user code
(type rate), and the necessary consumption figures in whole numbers kilowatts hours.
The program should display the amount due from the user.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int accountNumber;
    char userCode,peakOffPeak;
    double KWsUsed,amountDue;

    //prompts user to input their acc number
    printf ("Enter your account number\n");
    scanf("%d",&accountNumber);
    printf("Your account number is %d\n",accountNumber);

    //prompts user to enter their user code and prints out invalid if the input isn't R,C or I.
    printf("Kindly enter your usercode: Use R for residential, C for Commercial and I for Industrial\n");
    scanf(" %c",&userCode);//there should be a space before %c for it to take an input otherwise it won't run
    if (userCode == 'R' || userCode == 'r')
    {
        printf("Your user code is of type Residential (R)\n");
    }else if (userCode == 'C' || userCode == 'c')
    {
        printf("Your user code is of type Commercial (C)\n");
    }else if (userCode == 'I' || userCode == 'i')
    {
        printf("Your user code is of type Industrial (I)\n");
    }else 
    {
        printf("Invalid user code entered");
        return 1;//this ends the program if the input is invalid
    }

    //prompts the user to enter number of KWs
    printf("Enter the number of KiloWatts used\n");
    scanf("%lf",&KWsUsed);
    printf("You've spent %.2f KWs this month\n",KWsUsed);
 
    //Calculates amount due depending on the user code they've inputed 
    if (userCode=='R' || userCode=='r')
    {
        amountDue=500+(4.8*KWsUsed);
        
    }else if (userCode == 'C' || userCode == 'c')
    {
        if (KWsUsed<=1000)
        {
            amountDue=50000;
        }else
        {
            amountDue=50000+(KWsUsed-1000)*3.75;
        }
        
    }else if (userCode == 'I' || userCode == 'i')
    {
        printf("Is this during Peak hours (P) or OffPeak hours (O):\n");
        scanf(" %c",&peakOffPeak);

        if (peakOffPeak=='P' || peakOffPeak=='p')
        {
            if (KWsUsed<=1000)
            {
                amountDue=68000;
            }else 
            {
                amountDue=68000+(KWsUsed-1000)*5.6;
            }
            
        }//if input is neither P or O it returns invalid
        else if (peakOffPeak=='O' || peakOffPeak=='o')
        {
            if (KWsUsed<=1000)
            {
                amountDue=37000;
            }else
            {
                amountDue=37000+(KWsUsed-1000)*2.75;
            }
            
        }else 
        {
            printf("Invalid peak/off-peak input\n");
            return 1;
        } 
        
    }
    printf("The amount due is %.2f\n",amountDue);

    return 0;
}
