#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern char randchar(){
	return(char) (rand()%26 +'A');
}
