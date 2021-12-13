#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<direct.h>

#define e 2.718
#define pi 3.14159

void add();
void sub();
void mul();
void divi();
void modulo();
void power();
void sqrtx();
void logx();
void inverse();
void sinx();
void cosx();
void tanx();
void expo();



int main()
{
    int choice,a,b,c;
    system("color 17");

    printf("1.Addition       2.Substraction    3.multiplication\n4.division       5.x modulo y      6.x power y \n7.squareroot(x)");
    printf("  8.log of x        9.inverse of x \n10.(e))^x        11.sin(x)         12.cos(x) \n13.tan(x)       14. EXIT \n");
    while(1)
    {
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                sub();
                break;

            case 3:
                mul();
                break;

            case 4:
                divi();
                break;

            case 5:
                modulo();
                break;

            case 6:
                power();
                break;

            case 7:
                sqrtx();
                break;

            case 8:
                logx();
                break;

            case 9:
                inverse();
                break;

            case 10:
                expo();
                break;

            case 11:
                sinx();
                break;

            case 12:
                cosx();
                break;

            case 13:
                tanx();
                break;
            
            case 14:
                exit(0);

            default :
                printf("you have entered invalid choice ");
                break;
        }
    }
    return 0;
}

void add()
{
    float a,b,c;
    printf("Enter two numbers for addition :");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("%.2f + %.2f = %.2f\n",a,b,c);
}

void sub()
{
    float a,b,c;
    printf("Enter two numbers for Substraction :");
    scanf("%f%f",&a,&b);
    c=a-b;
    printf("%.2f - %.2f = %.2f\n",a,b,c);
}

void mul()
{
    float a,b,c;
    printf("Enter two numbers for Multiplication :");
    scanf("%f%f",&a,&b);
    c=a*b;
    printf("%.2f * %.2f = %.2f\n",a,b,c);
}

void divi()
{
    float a,b,c;
    printf("Enter two numbers for division :");
    scanf("%f%f",&a,&b);
    c=a/b;
    printf("%.2f / %.2f = %.2f\n",a,b,c);
}

void modulo()
{
    int a,b,c;
    printf("Enter two numbers for modulation :");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("%d % %d = %d\n",a,b,c);
}

void power()
{
    int a,b,c;
    printf("Enter two numbers for x power y:");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("%d ^ %d = %d\n",a,b,c);
}

void sqrtx()
{
    int a,c;
    printf("Enter a numbers for square root :");
    scanf("%d",&a);
    c=sqrt(a);
    printf("sqrt(%d) = %d\n",a,c);
}

void logx()
{
    int a;
    float c;
    printf("Enter a numbers for log :");
    scanf("%d",&a);
    c=log10(a);
    printf("log(%d) = %.4f\n",a,c);
}

void inverse()
{
    float a,c;
    printf("Enter a number for inverse:");
    scanf("%f",&a);
    c=pow(a,-1);
    printf("1/%.1f = %.4f\n",a,c);

}

void expo()
{
    float a,c;
    printf("Enter a number :");
    scanf("%f",&a);
    c=pow(e,a);
    printf("e^%.1f = %.4f\n",a,c);

}

void sinx()
{
    float a,c;
    printf("Enter a  number in degree: ");
    scanf("%f", &a);
    c = sin(a * pi / 180);
    printf("sin(%.0f): %.2f\n",a,c);
}

void cosx()
{
    float a,c;
    printf("Enter a  number in degree : ");
    scanf("%f", &a);
    c = cos(a * pi / 180);
    printf("cos(%.0f): %.2f\n",a,c);
}

void tanx()
{
    float a,c;
    printf("Enter a  number in degree : ");
    scanf("%f", &a);
    c = tan(a * pi/ 180);
    printf("tan(%.0f): %.2f\n",a,c);
}