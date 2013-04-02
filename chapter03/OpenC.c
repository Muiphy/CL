#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
main()
{
int fd,size;
char s[ ]=”Linux_Programmer!\n”;
char buffer[80];
fd=open(“/root/Desktop/bac”,O_WRONLY|O_CREAT);
write(fd,s,sizeof(s));
close(fd);
fd=open(“/root/Desktop/bac”,O_RDONLY);
size=read(fd,buffer,sizeof(buffer));
close(fd);
printf(“%s”,buffer);
}