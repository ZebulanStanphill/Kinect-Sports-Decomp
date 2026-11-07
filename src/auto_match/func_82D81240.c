typedef struct Vt_82D81240 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void *slot4;
    void (*f14)(void *self);
} Vt_82D81240;

typedef struct Arg_82D81240 {
    Vt_82D81240 *vt;
    unsigned short f4;
    unsigned short f6;
    char pad8[0x28];
    char sub30[0x24];
    void *f54;
} Arg_82D81240;

typedef struct Obj_82D81240 {
    char pad0[0x88];
    void *f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    unsigned char f9c;
    unsigned char f9d;
    unsigned char pad9e[2];
    int fa0;
    int fa4;
} Obj_82D81240;

typedef struct Msg_82D81240 {
    unsigned char type;
    Arg_82D81240 *arg;
} Msg_82D81240;

extern void fn_82CE4118(Arg_82D81240 *a);
extern void fn_82D40590(void *p);
extern void fn_82D8F620(Obj_82D81240 *o, Arg_82D81240 *a);
extern void fn_82D912B0(Obj_82D81240 *o, Arg_82D81240 *a);
extern void fn_82DA6530(void *q, Msg_82D81240 *m);
extern void fn_82DA6A58(void *q);
extern void fn_82DA6BA8(void *q);
extern void fn_82DACAE8(Arg_82D81240 *a);
extern void fn_82DAD8A8(Obj_82D81240 *o, Arg_82D81240 *a);

unsigned char *fn_82D81240(unsigned char *ret, Obj_82D81240 *o, Arg_82D81240 *a)
{
    Msg_82D81240 msg;

    if (o->f94 != 0) {
        msg.type = 2;
        msg.arg = a;
        fn_82DA6530(o->f88, &msg);
        *ret = 0;
        return ret;
    }
    o->f94 = 1;
    fn_82D912B0(o, a);
    fn_82DAD8A8(o, a);
    fn_82DACAE8(a);
    o->f9d = 0;
    fn_82D8F620(o, a);
    if (a->f54 != 0) {
        fn_82D40590(a->sub30);
    }
    if (a->f4 == 0) {
        a->vt->f14(a);
    }
    fn_82CE4118(a);
    o->f9d = 1;
    if (--o->f94 == 0 && o->f9c == 0) {
        if (o->f8c != 0) {
            o->f8c = 0;
            fn_82DA6BA8(o->f88);
        }
        if (o->fa4 == 1 && o->f90 != 0) {
            o->f90 = 0;
            fn_82DA6A58(o->f88);
        }
    }
    *ret = 1;
    return ret;
}
