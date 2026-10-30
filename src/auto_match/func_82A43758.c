typedef struct Obj { void (**vt)(); } Obj;
typedef struct Mid { char pad[0x2c]; Obj lock; } Mid;
typedef struct S { char pad[0x34]; Mid *m; char pad2[0x90 - 0x38]; Obj *o; } S;

int fn_82A43758(S *s)
{
    int r;
    ((void (*)(Obj *))s->m->lock.vt[2])(&s->m->lock);
    r = ((int (*)(Obj *))s->o->vt[10])(s->o);
    ((void (*)(Obj *))s->m->lock.vt[5])(&s->m->lock);
    return r;
}
