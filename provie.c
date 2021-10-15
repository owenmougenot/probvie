#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    string homme = get_string("homme ou femme\n");// je declare mes variable por demander les information pour pouvoir faire mon calcul
    string t = get_string("le degre d'alcool: ");
    float v = get_float("le volume d'alcool: ");
    float m = get_float("la masse(poids):");
    float resulta ;

    float o =  atof(t) / 100;// pour passe de % en 0...
    if (strcmp(homme, "homme") == 0)// si l'utilisatuer est un homme
    {
        float dif = 0.7 * m;
        resulta = (v * o * 0.8) / dif;// calcul du taux 
        printf("ton taux a est a %.2f \n", resulta);// j'affiche le resulta
        if (resulta < 0.51)// si inferieur a 0.51 
        {
            printf("tu peut prendre la voiture\n");// alors il ou elle peut prendre la voiture
        }
        else if (resulta > 0.51)// si superieur a 0.51
        {
            printf("fait toi rammener ou prend un taxi ou encore a attendre 2h par verre dose bar\n ");// ne peut prendre la voiture 
        }

    }
    else if (strcmp(homme, "femme") == 0)// je repeter les la meme chose si l'utilisateur est une femme
    {
        float dif = 0.6 * m;
        resulta = (v * o * 0.8) / dif;
        printf("ton taux a est a %.2f \n", resulta);
        if (resulta < 0.51)
        {
            printf("tu peut prendre la voiture\n");
        }
        else if (resulta > 0.51)
        {
            printf("fait toi rammener ou prend un taxi ou encore a attendre 2h par verre dose bar\n ");
        }
    }



}
