typedef struct Obj Obj;
typedef struct { void *s0; void *s1; int (*GetType)(Obj *); } ObjVtbl;
struct Obj { ObjVtbl *vt; };

extern void fn_82696480(void *self, void *p);
extern void fn_82696BC8(void *self, void *p);

void fn_82696CB8(void *self, Obj *o)
{
    int t = o->vt->GetType(o);
    unsigned char b = (t >= 2 && t <= 5);
    if (b)
        fn_82696480(self, (char *)o - 0x68);
    else
        fn_82696BC8(self, (char *)o - 0x10);
}
