typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*f10)(Obj *self, int a, int b);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};

typedef struct S {
    char pad0[8];
    int off[8];
    struct {
        Obj *obj;
        int pad;
    } e[8];
} S;

void fn_823FA1C8(S *s, int a, int b)
{
    s->e[0].obj->vt->f10(s->e[0].obj, a, s->off[0] + b);
    s->e[1].obj->vt->f10(s->e[1].obj, a, s->off[1] + b);
    s->e[2].obj->vt->f10(s->e[2].obj, a, s->off[2] + b);
    s->e[3].obj->vt->f10(s->e[3].obj, a, s->off[3] + b);
    s->e[4].obj->vt->f10(s->e[4].obj, a, s->off[4] + b);
    s->e[5].obj->vt->f10(s->e[5].obj, a, s->off[5] + b);
    s->e[6].obj->vt->f10(s->e[6].obj, a, s->off[6] + b);
    s->e[7].obj->vt->f10(s->e[7].obj, a, s->off[7] + b);
}
