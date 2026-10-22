typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void *f10;
    void (*f14)(Obj *self, int a, int *out);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};

typedef struct S {
    char pad0[8];
    int off[6];
    struct {
        Obj *obj;
        int pad;
    } e[6];
} S;

void fn_8224A7E0(S *s, int a, char *dst)
{
    int v[6];

    s->e[0].obj->vt->f14(s->e[0].obj, a, &v[0]);
    s->e[1].obj->vt->f14(s->e[1].obj, a, &v[1]);
    s->e[2].obj->vt->f14(s->e[2].obj, a, &v[2]);
    s->e[3].obj->vt->f14(s->e[3].obj, a, &v[3]);
    s->e[4].obj->vt->f14(s->e[4].obj, a, &v[4]);
    s->e[5].obj->vt->f14(s->e[5].obj, a, &v[5]);
    if (dst != 0) {
        *(int *)(dst + s->off[0]) = v[0];
        *(int *)(dst + s->off[1]) = v[1];
        *(int *)(dst + s->off[2]) = v[2];
        *(int *)(dst + s->off[3]) = v[3];
        *(int *)(dst + s->off[4]) = v[4];
        *(int *)(dst + s->off[5]) = v[5];
    }
}
