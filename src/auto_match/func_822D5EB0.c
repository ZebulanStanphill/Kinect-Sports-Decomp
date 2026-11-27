#include "xdk/vectorintrinsics.h"

typedef struct Self_822D5EB0 {
    int unk00[47];
    void *owner;     /* 0xBC */
    int pending;     /* 0xC0 */
    int key;         /* 0xC4 */
    int id;          /* 0xC8 */
    int unkCC;       /* 0xCC */
    __vector4 value; /* 0xD0 */
} Self_822D5EB0;

extern void fn_822D5F28(Self_822D5EB0 *self);

void fn_822D5EB0(Self_822D5EB0 *self, int key, int id, __vector4 value)
{
    if ((int)self->owner == 0) {
        return;
    }
    self->id = id;
    self->key = key;
    self->pending = 1;
    self->value = value;
    fn_822D5F28(self);
}
