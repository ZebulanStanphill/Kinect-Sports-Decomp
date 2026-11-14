typedef struct Obj_82F603C8 { int pad0; unsigned char open; char pad5[0x1f]; char inner[1]; } Obj_82F603C8;

extern int fn_82F60DB8(void *inner, unsigned int a, void *b, void *c, void *e, void *d);

int fn_82F603C8(Obj_82F603C8 *self, unsigned int a, void *b, void *c, void *d, void *e)
{
    if (self->open) {
        return fn_82F60DB8(self->inner, a, b, c, e, d);
    }
    return 0x82240404;
}
