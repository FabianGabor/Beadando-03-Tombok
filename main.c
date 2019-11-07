#include <stdio.h>

int main()
{
    int i;
    int jegyek[10];
    int jeles = 0;
    double avg=0;
    int homerseklet[30], max_ho, max_nap;

    for (i=0; i<10; i++)
    {
        jegyek[i] = rand() % 5 + 1;
        printf("%d ", jegyek[i]);
    }
    printf("\n");

    i=0;
    while ((i<10) && (jegyek[i]!=1))
        i++;

    if (i>0) printf("Volt bukas.\n");

    for (i=0; i<10; i++)
    {
        if (jegyek[i] == 5) jeles++;
    }

    if (jeles == 10)
        printf("Jeles osztaly.\n");
    else
        printf("Nem Jeles osztaly.\n");

    printf("Jelesek szama: %d\n", jeles);

    for (i=0; i<10; i++)
        avg += jegyek[i];
    avg/=10;

    printf("Atlag: %lf\n", avg);




    for (i=0; i<30; i++)
    {
        homerseklet[i] = rand() % 30;
        printf("%3d", i+1);
    }
    printf("\n");
    for (i=0; i<30; i++)
        printf("%3d", homerseklet[i]);
    printf("\n");


    max_ho=homerseklet[0];
    max_nap=1;
    for (i=1; i<30; i++)
        if (homerseklet[i]>max_ho)
        {
            max_ho=homerseklet[i];
            max_nap=i+1;
        }
    printf("Legmelegebb nap %d, %d fok.\n", max_nap, max_ho);


    return 0;
}
