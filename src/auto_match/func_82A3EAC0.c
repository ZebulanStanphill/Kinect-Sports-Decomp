typedef struct Obj_82A3EAC0 {
    char pad0[0x2b0c];
    void *dev;
    char pad1[0x2ebc - 0x2b10];
    void *p2ebc;
    int pad2;
    unsigned int n2ec4;
    char pad3[0x2fe4 - 0x2ec8];
    unsigned char flag;
    char pad4[3];
    void *alt;
} Obj_82A3EAC0;

extern void fn_82A1DBD8(void *d, void *a, void *b);
extern void fn_82A1DDC0(void *d, void *a, void *b);
extern void fn_82A3B910(Obj_82A3EAC0 *o, void *d, void *b);

void fn_82A3EAC0(Obj_82A3EAC0 *o, void *p2, void *p3)
{
    void *d = o->dev;
    int ok;
    if (d == 0) {
        return;
    }
    if (o->p2ebc != 0 && o->n2ec4 < 0x8000) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (o->flag != 0) {
        if (ok) {
            d = o->alt;
            fn_82A1DDC0(d, p3, p2);
        } else {
            fn_82A1DBD8(d, p3, p2);
        }
    } else {
        fn_82A1DDC0(d, p3, p2);
    }
    if (ok) {
        fn_82A3B910(o, d, p2);
        if (o->flag != 0) {
            fn_82A1DBD8(o->dev, d, p2);
        }
    }
}
