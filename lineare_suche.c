#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

const char VERSIONSNR[] = "0.1";

int suche(int liste[], int suchwert, int laenge)
{
   for (int i = 0; i < laenge; i++){
	   if (liste[i] == suchwert){
		   return i;
	   }
   }
   return -1;
}

int main(int argc, char* argv[])
{
    int option;
    int liste[] = {5, 10, 15, 20, 25};
    int suchwert = 15;
    int ergebnis;

    while((option = getopt(argc, argv, "hv"))!=-1)
    switch(option)
    {
	    case 'h':
		    printf("-h -> Hilfe aufrufen\n");
		    printf("-v -> Version anzeigen\n");
		    exit(0);
	    case 'v':
		    printf("Version %s\n", VERSIONSNR);
		    exit(0);
	    default:
		    printf("Etwas ist schiefgegangen!\n");
		    printf("-h hilft dir weiter\n");
		    exit(0);
    }

    if ((ergebnis = suche(liste, suchwert, sizeof liste/ sizeof liste[0])) == -1){
	    printf("Kein Ergebnis gefunden\n");
    }
    else{
	    printf("It's a match - und zwar an index %d\n", ergebnis);
    }
    return 0;
}
