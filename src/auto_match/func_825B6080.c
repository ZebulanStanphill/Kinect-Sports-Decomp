typedef struct Obj Obj;
typedef struct ObjVt { void *s[7]; char *(*get)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; };
extern int fn_82837AE0(int h);
extern void *fn_82837AC8(int h);

void *fn_825B6080(int p)
{
    Obj *o = *(Obj **)(p + 4);
    int *h = *(int **)(*(char **)(o->vt->get(o) + 0x10) + 0x48);
    return fn_82837AE0(*h) ? fn_82837AC8(*h) : 0;
}
