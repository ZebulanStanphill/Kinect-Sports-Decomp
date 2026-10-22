typedef struct Mgr {
    char pad0[0x8c];
    int f8c;
    int f90;
    int busy;
    int f98;
    unsigned char f9c;
    char pad9d[7];
    int fa4;
} Mgr;

typedef struct Obj {
    int f0;
    int f4;
    Mgr *mgr;
    int fc;
    int f10;
} Obj;

typedef struct Msg {
    unsigned char type;
    Obj *obj;
    void *val;
} Msg;

extern void fn_82CE4040(void *p);
extern void fn_82CE4118(void *p);
extern void fn_82D80C18(Mgr *m);
extern void fn_82D80C30(Mgr *m);
extern void fn_82D80C48(Mgr *m, Msg *msg);
extern void fn_82D91178(Mgr *m, Obj *o);
extern void fn_82D913E0(Mgr *m, Obj *o);
extern void fn_82D9A330(Obj *o);
extern void fn_82DADCE0(Mgr *m, Obj *o);

static void Obj_lock(Obj *o)
{
    if (o->mgr != 0) {
        o->mgr->busy++;
        fn_82D913E0(o->mgr, o);
    }
}

int fn_82D99CD0(Obj *o, void *v)
{
    Mgr *m = o->mgr;

    if (m != 0 && m->busy != 0) {
        Msg msg;
        msg.type = 5;
        msg.obj = o;
        msg.val = v;
        fn_82D80C48(m, &msg);
        return 0;
    }
    Obj_lock(o);
    fn_82CE4040(v);
    if (o->f10 != 0)
        fn_82CE4118((void *)o->f10);
    o->f10 = (int)v;
    if (o->mgr != 0)
        fn_82DADCE0(o->mgr, o);
    fn_82D9A330(o);
    if (o->mgr != 0) {
        fn_82D91178(o->mgr, o);
        m = o->mgr;
        if (--m->busy == 0 && !m->f9c) {
            if (m->f8c != 0)
                fn_82D80C18(m);
            if (m->fa4 == 1 && m->f90 != 0)
                fn_82D80C30(m);
        }
    }
    return 1;
}
