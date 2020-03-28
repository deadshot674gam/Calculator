#include<stdio.h>
int add()
{
	A:
	int n, i,j;
	float  a,sum=0;
	printf("\n\nHow many numbers you want to add:");
	scanf("%d", &n);
	printf("Enter the numbers:\n\n");
	for(i=1;i<=n;i++)
	{
		scanf("%f", &a);
		sum=sum+a;
	}
	printf("The sum of above integers is:%f", sum);
	printf("\nWant to do more additions? If yes press 1 otherwise press any other key:");
	scanf("%d", &j);
	if(j==1)
	goto A;return(0);
}
int factorial()
{	A:

	double n, j=1, m;
	int r;
	printf("Enter any nmber for calculating its factorial:");
	scanf("%lf", &n);
	if(n<0)
	{
		printf("Input Error");
		return(0);
	}
	for(m=n;m>=1;m--)
	{
		j=j*m;
	}
	printf("The factorial of given number is %lf", j);
	printf("\nWant to calculate more press 1 otherwise press any other number:");
	scanf("%d", &r);
	if(r==1)
	goto A;
}
#include<math.h>
int power()
{
	B:
	float a, b, c,j;
	printf("\n\nNote:if power is in fraction try to write it upto six decimal places.\n");
	printf("\nEnter base and power respectively:");
	scanf("%f %f", &a,&b);
	c=pow(a,b);
	printf("Your answer is %f", c);
//	printf("This is a wrong input.");
	printf("\nWant to do more calculations of this type? If yes press 1 otherwise press any other key:");
	scanf("%d", &j);
	if(j==1)
	goto B;
	return 0;
}
int difference()
{
	A:
	int j;
	float a,b;
	printf("\n\nEnter the numbers to calculate their difference:");
	scanf("%f %f", &a, &b);
	a=a-b;
	printf("The difference between above two numbers is:%f", a);
	printf("\nWant to do more substractions? If yes press 1 otherwise press any other key:");
	scanf("%d", &j);
	if(j==1)
	goto A;return(0);
}
int product()
{
	A:
	int n, i,j;
	float a, r=1;
	printf("\n\nEnter the number of integers you want to multiply:");
	scanf("%d", &n);
	printf("Enter the integers:");
	for(i=1;i<=n;i++)
	{
		scanf("%f", &a);
		r=r*a;
	}
	printf("The product of given numbers is:%f", r);
	printf("\nWant to do more multiplications? If yes press 1 otherwise press any other key:");
	scanf("%d", &j);
	if(j==1)
	goto A;
	return(0);
}
void division()
{
	int j;
	float a,b;
	A:
	printf("\n\nEnter the numbers:");
	scanf("%f %f", &a, &b);
	a=a/b;
	printf("The answer is %f ", a);
	printf("\nWant to do more divisions? If yes press 1 otherwise press any other key:");
	scanf("%d", &j);
	if(j==1)
	goto A;
}
void trigonometry()
{
	int a;
	float g;
	printf("\n\n\nEnter the following inputs for performing respective functions\n\n");
	printf("For tan-1\nFor sin-2\nFor cos-3\nFor hyperbolic tan-4\nFor hyperbolic sin-5\nFor hyperbolic cos-6\nFor cosec-7\nFor sec-8\nFor cot-9\nFor hyperbolic cosec-10\nFor hyperbolic sec-11\nFor hyperbolic cot-12\n");
	printf("Note: the measure of angle should be in radians.");
	printf("What you want to do?:");
	scanf("%d", &a);
	printf("Enter the measure of angle:");
	scanf("%f", &g);
	switch(a)
	{
	case 1:printf("%f", tan(g));
	break;
	case 2:printf("%f", sin(g));
	break;
	case 3:printf("%f", cos(g));
	break;
	case 4:printf("%f", tanh(g));
	break;
	case 5:printf("%f", sinh(g));
	break;
	case 6:printf("%f", cosh(g));
	break;
	case 7:printf("%f", g=1/sin(g));
	break;
	case 8:printf("%f", g=1/cos(g));
	break;
	case 9:printf("%f", g=1/tan(g));
	break;
	case 10:printf("%f", g=1/sinh(g));
	break;
	case 11:printf("%f", g=1/cosh(g));
	break;
	case 12:printf("%f", g=1/tanh(g));
	break;
	default:
	printf("This is wrong input");
	
	}
}
void inverse_trigonometry()
{
	int a;
	float g;
	printf("\n\n\nEnter the following inputs for performing respective functions\n\n");
	printf("For tan inverse-1\nFor sin inverse-2\nFor cos inverse-3\nFor hyperbolic tan inverse-4\nFor hyperbolic sin inverse-5\nFor hyperbolic cos inverse-6\n");
	printf("Note: the measure of angle will be in radians.");
	printf("What you want to do?:");
	scanf("%d", &a);
	printf("Enter the measure of scalar:");
	scanf("%f", &g);
	if(a==1)
	printf("%f", atan(g));
	if(a==2)
	printf("%f", asin(g));
	if(a==3)
	printf("%f", acos(g));
	if(a==4)
	printf("%f", atanh(g));
	if(a==5)
	printf("%f", asinh(g));
	if(a==6)
	printf("%f", acosh(g));
	else
	printf("This is wrong input");
}

int main()
{
	int n, j;
	printf("********************************************This is a calculator program************************************************\n________________________________________________________________________________________________________________________\n\n");
	A:
	printf("For performing various functions user should input following inputs:\nFor addition-1\nFor substraction-2\nFor multiplication-3\nFor division-4\nFor exponential-5\nFor trigonometry-6\nFor inverse trigonometry-7\nFor factorial-8\nWhat do you want to do?:");
	scanf("%d", &n);
	switch(n)
	{
	case 1:add();
	break;
	case 2:difference();
	break;
	case 3:product();
	break;
	case 4:division();
	break;
	case 5:power();
	break;
	case 6:trigonometry();
	break;
	case 7:inverse_trigonometry();
	break;
	case 8:factorial();
    break;
    default:
	printf("This is a wrong input.");
	
	}
	printf("\nWant to do more calculations? If yes press 1 otherwise press any other key:");
	scanf("%d", &j);
	if(j==1)
	goto A;
}
