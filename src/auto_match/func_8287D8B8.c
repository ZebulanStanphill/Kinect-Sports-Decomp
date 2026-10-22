typedef struct {
    void *begin;
    void *end;
    void *cap;
} Vec;

typedef struct {
    void *data;
    unsigned char pad[0x18];
} Tbl;

typedef struct {
    int unk0;
    Tbl t4;
    Tbl t20;
    Vec v3c;
    int unk48;
    Vec v4c;
} Obj;

extern void fn_825AD4B8(Tbl *t);
extern void fn_8265CA20(void *p);

static void Vec_Free(Vec *v)
{
    if (v->begin != 0) {
        fn_8265CA20(v->begin);
    }
    v->begin = 0;
    v->end = 0;
    v->cap = 0;
}

static void Tbl_Free(Tbl *t)
{
    fn_825AD4B8(t);
    fn_8265CA20(t->data);
    t->data = 0;
}

void fn_8287D8B8(Obj *o)
{
    Vec_Free(&o->v4c);
    Vec_Free(&o->v3c);
    Tbl_Free(&o->t20);
    Tbl_Free(&o->t4);
}
