// Exact under LTCG with Matching func_8236B080.c and /O1 /QVMXReserve.

#include "xdk/vectorintrinsics.h"

typedef struct Input_823CFA50 {
    int kind;
    char pad[12];
    __vector4 position;
    unsigned char enabled;
    char gap[15];
    float angle;
    char more[12];
    __vector4 direction;
} Input_823CFA50;

typedef struct Item_823CFA50 {
    unsigned short kind;
    char pad[30];
    __vector4 value;
} Item_823CFA50;

typedef struct Array_823CFA50 {
    int *begin;
    int *end;
} Array_823CFA50;

typedef struct Obj_823CFA50 {
    void (**vtable)();
    char pad04[0x18];
    float **data;            /* 0x1c */
    Array_823CFA50 **arrays; /* 0x20 */
    char gap[0x260];
    Item_823CFA50 *items[2]; /* 0x284 */
    char rest28c[0x4b0 - 0x28c];
    void *manager; /* 0x4b0 */
    char rest4b4[0x9ac - 0x4b4];
    void *state; /* 0x9ac */
    char rest9b0[0x9f8 - 0x9b0];
    char sub[0xe38 - 0x9f8];
    int active; /* 0xe38 */
    char reste3c[0xf00 - 0xe3c];
    int kind;
    char align[12];
    __vector4 position;     /* 0xf10 */
    __vector4 target;       /* 0xf20 */
    __vector4 unusedVector; /* 0xf30 */
    __vector4 direction;    /* 0xf40 */
    __vector4 rotation;     /* 0xf50 */
    int enabled;
} Obj_823CFA50;

extern void fn_8236B080(Obj_823CFA50 *);
extern __vector4 fn_8255AE78(__vector4, float);

extern void fn_823E4EF0(Obj_823CFA50 *, const Input_823CFA50 *);
extern void fn_82359698(Obj_823CFA50 *, int);
extern void fn_823DBA60(void *, void *);
extern void fn_823D6088(void *);

static __forceinline unsigned int Count(Array_823CFA50 *array)
{
    return array->end - array->begin;
}

void fn_823CFA50(Obj_823CFA50 *self, const Input_823CFA50 *input)
{
    Obj_823CFA50 *dest = self;
    Item_823CFA50 *item;
    __vector4 *out;
    fn_8236B080(self);
    dest->kind = input->kind;
    dest->position = input->position;
    dest->direction = input->direction;
    self->rotation = fn_8255AE78(__VMXGetReg(71), input->angle);
    self->enabled = input->enabled;
    out = &self->target;
    item = self->items[(self->kind == 0)];
    switch (item->kind) {
    case 0:
        *out = item->value;
        break;
    case 1:
        *out = item->value;
        break;
    default:
        if (item->kind < 3)
            *out = item->value;
        break;
    }
    self->target.v[1] = self->data[1][1];
    fn_823E4EF0(self, input);
    {
        Array_823CFA50 *array = self->arrays[input->kind];
        if (Count(array) > 0) {
            self->active = 1;
        }
    }
    fn_82359698(self, 3);
    if (((int (*)(Obj_823CFA50 *))self->vtable[50])(self) == 0) {
        fn_823DBA60(self->manager, self->state);
    }
    fn_823D6088(self->sub);
}
