#include <stdio.h>
#include <math.h>
/// wap using arithmetic operators to solve a mathematical equation
int main()
{​​​​
double a,b,c, root1, root2,D;
printf("Enter the values for a, b, &c to find\the roots of ax^2+bx+c :");
scanf("%lf%lf%lf",a,b,c);
printf("%lf", D =sqrt(b*b-4*a*c));
if(D>0){​​​​
printf("The roots are real and distinct\n");
printf("Root1 = %lf",root1 = (-b + D)/2*a);
printf("Root2 = %lf",root2 = (-b - D)/2*a);



}​​​​else if(D = 0){​​​​
printf("Roots are real and equal\n");
printf("Root1 = %lf", -b/2*a);
printf("Root2 = %lf", -b/2*a);
}​​​​else{​​​​
printf("Roots are imaginary");
}​​​​



return 0;
}​​​​