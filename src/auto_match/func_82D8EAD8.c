typedef struct Inner_82D8EAD8 {
    char pad[0x25];
    unsigned char state : 2;
    unsigned char rest : 6;
} Inner_82D8EAD8;
typedef struct Item_82D8EAD8 {
    char pad[8];
    Inner_82D8EAD8 *inner;
} Item_82D8EAD8;
typedef struct Obj_82D8EAD8 {
    char pad0[0x8c];
    int f8c;
    int f90;
    int f94;
    int pad98;
    unsigned char f9c;
    char pad9d[0xa4 - 0x9d];
    int fA4;
    char padA8[0x148 - 0xa8];
    int f148;
} Obj_82D8EAD8;
extern void fn_82D80C18(Obj_82D8EAD8 *o);
extern void fn_82D80C30(Obj_82D8EAD8 *o);
extern void fn_82DADE90(Obj_82D8EAD8 *o, Item_82D8EAD8 *p);
extern void fn_82DBBDA8(Item_82D8EAD8 *p);

void fn_82D8EAD8(Obj_82D8EAD8 *o, Item_82D8EAD8 *p, int notify)
{
    Inner_82D8EAD8 *in = p->inner;
    in->state = 1;
    if (o->f94 != 0) {
        if (notify != 0 && o->f148 != 0) {
            fn_82DADE90(o, p);
        }
        fn_82DBBDA8(p);
        return;
    }
    o->f94 = 1;
    if (notify != 0 && o->f148 != 0) {
        fn_82DADE90(o, p);
    }
    fn_82DBBDA8(p);
    if (--o->f94 == 0 && o->f9c == 0) {
        if (o->f8c != 0) {
            fn_82D80C18(o);
        }
        if (o->fA4 == 1 && o->f90 != 0) {
            fn_82D80C30(o);
        }
    }
}
