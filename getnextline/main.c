#include<stdio.h>
#include<fcntl.h>
#include"get_next_line.h"
int main()
{
int fd,i=0;
fd = open("foo.txt",O_RDONLY);
char *s ;
//while(i++ <= 8){
s = get_next_line(fd);
printf("%s",s);
s = get_next_line(fd);
printf("%s",s);
s = get_next_line(fd);
printf("%s",s);
s = get_next_line(fd);
printf("%s",s);
free(s);

close(fd);
}
