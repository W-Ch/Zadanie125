#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
float obj_prostopadloscianu();
float obj_ostroslupa();


int main()
{
for(;;)
{

int c=78 ;

printf("Wybierz bryle\n");
printf("1.objetosc prostopadloscianu\n");
printf("2.objetosc ostroslupa prawidlowego czworokatnego\n");
printf("3. wyjscie\n");
c =getch();
switch (c)

{

case '1':
obj_prostopadloscianu();

        printf("\n");

break;

case '2':
obj_ostroslupa();

    printf("\n");

break;

case '3':
exit(EXIT_SUCCESS);


default:
    printf("Wybierz cyfre od 1 do 3\n");
    printf("Aby powrocic do menu wcisnij dowolny przycisk\n");
    //exit(EXIT_SUCCESS);
    getch();

        printf("\n");

break;
}

}
    return 0;
};

float obj_prostopadloscianu()
{
    float a, b, c, wynik ;
    printf("wprowadz a\n");
    if(scanf("%f", &a) == 1)
    {
        printf("wprowadz b\n");
        if(scanf("%f", &b) == 1)
        {
            printf("wprowadz c\n");
            if(scanf("%f", &c) == 1)
            {

                if ((a<=0) || (b<=0) || (c<=0))
                {
                printf("a i b musza byc wieksze od 0\n");
                exit (EXIT_FAILURE);

                }

                else


                wynik = a*b*c;
                printf("wynik= ""%.4f", wynik);
                return wynik;
            }
             else
            printf("wprowadz liczby, a nie znaki\n");
            exit (EXIT_FAILURE);
        }
        else
        printf("wprowadz liczby, a nie znaki\n");
        exit (EXIT_FAILURE);

    }
    else

   printf("wprowadz liczby, a nie znaki\n");
    exit (EXIT_FAILURE);


};
float obj_ostroslupa()
{
    float a, h, wynik;
    float potega_podstawy;
    float wykladnik = 2;
    printf("wprowadz a\n");
    if(scanf("%f", &a) == 1)
    {
        printf("wprowadz h\n");
        if(scanf("%f", &h) == 1)
        {


            if ((a<=0) || (h<=0))
            {
            printf("a i h musza byc wieksze od 0\n");
            exit (EXIT_FAILURE);

            }

            else

            potega_podstawy = powf(a,wykladnik);
            wynik =(1.0/3.0)*potega_podstawy*h;
            printf("wynik= ""%.4f", wynik);
            return wynik;
        }
        else
        printf("wprowadz liczby, a nie znaki\n");
        exit (EXIT_FAILURE);

    }
    else

    printf("wprowadz liczby, a nie znaki\n");
    exit (EXIT_FAILURE);


};

