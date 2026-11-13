extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, int, int);

typedef struct { char pad[0x58]; unsigned char base; char pad2[3]; int bits; } Obj_828A90E8;
typedef struct { int a, b; unsigned char value; } Item_828A90E8;

void fn_828A90E8(Obj_828A90E8 *self, int unused, void *bs, Item_828A90E8 *item)
{
    unsigned char v = item->value - self->base;
    int bits = self->bits;
    fn_8223C478(bs, bits, 0);
    fn_828E9DB8(bs, v, bits);
}
