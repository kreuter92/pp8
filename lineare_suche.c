#include <stdio.h>

int suche(int arr[], int x, int laenge)
{
   for (int i = 0; i < laenge; i++){
	   if (arr[i] == x){
		   return i;
	   }
   }
   return -1;
}

int main(void)
{
    int arr[] = {5, 10, 15, 20, 25};
    int x = 15;
    int laenge = sizeof arr / sizeof arr[0];
    int ergebnis = suche(arr, x, laenge);
    if (ergebnis == -1){
	    printf("Kein Ergebnis gefunden\n");
    }
    else{
	    printf("It's a match - und zwar an index %d\n", ergebnis);
    }
    return 0;
}
