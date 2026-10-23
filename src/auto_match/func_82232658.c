typedef struct Sub {
    void *vt;
    int data[21];
} Sub;

typedef struct Sub2 {
    void *vt;
    int data[25];
} Sub2;

typedef struct Obj {
    void *vt;
    int pad[12];
    Sub m34;
    Sub m8c;
    Sub arr[20];
    Sub m7c4;
    Sub m81c;
    Sub2 m874;
    Sub2 m8dc;
    Sub m944;
} Obj;

extern void fn_8288B338(Obj *o);
extern void fn_82897D88(void *s);
extern char lbl_82196884[];
extern char lbl_82196AF4[];
extern char lbl_82196AFC[];
extern char lbl_82196B0C[];
extern char lbl_82196B1C[];
extern char lbl_821970C0[];
extern char lbl_82197534[];

static void dtorB0C(Sub *s) { s->vt = lbl_82196B0C; fn_82897D88(s); }
static void dtor7534(Sub2 *s) { s->vt = lbl_82197534; fn_82897D88(s); }
static void dtor70C0(Sub *s) { s->vt = lbl_821970C0; fn_82897D88(s); }
static void dtorB1C(Sub *s) { s->vt = lbl_82196B1C; fn_82897D88(s); }
static void dtorAFC(Sub *s) { s->vt = lbl_82196AFC; fn_82897D88(s); }

static void arr_dtor(Sub *a, int count)
{
    Sub *p = a + count;
    while (--count >= 0) {
        p--;
        dtorB1C(p);
    }
}

void fn_82232658(Obj *o)
{
    o->vt = lbl_82196AF4;
    dtorB0C(&o->m944);
    dtor7534(&o->m8dc);
    dtor7534(&o->m874);
    dtor70C0(&o->m81c);
    dtor70C0(&o->m7c4);
    arr_dtor(o->arr, 20);
    dtorB0C(&o->m8c);
    dtorAFC(&o->m34);
    o->vt = lbl_82196884;
    fn_8288B338(o);
}
