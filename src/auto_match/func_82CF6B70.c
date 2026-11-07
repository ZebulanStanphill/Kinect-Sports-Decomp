typedef struct Obj_82CF6B70 Obj_82CF6B70;

typedef int (*GetFn_82CF6B70)(Obj_82CF6B70 *self, int n);
typedef void (*FillFn_82CF6B70)(Obj_82CF6B70 *self, int *out, int count, int n);

struct Obj_82CF6B70 {
    void **vt;
    Obj_82CF6B70 *sub;
};

void fn_82CF6B70(Obj_82CF6B70 *self, int *out, int count, int n)
{
    if (n <= 0x2000) {
        int i;
        for (i = 0; i < count; i++) {
            out[i] = ((GetFn_82CF6B70)self->vt[1])(self, n);
        }
    } else {
        Obj_82CF6B70 *s = self->sub;
        ((FillFn_82CF6B70)s->vt[6])(s, out, count, n);
    }
}
