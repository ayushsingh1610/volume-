#include<stdio.h>
void main()
{
float a,l,b,h,v1,v2;

printf("Enter the length - ");
scanf("%f",&l);
printf("Enter the breadth - ");
 scanf("%f",&b);
printf("Enter the height - ");
  scanf("%f",&h);
  printf("Enter the length of cube - ");
  scanf("%f",&a);
  
  v1=a*a*a;
  v2=l*b*h;
  
  printf("The volume of cube = %d",v1);
  printf("The volume of cuboid = %d",v2);
  }
  
 
