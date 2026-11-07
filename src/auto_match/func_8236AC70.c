typedef struct S_8236AC70 {
    int *arr;
    int pad[3];
    int idx;
} S_8236AC70;

typedef struct Vec_8236AC70 {
    S_8236AC70 **begin;
    S_8236AC70 **end;
} Vec_8236AC70;

typedef struct Obj_8236AC70 {
    int a;
    int b;
    Vec_8236AC70 *vec;
} Obj_8236AC70;

typedef struct Visitor_8236AC70 {
    void *vt;
    unsigned int result;
} Visitor_8236AC70;

extern char lbl_821B2FB0[];
extern void fn_822ABBF0(int value, Visitor_8236AC70 *vis);

static __forceinline void Visitor_8236AC70_init(Visitor_8236AC70 *p)
{
    p->result = 0;
    p->vt = lbl_821B2FB0;
}

unsigned int fn_8236AC70(Obj_8236AC70 *o)
{
    Vec_8236AC70 *v = o->vec;
    if (v != 0) {
        Visitor_8236AC70 vis;
        unsigned int n;
        n = v->end - v->begin;
        Visitor_8236AC70_init(&vis);
        if (n != 0) {
            S_8236AC70 *s = v->begin[0];
            fn_822ABBF0(s->arr[s->idx], &vis);
            if (vis.result != 0)
                return vis.result;
        }
        if (n > 1) {
            S_8236AC70 *s = o->vec->begin[1];
            fn_822ABBF0(s->arr[s->idx], &vis);
            if (vis.result != 0)
                return vis.result;
        }
    }
    return 0;
}
