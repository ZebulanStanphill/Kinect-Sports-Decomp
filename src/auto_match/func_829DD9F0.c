typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
extern void *XMemSet(void *dst, int value, unsigned int size);

typedef struct {
    int header;
    unsigned char data[600];
    int count;
} Slot_829DD9F0;

typedef struct {
    __vector4 v;
    int x10;
    int x14;
    Slot_829DD9F0 slots[8];
} Obj_829DD9F0;

void fn_829DD9F0(Obj_829DD9F0 *self)
{
    int i;
    self->x10 = 0;
    self->x14 = 0;
    self->v = __vspltisw(0);
    for (i = 0; i < 8; i++) {
        Slot_829DD9F0 *s = &self->slots[i];
        s->count = 0;
        s->header = 0;
        XMemSet(s->data, 0, 600);
    }
}
