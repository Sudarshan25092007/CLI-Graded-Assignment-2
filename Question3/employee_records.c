#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
} Employee;

int main() {

    Employee emp;

    int fd = open("employees.dat", O_RDWR | O_CREAT | O_TRUNC, 0644);

    if(fd < 0){
        perror("File creation failed");
        return 1;
    }

    Employee e1 = {101,"Alice"};
    Employee e2 = {102,"Bob"};
    Employee e3 = {103,"Charlie"};

    write(fd,&e1,sizeof(Employee));
    write(fd,&e2,sizeof(Employee));
    write(fd,&e3,sizeof(Employee));

    Employee updated = {102,"Robert"};

    lseek(fd,sizeof(Employee),SEEK_SET);

    write(fd,&updated,sizeof(Employee));

    lseek(fd,0,SEEK_SET);

    printf("Employee Records:\n\n");

    while(read(fd,&emp,sizeof(Employee))>0){

        printf("ID : %d\n",emp.id);
        printf("Name : %s\n\n",emp.name);

    }

    close(fd);

    return 0;
}
