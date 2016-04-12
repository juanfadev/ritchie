#include "Clock.h"

before(): execution(void Processor_FetchInstruction()) {
	Clock_Update();
}

before(): callp(void OperatingSystem_HandleException(void)) {
	Clock_Update();
}

before(): callp(void OperatingSystem_HandleSystemCall(void)) {
	Clock_Update();
}

after(): callp(void OperatingSystem_HandleClockInterrupt(void)) {
 		Clock_Update();
}
