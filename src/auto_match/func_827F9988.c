#include <string.h>
typedef struct Obj_827F9988 {
    char pad0[0x1c];
    void *buffer;
    char pad20[0x12];
    unsigned short size;
} Obj_827F9988;

void fn_827F9988(Obj_827F9988 *self)
{
    if (self->buffer != 0) {
        memset(self->buffer, 0, self->size);
    }
}
