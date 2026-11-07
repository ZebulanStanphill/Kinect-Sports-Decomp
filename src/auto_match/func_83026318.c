typedef struct Obj_83026318 Obj_83026318;

typedef struct Vtbl_83026318 {
    void *slot0;
    void *slot4;
    void (*slot8)(Obj_83026318 *self);
    void *slotC;
    void (*slot10)(Obj_83026318 *self, int arg);
} Vtbl_83026318;

struct Obj_83026318 {
    Vtbl_83026318 *vt;
};

typedef struct Self_83026318 {
    int pad0;
    Obj_83026318 *a;      /* 0x04 */
    int pad8;
    Obj_83026318 *b;      /* 0x0c */
    int pad10;
    unsigned char flag;   /* 0x14 */
} Self_83026318;

void fn_83026318(Self_83026318 *self, int mode)
{
    if (mode != 2) {
        self->b->vt->slot8(self->b);
    }
    if (mode == 0) {
        self->flag = 0;
    }
    if (self->flag == 0) {
        self->a->vt->slot10(self->a, mode);
    }
}
