typedef struct Obj Obj;
typedef struct { void (*dtor)(Obj *, int); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { char pad[0x10]; Obj *obj; } Self;
extern void fn_83026548(Self *);
extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC770;

void fn_830265E0(Self *s)
{
    Obj *o;
    fn_83026548(s);
    o = s->obj;
    if (o != 0) {
        void *heap = lbl_831BC770;
        o->vt->dtor(o, 0);
        fn_82FA5190(heap, o);
        s->obj = 0;
    }
}
