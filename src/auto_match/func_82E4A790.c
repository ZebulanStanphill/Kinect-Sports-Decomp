typedef struct Obj_82E4A790 Obj_82E4A790;
typedef struct {
    void *f0;
    void (*addref)(Obj_82E4A790 *self);
    void (*release)(Obj_82E4A790 *self);
} VT_82E4A790;
struct Obj_82E4A790 {
    VT_82E4A790 *vt;
    int f4;
    char pad[0x38];
    unsigned f40;
    char pad2[4];
    int f48, f4c;
};
typedef struct {
    char pad[0x9c];
    int f9c;
    char pad2[0x28];
    unsigned __int64 fc8;
} Ctx_82E4A790;
extern void *fn_82E50BE8(int n, int a, int b, int c, int d);
extern Obj_82E4A790 *fn_82E49568(void *m, int a, int b, int c, int d);
extern int fn_82E4A178(Ctx_82E4A790 *c, void *a, void *b, void *d, Obj_82E4A790 *o);
extern void fn_82E65FD0(Obj_82E4A790 *o);
extern int fn_82A29FE0(int a, int b, int c, int d, void *e);
extern int fn_82A1F470(void);
extern void fn_82E49CA8(Obj_82E4A790 *o, int v);
extern int fn_82E4A2D8(Ctx_82E4A790 *c, void *d, Obj_82E4A790 *o);

int fn_82E4A790(Ctx_82E4A790 *c, void *a, void *b, void *d)
{
    int hr;
    int err;
    void *m;
    Obj_82E4A790 *o;
    if (a == 0 || d == 0)
        return 0x80070057;
    if (c->f9c == -1)
        return 0xc00d36b2;
    {
        m = fn_82E50BE8(100, 0, 0, 0, 0);
        if (m != 0)
            o = fn_82E49568(m, 2, 0, 0, 0);
        else
            o = 0;
        if (o == 0) {
            hr = 0x8007000e;
        } else {
            o->vt->addref(o);
            hr = fn_82E4A178(c, a, b, d, o);
            if (hr >= 0) {
                o->vt->addref(o);
                fn_82E65FD0(o);
                if (fn_82A29FE0(c->f9c, o->f48, o->f4c, 0, &o->f4) == 0 && (unsigned)fn_82A1F470() != 0x3e5) {
                    o->vt->release(o);
                    err = fn_82A1F470();
                    if (err <= 0)
                        hr = err;
                    else
                        hr = (err & 0xffff) | 0x80070000;
                } else {
                    fn_82E49CA8(o, -1);
                    hr = fn_82E4A2D8(c, d, o);
                    if (hr >= 0)
                        c->fc8 += o->f40;
                }
            }
            o->vt->release(o);
        }
    }
    return hr;
}
