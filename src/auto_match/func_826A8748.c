typedef struct Obj Obj;
typedef struct ObjVt { void *s[0x40 / 4]; char *(*get)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; };

unsigned int fn_826A8748(int p)
{
    Obj *o = *(Obj **)(p + 0x74);
    return (~*(unsigned int *)(o->vt->get(o) + 0xb00) >> 6) & 1;
}
