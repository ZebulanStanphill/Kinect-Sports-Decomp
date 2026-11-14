#include <string.h>

const char *fn_8270C6B0(const char *path)
{
    unsigned int i = strlen(path);
    while (i != 0) {
        if (path[i] == '\\' || path[i] == '/') {
            return path + i + 1;
        }
        i--;
    }
    return path;
}
