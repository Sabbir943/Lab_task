/*Write a program in C to calculate and print
 the electricity bill of a given customer. The
customer ID, name, and unit consumed by the user
 should be captured from the keyboard
to display the total amount to be paid to the 
customer.The charge are as follow :
Unit Charge/unit

upto 199 @1.20

200 and above but less than 400 @1.50

400 and above but less than 600 @1.80

600 and above @2.00

If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill
should be of Rs. 100/-
Test Data :
1001
James
800
Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00
*/
#include<stdio.h>
int main()
{
   int customerID,conu;
   float chg,surchg=0,gramt,netamt;
   char connm[25] ;
   printf("Input Customer IDNO:");
   scanf("%d",&customerID);
   printf("Input Customer Name:");
   scanf("%s",&connm);
   printf("Input the unites of consumed:");
   scanf("%d",&conu);
   if(conu<200)
   chg=1.20;
   else if(conu>=200&&conu<=400)
   chg=1.50;
   else if(conu>=400&&conu<=600)
   chg=1.80;
   else
   chg=2.00;
   gramt=conu*chg;
   if(gramt>400)
   {
    surchg=(gramt*15)/100.0;
    netamt=gramt+surchg;
   }
   if(gramt<100)
   netamt=100;
   printf("\n-------Electricity Bill-------\n");
   printf("Customer IDNO :%d\n",customerID);
   printf("Customer Name :%s\n",connm);
   printf("Unit consumed :%d\n",conu);
   printf("Amount charge @Rs. %.2f per unit:%.2f\n",chg,gramt);
   printf("Surcharge Amount :.%.2f\n",surchg);
   printf("Net Amount Paid By the Customer :%.2f\n",netamt);
   return 0;

}