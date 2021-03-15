#include<stdio.h>
int main()
{
//("The food items are:\n1.Pizza,Rs-239\n2.Burger,Rs-129\n3.Pasta,Rs-179\n4.French Fries,Rs-99\n5.Sandwich,Rs-149");
int choice;
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Food Item-Pizza\nPrice-179");
break;
case 2:
printf("Food Item-Burger\nPrice-129");
break;
case 3:
printf("Food Item-Pasta\nPrice-179");
break;
case 4:
printf("Food Item-French Fries\nPrice-99");
break;
case 5:
printf("Food Item-Sandwich\nPrice-149");
break;
default :
printf("No choice found");
}
}
