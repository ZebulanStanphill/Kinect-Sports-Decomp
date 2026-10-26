typedef struct Obj Obj;
typedef struct { void (*destroy)(Obj *self, int flags); } ObjVtbl;
struct Obj { ObjVtbl *vt; };
typedef struct { void *vt; int f4; Obj *child; } Self;

extern void fn_8265CA20(void *p);
extern char lbl_82197048[];

Self *fn_82446B48(Self *self, unsigned int flags)
{
    Obj *c = self->child;
    if (c != 0)
        c->vt->destroy(c, 1);
    self->vt = lbl_82197048;
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
