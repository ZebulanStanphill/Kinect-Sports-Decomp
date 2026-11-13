#include <string.h>
typedef struct Obj_82827A98 {
    char pad0[0x14];
    unsigned char flags[4];
    unsigned char data[8];
} Obj_82827A98;

void fn_82827A98(Obj_82827A98 *self)
{
    self->flags[0] = 0;
    self->flags[1] = 0;
    self->flags[2] = 0;
    self->flags[3] = 0;
    memset(self->data, 0, sizeof(self->data));
}
