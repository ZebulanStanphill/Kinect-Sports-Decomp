typedef struct Inner_8232D878 Inner_8232D878;
typedef struct {
    void *f0[5];
    void (*set)(Inner_8232D878 *p, int old, int now);
} InnerVt_8232D878;
struct Inner_8232D878 {
    InnerVt_8232D878 *vt;
    int pad4;
    int state;
};

typedef struct {
    int pad0[2];
    char *data;
    Inner_8232D878 *inner;
    int pad10[4];
    char sub[4];
} Obj_8232D878;

extern int fn_8232C828(Obj_8232D878 *o, int a, void *sub, float f);
extern void fn_8232C528(Inner_8232D878 *p, int x);

void fn_8232D878(Obj_8232D878 *o, int b, int c)
{
    Inner_8232D878 *p;
    int old;

    if (o->inner->state == 2 &&
        fn_8232C828(o, c, o->sub, *(float *)(o->data + 0x4e8) / *(float *)(o->data + 0x4e0)) != 0) {
        p = o->inner;
        old = p->state;
        p->state = b == 0;
        p->vt->set(p, old, b == 0);
        fn_8232C528(o->inner, 1);
    }
}
