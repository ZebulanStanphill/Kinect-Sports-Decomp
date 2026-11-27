#include "xdk/vectorintrinsics.h"

typedef struct Params_824476C8 {
    char pad0[0x114];
    int mode; /* 0x114 */
    char pad118[0x16c - 0x118];
    float offset;        /* 0x16c */
    __vector4 direction; /* 0x170 */
    int count;           /* 0x180 */
    char pad184[0x208 - 0x184];
    int kind; /* 0x208 */
} Params_824476C8;

typedef struct Extra_824476C8 {
    char pad0[0x3c];
    float scale; /* 0x3c */
} Extra_824476C8;

typedef struct Object_824476C8 {
    char *vtable; /* 0x00 */
    char pad4[0x3c];
    Params_824476C8 *params; /* 0x40 */
    Extra_824476C8 *extra;   /* 0x44 */
    int *limit;              /* 0x48 */
} Object_824476C8;

extern void fn_824510C0(Object_824476C8 *self);
extern void *fn_8265C9E0(int size);
extern void fn_82437388(Object_824476C8 *self);
extern void fn_82453DE8(Object_824476C8 *self);
extern char lbl_821B9C40[];

Object_824476C8 *fn_824476C8(Object_824476C8 *self)
{
    int *limit;
    int *result;

    fn_824510C0(self);
    self->vtable = lbl_821B9C40;
    limit = (int *)fn_8265C9E0(4);
    if (limit != 0) {
        result = limit;
        *result = 1500;
    } else {
        result = 0;
    }
    {
        int **slot = &self->limit;
        *slot = result;
    }
    self->params->kind = 0x1b;
    self->params->mode = 4;
    fn_82437388(self);
    self->params->offset = -0.0f;
    self->extra->scale = 0.30499998f;
    self->params->direction = __VMXGetReg(75);
    self->params->count = 0x26;
    fn_82453DE8(self);
    return self;
}
