#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    int liczba;
    float kat, rad;
    printf("Jaka funkcje chcesz obliczy�\n1=sin\n2=cos\n3=tg\n");
    scanf_s("%i", &liczba);
    printf("Podaj miare kata");
    scanf_s("%f", &kat);
    rad = kat * M_PI / 180;
    if (liczba == 1) {
        printf("Sinus tego kata: %f\n", sin(rad));
    }
    else if (liczba == 2) {
        printf("Sinus tego kata: %f\n", cos(rad));
    }
    else if (liczba == 3) {
        printf("Sinus tego kata: %f\n", tan(rad));
    }
    else {
        printf("Zla liczba");
    }

    return 0;
}

