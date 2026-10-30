typedef struct Inner_8300F2C0 Inner_8300F2C0;
typedef struct {
    void *s0, *s1;
    void (*f8)(Inner_8300F2C0 *);
} InnerVT_8300F2C0;
struct Inner_8300F2C0 {
    InnerVT_8300F2C0 *vt;
};
typedef struct Obj_8300F2C0 Obj_8300F2C0;
typedef struct {
    void (*f0)(Obj_8300F2C0 *, int);
} ObjVT_8300F2C0;
struct Obj_8300F2C0 {
    ObjVT_8300F2C0 *vt;
    int pad;
    Inner_8300F2C0 *inner;
};

extern void fn_82FA5190(void *, Obj_8300F2C0 *);
extern void *lbl_831BC768;

void fn_8300F2C0(void *unused, Obj_8300F2C0 *o)
{
    void *g;
    o->inner->vt->f8(o->inner);
    g = lbl_831BC768;
    o->vt->f0(o, 0);
    fn_82FA5190(g, o);
}
