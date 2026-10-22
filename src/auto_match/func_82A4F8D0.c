typedef struct Obj {
    void *vtbl;
    int base[7];
    void *vtbl2;
    unsigned short s24;
    unsigned short s26;
    unsigned short s28;
    int f2c;
    int f30;
    int f34;
    int f38;
} Obj;

extern char lbl_8315EA48[];
extern char lbl_83219D50[];
extern char lbl_82089F70[];
extern char lbl_82089F84[];
extern void fn_82A5F3B8(Obj *o, void *p);
extern void fn_82A3FE48(void *p);

Obj *fn_82A4F8D0(Obj *o)
{
    fn_82A5F3B8(o, lbl_8315EA48);
    o->s24 = 0;
    o->vtbl = lbl_82089F84;
    o->vtbl2 = lbl_82089F70;
    o->s26 = 0;
    o->s28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = 0;
    o->f38 = 0;
    fn_82A3FE48(lbl_83219D50);
    return o;
}
