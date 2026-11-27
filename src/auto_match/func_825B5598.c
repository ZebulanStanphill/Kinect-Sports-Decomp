#include "xdk/vectorintrinsics.h"

typedef struct Record_825B5598 {
    __vector4 vectors[3]; /* 0x00 */
    float scale;          /* 0x30 */
    int type;             /* 0x34 */
    int flags;            /* 0x38 */
    int padding;
} Record_825B5598;

typedef struct Array_825B5598 {
    int padding;
    Record_825B5598 *data; /* 0x04 */
} Array_825B5598;

typedef struct Object_825B5598 {
    char padding[0x10];
    Array_825B5598 *records; /* 0x10 */
} Object_825B5598;

void fn_825B5598(Object_825B5598 *self, int index, __vector4 *first, __vector4 *second, __vector4 *third,
                 float *scale, int *type, int *flags)
{
    *first = self->records->data[index].vectors[0];
    *second = self->records->data[index].vectors[1];
    *third = self->records->data[index].vectors[2];
    *scale = self->records->data[index].scale;
    *flags = self->records->data[index].flags;
    *type = self->records->data[index].type;
}
