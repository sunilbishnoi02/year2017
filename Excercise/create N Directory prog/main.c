#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
int main(int argc,char *argv[])
{
int i=0;
i=atoi(argv[1]);



time_t xyz;
char* cts;
int day,year;
char month[20],weekday[20],timee[20];

while(i!=0)
{
xyz=time(NULL);
cts=ctime(&xyz);
sscanf(cts,"%s %s %d %s %d ",weekday,month,&day,timee,&year);


char dir[]="directory";
strcat(dir,timee);
mkdir(dir,0700);
i--;
sleep(1);
}

return 0;

}
