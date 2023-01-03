#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()

{

    int units;
	int i;

    float total_bill;
    system("color 9f");
     static CONSOLE_FONT_INFOEX  fontex;
     fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
     HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
     GetCurrentConsoleFontEx(hOut, 0, &fontex);
     fontex.FontWeight = 50;
     fontex.dwFontSize.X = 15;
     fontex.dwFontSize.Y = 15;
     SetCurrentConsoleFontEx(hOut, NULL, &fontex);

     char cont = 'y';
while(cont == 'y'){

    printf("\n\n\t\t WELLCOME TO ELECTRICITY BILLING SYSTEM \n\n");

    printf("\t       ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");
    printf(" \t      **( Meter Service Charge is 50/- Tk with included 5%% VAT )**\n\n");

  for(i=0;i<70;i++)

		printf("=");

    printf("\n\t 0 To 50 Units ........................   =taka.3.75/Unit  ||\n\n");

    printf("\t 51 To 75 Units ......................... =taka.4.19/Unit  ||\n\n");

    printf("\t 76 To 200 Units ........................ =taka.5.72/Unit  ||\n\n");

    printf("\t 201 To 300 Units ....................... =taka.6/Unit     ||\n\n");

    printf("\t 301 To 400 Units ....................... =taka.6.34/Unit  ||\n\n");
    printf("\t 401 To 600 Units ....................... =taka.9.94/Unit  ||\n\n");

    printf("\t600+ Units ...........................    =taka.11.56/Unit ||\n\n");

	for(i=0;i<70;i++)
		printf("=");

    printf("\nPlease Enter Your Total Units Consumed : \n\n");


    scanf("%d", & units);

    if (units <= 50)

    total_bill = units * 3.75+50;

    else if (units <= 75)

    total_bill = units * 4.19+50;

    else if (units <= 200)

    total_bill = units * 5.75+50;  // Here meter bill 50 T aka

    else if (units <= 300)

    total_bill = units * 6+50;

    else if (units <= 400)

    total_bill = units * 6.34+50;

    else if (units <= 600)

    total_bill = units * 9.94+50;

    else total_bill = units * 11.56+50;
    total_bill=(total_bill*1.05);  // here we add VAT 5%


    printf("\n\nYour Total Bill Is taka = %f", total_bill);


    getch();

    printf("\n\nDo you want to continue?[y/n]:\t");
scanf("%s",&cont);
system("cls");
}
}
