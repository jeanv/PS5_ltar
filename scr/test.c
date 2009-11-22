#include <stdlib.h>
#include <stdio.h>

int note(char statut)
{
    int projet, examen, teteDeEleve;

    switch(statut)
    {
        case 'A':
            projet = 20;
            examen = 20;
            teteDeEleve = 20;
            break;
        case 'B':
            projet = 10;
            examen = 10;
            teteDeEleve = 10;
            break;
        case 'C':
            return 0;
        default:
            projet = rand()%20;
            examen = rand()%20;
            teteDeEleve = rand()%20;
            break;
    }

    return (projet+examen+teteDeEleve)/3;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        printf("Cool...");
    else
        printf("Note finale : %d\n", note(argv[1]);

    return 0;
}