typedef struct Obj Obj;
typedef struct ObjVt {
    void *f[10];
    int (*read)(Obj *o, int h, int n);
} ObjVt;
struct Obj { ObjVt *vt; };

typedef struct S {
    int pad0;
    int pad4;
    Obj *obj;
    int h;
    int state;
    int x14;
    unsigned int n;
    int pad1c;
    unsigned __int64 total;
} S;

void fn_8270C7C0(S *p)
{
    int n;
    if (p->state == 1) {
        n = p->obj->vt->read(p->obj, p->h, 0x1ff8);
        p->x14 = 0;
        if (n < 0)
            n = 0;
        p->n = n;
        p->total += (unsigned int)n;
    }
}
