#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	char singleLine[16];
	unsigned short int i;
	unsigned short int duration;
	unsigned short int pitch;
	unsigned short int durationInterpret(unsigned short int note);
	unsigned short int pitchInterpret(unsigned short int note,unsigned short int duration);

	while(fgets(singleLine,sizeof(singleLine),stdin))
	{
			i=atoi(singleLine);
			duration=durationInterpret(i);
			pitch=pitchInterpret(i,duration);
			printf("%i\t%i\n",pitch,duration);
	}	
	return 0;
}


unsigned short int durationInterpret(unsigned short int note)
{
	unsigned short int result;
	result=note>>8;
	
	return result;
}

unsigned short int pitchInterpret(unsigned short int note,unsigned short int duration)
{
	unsigned short int result;
	duration<<=8;
	result=note^duration;
	return result;
}

