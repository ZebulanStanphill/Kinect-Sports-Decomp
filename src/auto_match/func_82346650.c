extern void fn_822315A0(void *p);
extern void fn_823410C8(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_821B1B20[];

typedef struct Inner {
    char pad[0x1c];
    void *p1c;
    int pad20;
    void *p24;
} Inner;

typedef struct Obj {
    void *vtbl;
    int pad[3];
    Inner *inner;
} Obj;

void fn_82346650(Obj *p)
{
    Inner *in = p->inner;
    p->vtbl = lbl_821B1B20;
    if (in != 0) {
        if (in->p24 != 0) {
            fn_822315A0(in->p24);
        }
        if (in->p1c != 0) {
            fn_822315A0(in->p1c);
        }
        fn_8265CA20(in);
    }
    fn_823410C8(p);
}
