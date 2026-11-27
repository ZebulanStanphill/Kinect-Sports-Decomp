#include "xdk/vectorintrinsics.h"

typedef struct Inner_8256AB40 {
    char pad00[0x30];
    unsigned char byte30; /* 0x30 */
} Inner_8256AB40;

typedef struct Middle_8256AB40 {
    char pad00[0x14];
    Inner_8256AB40 *inner; /* 0x14 */
} Middle_8256AB40;

typedef struct Source_8256AB40 {
    char pad00[8];
    Middle_8256AB40 *middle; /* 0x8 */
} Source_8256AB40;

typedef struct Entry_8256AB40 {
    __vector4 value;         /* 0x0 */
    int unknown10;           /* 0x10 */
    Source_8256AB40 *source; /* 0x14 */
    char pad18[8];
} Entry_8256AB40;

typedef struct Container_8256AB40 {
    char pad00[0x1c];
    int count; /* 0x1c */
} Container_8256AB40;

typedef struct Owner_8256AB40 {
    Container_8256AB40 *container; /* 0x0 */
} Owner_8256AB40;

extern void *fn_8284DF78(Container_8256AB40 *, int);
extern unsigned char fn_8256B190(void *, float, __vector4 *, float *);

int fn_8256AB40(Owner_8256AB40 *self, Entry_8256AB40 *entries)
{
    int ok = 1;
    int count = self->container->count;
    int i;

    for (i = 0; i < count; i++) {
        void *item = fn_8284DF78(self->container, i);
        Source_8256AB40 *source = entries[i].source;
        if (source != 0) {
            __vector4 value;
            float w;
            if (!fn_8256B190(item, (float)source->middle->inner->byte30, &value, &w)) {
                ok = 0;
            }
            value.v[3] = w;
            entries[i].value = value;
        }
    }
    return ok;
}
