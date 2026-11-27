#include "xdk/vectorintrinsics.h"

typedef struct Vec_829DDAF0 {
    __vector4 v;
} Vec_829DDAF0;

typedef struct Item_829DDAF0 {
    unsigned char valid; /* 0x0 */
    char pad1[3];
    int v[2];
} Item_829DDAF0;

typedef struct Out_829DDAF0 {
    __vector4 head;         /* 0x0 */
    Item_829DDAF0 items[8]; /* 0x10 */
} Out_829DDAF0;

typedef struct Elem_829DDAF0 {
    char data[0x260];
} Elem_829DDAF0;

typedef struct Obj_829DDAF0 {
    char pad0[0x18];
    Elem_829DDAF0 elems[8]; /* 0x18 */
} Obj_829DDAF0;

extern Vec_829DDAF0 fn_829DD678(Obj_829DDAF0 *self);
extern unsigned char fn_829DD700(__vector4 a, __vector4 b);
extern void fn_829DD980(Elem_829DDAF0 *e, Item_829DDAF0 *out);

static __forceinline unsigned char IsZero3(__vector4 v)
{
    return v.vector4_f32[0] == 0.0f && v.vector4_f32[1] == 0.0f && v.vector4_f32[2] == 0.0f;
}

void fn_829DDB48(Obj_829DDAF0 *self, Out_829DDAF0 *out)
{
    int i;

    if (IsZero3(out->head)) {
        out->head = fn_829DD678(self).v;
    }
    if (fn_829DD700(out->head, fn_829DD678(self).v)) {
        for (i = 0; i < 8; i++) {
            if (out->items[i].valid == 0) {
                fn_829DD980(&self->elems[i], &out->items[i]);
            }
        }
    }
}
