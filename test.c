#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    char buff[10];
    int fd;
    int val;
    
    fd = open("text.txt",O=RDONLY);
    if(fd < 0){
        perror("open");
        exit(1);
    }
    val = read(fd, buff, 10);
    if(val < 0){
        perror("read");
        exit(1);
    }
    val = write(1, buff, 10);
    if(val < 0){
        perror("write");
        exit(1);
    }
    val = close(fd);
    if(val < 0){
        perror("close");
        exit(1);
    }
    return 0;
}
       
            
    

