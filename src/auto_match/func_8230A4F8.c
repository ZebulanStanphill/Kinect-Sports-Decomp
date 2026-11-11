typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_8230A4F8 {
    int *items;
    unsigned int unk4[3];
    int index;
} Entry_8230A4F8;

typedef struct Source_8230A4F8 {
    unsigned int unk0[2];
    Entry_8230A4F8 ***entries;
    unsigned char pad[0x41c - 0xc];
    int mode;
    int entryIndex;
    int arg;
    unsigned char pad2[0x9a0 - 0x428];
    unsigned int target;
    unsigned int fallback;
} Source_8230A4F8;

typedef struct Obj_8230A4F8 {
    unsigned int unk0[3];
    unsigned int current;
    Source_8230A4F8 *source;
    unsigned char pad[0xf0 - 0x14];
    __vector4 c;
    __vector4 b;
    __vector4 a;
    int dirty;
} Obj_8230A4F8;

extern unsigned int fn_822ABA88(int item, int arg);

void fn_8230A4F8(Obj_8230A4F8 *self, __vector4 a, __vector4 b, __vector4 c)
{
    Source_8230A4F8 *src = self->source;
    unsigned int target = src->target;
    if (target == 0) {
        int mode = src->mode;
        target = src->fallback;
        if (mode == 3 || mode == 4 || mode == 5) {
            Entry_8230A4F8 *e = (*src->entries)[src->entryIndex];
            target = fn_822ABA88(e->items[e->index], src->arg);
        }
    }
    if (target != self->current) {
        self->dirty = 1;
        self->c = c;
        self->b = b;
        self->a = a;
    }
}
