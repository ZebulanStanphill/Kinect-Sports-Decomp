typedef struct Src Src;
typedef struct {
    void *slot0;
    void *slot1;
    int (*get)(Src *s);
} SrcVtbl;
struct Src {
    SrcVtbl *vt;
};

typedef struct {
    int x0;
    Src *src;
    int base;
} Obj;

int fn_82A8CE98(Obj *o)
{
    return o->src->vt->get(o->src) - o->base;
}
