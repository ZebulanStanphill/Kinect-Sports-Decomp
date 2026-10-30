typedef struct {
    int id;
    int a;
    int b;
    unsigned char flag;
} Info_83025208;

typedef struct Inner_83025208 Inner_83025208;
typedef struct {
    void *f[58];
    void (*query)(Inner_83025208 *self, int key, Info_83025208 *out, int flags);
} InnerVt_83025208;
struct Inner_83025208 { InnerVt_83025208 *vt; };

typedef struct {
    Inner_83025208 *inner;
} Obj_83025208;

void fn_83025208(Obj_83025208 *o, int key, Info_83025208 *out)
{
    Inner_83025208 *in = o->inner;
    if (in != 0) {
        in->vt->query(in, key, out, 0);
        return;
    }
    out->a = 0;
    out->id = -1;
    out->b = 0;
    out->flag = 0;
}
