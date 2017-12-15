#define FIFO_PATH "/tmp/evlivelog"

#include "logger.h"



void debugLog(const char *output) {

    static char pipeActive;
    static int fd;


    mkfifo(FIFO_PATH, 0666);
    fd = open(FIFO_PATH, O_WRONLY);

    write(fd, output, strlen(output)+1);
    close(fd);
}
