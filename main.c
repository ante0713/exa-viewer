#include <stdio.h>
#include "logger.h"

int main() {
    setvbuf(stdout, NULL, _IOLBF, 0);

    debugLog("Exaviewer Started\n");

    char line[1000];
    while (1) {
        scanf("%s", line);
        debugLog(line);

        if (line == "shutdown")
            break;
    }

    return 0;

}