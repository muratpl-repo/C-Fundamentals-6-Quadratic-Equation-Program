#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
/*
    float a,b,c,x;
    printf("Sýrasýyla a,b,c ve x deðerlerini giriniz. \a\n");
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
    printf("%lf\n",x/z); // DOÐRU YAZIM
    printf("%f\n",x/z); // DOÐRU YAZIM
    printf("%f\n",x/y); // DOÐRU YAZIM






    return 0;


}
