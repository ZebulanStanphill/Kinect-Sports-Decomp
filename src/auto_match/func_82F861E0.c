#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <errno.h>

void *fn_82F861E0(void *memory, unsigned int count, unsigned int size)
{
    unsigned int oldSize = 0;
    unsigned int newSize;
    if (count != 0 && 0xfffff000U / count < size) {
        *_errno() = 12;
        return 0;
    }
    newSize = count * size;
    if (memory != 0) {
        oldSize = _msize(memory);
    }
    memory = realloc(memory, newSize);
    if (memory != 0 && oldSize < newSize) {
        memset((char *)memory + oldSize, 0, newSize - oldSize);
    }
    return memory;
}
