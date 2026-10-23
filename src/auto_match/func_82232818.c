typedef struct Sub {
    void *vt;
    int data[20];
} Sub;

typedef struct Obj {
    void *vt;
    int pad[17];
    Sub m48;
    Sub m9c;
    Sub arr[20];
    Sub m780;
    Sub m7d4;
    Sub m828;
    Sub m87c;
    Sub m8d0;
} Obj;

extern void fn_828974A8(Obj *o);
extern void fn_8289D4C0(Sub *s);
extern char lbl_82196AE4[];
extern char lbl_82196B30[];
extern char lbl_82196B78[];
extern char lbl_82196D38[];
extern char lbl_82197070[];
extern char lbl_82197080[];
extern char lbl_82197100[];

static void dtorB78(Sub *s) { s->vt = lbl_82196B78; fn_8289D4C0(s); }
static void dtor7100(Sub *s) { s->vt = lbl_82197100; fn_8289D4C0(s); }
static void dtor7080(Sub *s) { s->vt = lbl_82197080; fn_8289D4C0(s); }
static void dtorD38(Sub *s) { s->vt = lbl_82196D38; fn_8289D4C0(s); }
static void dtorB30(Sub *s) { s->vt = lbl_82196B30; fn_8289D4C0(s); }

static void arr_dtor(Sub *a, int count)
{
    Sub *p = a + count;
    while (--count >= 0) {
        p--;
        dtorD38(p);
    }
}

void fn_82232818(Obj *o)
{
    o->vt = lbl_82196AE4;
    dtorB78(&o->m8d0);
    dtor7100(&o->m87c);
    dtor7100(&o->m828);
    dtor7080(&o->m7d4);
    dtor7080(&o->m780);
    arr_dtor(o->arr, 20);
    dtorB78(&o->m9c);
    dtorB30(&o->m48);
    o->vt = lbl_82197070;
    fn_828974A8(o);
}
