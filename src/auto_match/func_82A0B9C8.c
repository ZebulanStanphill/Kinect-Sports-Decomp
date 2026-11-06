typedef struct Elem_82A0B9C8 {
    char pad0[0x4144];
    int index;
    char pad4148[0x5550 - 0x4148];
} Elem_82A0B9C8;

typedef struct Obj_82A0B9C8 {
    Elem_82A0B9C8 elems[3];
    unsigned char a[0x340];
    unsigned char b[0x240];
} Obj_82A0B9C8;

extern void fn_82A0B708(Elem_82A0B9C8 *e);
extern void *memset(void *dst, int c, unsigned int n);

Obj_82A0B9C8 *fn_82A0B9C8(Obj_82A0B9C8 *self)
{
    Elem_82A0B9C8 *p = self->elems;
    int i = 2;

    do {
        fn_82A0B708(p);
        p++;
        i--;
    } while (i >= 0);
    for (i = 0; i < 3; i++) {
        self->elems[i].index = i;
    }
    memset(self->a, 0, sizeof(self->a));
    memset(self->b, 0, sizeof(self->b));
    return self;
}
