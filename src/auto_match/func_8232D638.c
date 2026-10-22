typedef struct Inner Inner;
typedef struct {
    void *f0[5];
    void (*set)(Inner *p, int old, int now);
} InnerVt;
struct Inner {
    InnerVt *vt;
    int pad4;
    int state;
};

typedef struct {
    int pad0[2];
    char *data;
    Inner *inner;
    int pad10[2];
    char sub[4];
} Obj;

extern int fn_8232C828(Obj *o, int a, void *sub, float f);

void fn_8232D638(Obj *o, int b, int c)
{
    Inner *p;
    int old;

    if (fn_8232C828(o, c, o->sub, *(float *)(o->data + 0x4e8) / *(float *)(o->data + 0x4e0)) != 0) {
        p = o->inner;
        old = p->state;
        p->state = b == 0;
        p->vt->set(p, old, b == 0);
    }
}
