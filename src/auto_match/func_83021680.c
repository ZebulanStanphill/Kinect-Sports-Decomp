typedef struct Obj Obj;
typedef struct ObjVt {
    void *pad[2];
    void (*f)(Obj *self);
} ObjVt;
struct Obj { ObjVt *vt; };
typedef struct S {
    char pad[0x10];
    Obj **begin;
    Obj **end;
} S;

void fn_83021680(S *s)
{
    Obj **p;
    for (p = s->begin; p != s->end; p++)
        (*p)->vt->f(*p);
    s->end = s->begin;
}
