#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int NivEssence;
    int temperature;

    char uniteEss[10];
    char uniteTemp[10];

    printf("Quel est votre niveau d'essence ? (Ex: 50 %)\n");
    scanf("%d %s", &NivEssence, uniteEss);

    if (strcmp(uniteEss, "%") != 0)
    {
        printf("ERREUR : unite incorrecte.\n");
        return 1;
    }

    printf("Quelle est la temperature actuelle du vehicule ? (Ex: 90 deg)\n");
    scanf("%d %s", &temperature, uniteTemp);

    if (strcmp(uniteTemp, "deg") != 0)
    {
        printf("ERREUR : unite incorrecte.\n");
        return 1;
    }

    if (temperature < 90)
        printf("DANGER : Temperature trop basse !\n");
    else
        printf("Temperature normale.\n");

    if (NivEssence < 10)
        printf("Vous devez faire le plein !\n");
    else
        printf("Niveau d'essence correct.\n");

    return 0;
}