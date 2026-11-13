typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Node_824C8210 {
    char pad0[0x30];
    __vector4 color;    /* 0x30 */
    int dirty;          /* 0x40 */
} Node_824C8210;

typedef struct Item_824C8210 {
    char pad0[0x34];
    Node_824C8210 *node;
} Item_824C8210;

typedef struct Entry_824C8210 {
    Item_824C8210 *item;
    int pad4;
} Entry_824C8210;

typedef struct Group_824C8210 {
    Entry_824C8210 *begin;
    Entry_824C8210 *end;
    char pad8[0x20 - 0x8];
    __vector4 color;    /* 0x20 */
    char pad30[0x40 - 0x30];
    int dirty;          /* 0x40 */
} Group_824C8210;

void fn_824C8210(Group_824C8210 *self, __vector4 color)
{
    Entry_824C8210 *e = self->begin;
    Entry_824C8210 *end = self->end;

    for (; e != end; e++) {
        Node_824C8210 *node = e->item->node;
        if (node != 0) {
            node->dirty = 1;
            node->color = color;
        }
    }
    self->dirty = 1;
    self->color = color;
}
