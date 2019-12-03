
#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
#include<unistd.h>
#include<stdlib.h>
#include"GPIO.h"

using namespace std;
using namespace exploringBB;

int main(int argc, char* argv[]){
   GPIO extLed(49);
   
   extLed.setDirection(OUTPUT);

   if(strcmp(argv[1],"off")==0) extLed.setValue(LOW);
   else if(strcmp(argv[1],"on")==0)  extLed.setValue(HIGH);
   else if (strcmp(argv[1], "blink")==0 && argc>=3) {
	char *ptr;
	long int blinks = strtol(argv[2], &ptr, 10);
	if (blinks && !(*ptr)) {
		for (char step=1; step<=blinks; step++) {
		    extLed.setValue(HIGH); 
		    sleep(1);
		    extLed.setValue(LOW); 
		    sleep(1);
       		} 
	}
   }	
   return 0;
}
