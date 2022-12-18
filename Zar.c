#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int zar;
    char cevap;
    srand(time(NULL));

    while(i == 0)
    {
        printf("Zar atayım mı ?: evet (e) hayır (h)\n");
        scanf("%c", &cevap);

        if(cevap == 'e')
        {
            zar = 1 + rand() % 6;
            printf("Gelen sayı: %d\n", zar);
        }
        if(cevap != 'e' & cevap != 'h')
        {
            printf("Hatalı yanıt !");
        }
        if(cevap == 'h')
        break;
    }
}