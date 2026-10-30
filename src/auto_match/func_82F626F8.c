typedef struct Obj_82F626F8 Obj_82F626F8;
struct Obj_82F626F8 {
    struct { void (*dtor)(Obj_82F626F8 *self, int flags); } *vt;
};
typedef struct {
    char pad[4];
    void *h;
} Self_82F626F8;

extern Obj_82F626F8 *fn_8223F5A0(void *h);
extern void fn_8265CA20(void *p);

Self_82F626F8 *fn_82F626F8(Self_82F626F8 *self, unsigned int flags)
{
    Obj_82F626F8 *o = fn_8223F5A0(self->h);
    if (o != 0) {
        o->vt->dtor(o, 1);
    }
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
