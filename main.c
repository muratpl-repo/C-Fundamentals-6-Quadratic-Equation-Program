#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
/*
    float a,b,c,x;
    printf("S�ras�yla a,b,c ve x de�erlerini giriniz. \a\n");
    scanf("%f%f%f%f",&a,&b,&c,&x);
    float sonuc = a*x*x + b*x + c;


    printf("Denklemin Sonucu = %f\n",sonuc);
    printf("Denklemin Sonucu = %d\n",(int)sonuc);


*/

    // int -> float -> double

    int x = 30;
    float y = 30;
    double z = 30;

    printf("%d\n",x/y); // HATALI YAZIM
    printf("%d\n",x/z); // HATALI YAZIM
    printf("%lf\n",x/z); // DO�RU YAZIM
    printf("%f\n",x/z); // DO�RU YAZIM
    printf("%f\n",x/y); // DO�RU YAZIM






    return 0;


}
