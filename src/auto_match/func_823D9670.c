#include "xdk/vectorintrinsics.h"

typedef struct Item_823D9670 {
    unsigned char pad0[0x10];
    int active; /* 0x10 */
} Item_823D9670;

typedef struct List_823D9670 {
    Item_823D9670 **items; /* 0x00 */
    unsigned char pad4[0xc];
    int index; /* 0x10 */
} List_823D9670;

typedef struct Shape_823D9670 {
    unsigned short type; /* 0x00 */
    unsigned char pad2[0x1e];
    __vector4 axis; /* 0x20 */
} Shape_823D9670;

typedef struct Owner_823D9670 {
    unsigned char pad0[8];
    List_823D9670 ***lists; /* 0x08 */
    unsigned char padc[0x284 - 0xc];
    Shape_823D9670 *shapes[2]; /* 0x284 */
} Owner_823D9670;

extern __vector4 *fn_822AA718(__vector4 *out, List_823D9670 *list);
extern const float lbl_831D18A8[0xa0];

int fn_823D9670(Owner_823D9670 *self, List_823D9670 *list, __vector4 point)
{
    int side;
    Shape_823D9670 *shape;
    __vector4 axis;
    __vector4 direction;
    __vector4 axisDot;
    __vector4 pointDot;

    side = list->items[list->index]->active == 0;
    shape = self->shapes[side];
    switch (shape->type) {
    case 0:
        axis = shape->axis;
        break;
    case 1:
        axis = shape->axis;
        break;
    case 2:
        axis = shape->axis;
        break;
    }
    fn_822AA718(&direction, (*self->lists)[side]);
    axisDot = __vmsum3fp(axis, direction);
    pointDot = __vmsum3fp(point, direction);
    return pointDot.vector4_f32[0] - axisDot.vector4_f32[0] < lbl_831D18A8[0x5f];
}
