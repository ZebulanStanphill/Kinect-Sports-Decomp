typedef struct Ref {
    int pad[2];
    unsigned int count;
} Ref;

typedef struct Def {
    char pad[0x14];
    unsigned char b14;
    char pad15[7];
    int m1c;
    char pad20[0x10];
    int m30;
} Def;

typedef struct Obj {
    void *vt0;
    int pad4[2];
    void *vtc;
    int pad10[22];
    void *vt68;
    Ref *ref;
    int pad70[7];
    unsigned int flags;
    int pad90[3];
    Def *def;
    int ma0;
    int ma4[3];
    int mb0;
    int mb4;
    int mb8;
    int mbc;
} Obj;

extern char lbl_8200F7F8[];
extern char lbl_8200F84C[];
extern char lbl_8200F858[];
extern void fn_826824B0(Ref *r);
extern void fn_82699740(int *p, int v);
extern int fn_8269A458(Obj *o);
extern int fn_8269AE88(Obj *o);
extern void fn_826A1050(Obj *o, int a, int b, int *c);
extern Ref *fn_826B1560(int a, int b, int c);
extern void fn_82715660(Obj *o, int v);
extern void fn_827167C8(Obj *o);

Obj *fn_82716FF0(Obj *o, Def *def, int a, int b, int *c)
{
    int tmp;
    int x;
    Ref *r;

    tmp = *c;
    fn_826A1050(o, a, b, &tmp);
    o->def = def;
    o->ma0 = 0;
    o->vt0 = lbl_8200F858;
    o->vtc = lbl_8200F84C;
    o->vt68 = lbl_8200F7F8;
    o->ma4[0] = 0;
    o->ma4[1] = 0;
    o->ma4[2] = 0;
    o->mb4 = 0;
    o->mb0 = 0;
    o->mb8 = 0;
    o->mbc = 0;
    fn_82715660(o, def->m30);
    if (o->def->b14) {
        o->flags |= 0x2000;
    } else {
        o->flags &= ~0x2000;
    }
    fn_82699740(o->ma4, o->def->m1c);
    x = fn_8269A458(o);
    r = fn_826B1560(fn_8269AE88(o), x, 9);
    if (r != 0) {
        r->count = (r->count + 1) & 0x8fffffff;
    }
    if (o->ref != 0) {
        fn_826824B0(o->ref);
    }
    o->ref = r;
    fn_827167C8(o);
    return o;
}
