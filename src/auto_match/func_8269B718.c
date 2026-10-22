typedef struct Obj Obj;
typedef struct VT { void *pad[65]; int (*f104)(Obj *o, unsigned int flag); } VT;
struct Obj { VT *vt; int pad[34]; unsigned int flags; };
extern void fn_8269AD70(Obj *o, int a);
extern void fn_8269AE08(Obj *o, int a);

void fn_8269B718(Obj *o, int a)
{
    int r = o->vt->f104(o, (o->flags >> 19) & 1);
    switch (r) { case -1: fn_8269AE08(o, a); break; case 1: fn_8269AD70(o, a); break; }
}
