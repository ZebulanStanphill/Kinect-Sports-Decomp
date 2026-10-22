typedef struct Obj Obj;
struct Obj {
    int pad0;
    int pad4;
    int (*fn)(Obj *self, int *out, int arg);
};

typedef struct {
    int pad0;
    Obj *obj;
    int pad8;
    int padc;
    unsigned char b10;
    unsigned char pad11[0x60 - 0x11];
    unsigned char b60;
} Ctx;

extern void fn_82C11AE0(Ctx *c);

void fn_82C120B0(Ctx *c, int arg, int *out)
{
    int hr;

    *out = 0;
    c->b60 = c->b10;
    hr = c->obj->fn(c->obj, out, arg);
    if (hr >= 0 && hr == 0x50000d) {
        fn_82C11AE0(c);
    }
}
