#ifndef EXA_VIEWER_LOGGER_H
#define EXA_VIEWER_LOGGER_H

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void debugLog(const char *output);

#endif //EXA_VIEWER_LOGGER_H
