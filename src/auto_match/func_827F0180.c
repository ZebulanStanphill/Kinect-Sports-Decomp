typedef struct {
    char pad0[0x110];
    void *data;
    char pad114[0x12c - 0x114];
    unsigned short flags;
} Obj;

extern void *fn_827EFA58(Obj *o);
extern void *fn_827EFB98(Obj *o);
extern void *fn_827F3C20(Obj *o);
extern unsigned int fn_827F3EB0(void);
extern unsigned int fn_827F3ED8(Obj *o);
extern unsigned int fn_827F3EE0(Obj *o);
extern void fn_827F74C0(void *p, void *dst);
extern void fn_827F92F0(void *p, unsigned char v);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int n);

void fn_827F0180(Obj *o, void *dst, int b, void *dst2, void *dst3)
{
    unsigned short f;

    f = o->flags;
    o->flags = f | 1;
    if ((f & 1) == 0) {
        if (o->data != 0) {
            fn_82A1DDC0(dst, o->data, fn_827F3EB0() * 64);
            fn_827F74C0(fn_827F3C20(o), dst);
            fn_827F92F0(fn_827F3C20(o), b);
        }
        if (dst2 != 0 && fn_827F3ED8(o) != 0) {
            fn_82A1DDC0(dst2, fn_827EFA58(o), fn_827F3ED8(o) * 4);
        }
        if (dst3 != 0 && fn_827F3EE0(o) != 0) {
            fn_82A1DDC0(dst3, fn_827EFB98(o), fn_827F3EE0(o) * 4);
        }
    }
}
