typedef struct Obj Obj;
typedef struct ObjVt { void (*dtor)(Obj *o, int flags); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct Vec { Obj **data; unsigned int count; } Vec;

void fn_82758FE8(Vec *v)
{
    unsigned int i;
    for (i = 0; i < v->count; i++) {
        v->data[i]->vt->dtor(v->data[i], 0);
    }
    v->data = 0;
    v->count = 0;
}
