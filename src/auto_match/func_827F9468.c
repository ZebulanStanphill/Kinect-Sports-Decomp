#include <string.h>

typedef struct Entry_827F9468 {
    unsigned char bytes[0x40];
} Entry_827F9468;

typedef struct Obj_827F9468 {
    char pad0[0xc];
    Entry_827F9468 *entries;
} Obj_827F9468;

void fn_827F9468(Obj_827F9468 *self, int index, void *dest)
{
    memcpy(dest, &self->entries[index], 0x40);
}
