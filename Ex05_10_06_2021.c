#include <stdio.h>
int min; 
int hrs;          
int mins;        
const int minahor = 60;      
char at[50];    
int main() {
	printf("dame munutos we: ");
	fgets(at, sizeof(at), stdin);
	sscanf(at, "%d", &min);

	hrs = (min / minahor);
	mins = (min % minahor);

	printf("%d horas, %d minutos.\n", hrs, mins);

	return(0);
}
