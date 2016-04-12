#include "Clock.h"
#include "Processor.h"

int tics=0;
int counter=0;

void Clock_Update() {
	counter ++;
	if (counter == INTERVALBETWEENINTERRUPTS){
		Processor_RaiseInterrupt(CLOCKINT_BIT);
		counter = 0;
	}
	tics++;
}


int Clock_GetTime() {

	return tics;
}
