typedef struct Obj Obj;
typedef struct ObjVt {
    char pad[0x94];
    int (*getTime)(Obj *o, __int64 *t);
} ObjVt;
struct Obj { ObjVt *vt; };

typedef struct S {
    char pad[0x70];
    int h;
} S;

extern int fn_82E5EE48(int h);
extern __int64 fn_82E74BA0(S *s, Obj *o);

__int64 fn_82E75080(S *s, Obj *o)
{
    __int64 t;
    if (o == 0) {
        return 0;
    }
    if (fn_82E5EE48(s->h) == 0) {
        t = 0;
        o->vt->getTime(o, &t);
        return t / 10000;
    }
    return fn_82E74BA0(s, o);
}
