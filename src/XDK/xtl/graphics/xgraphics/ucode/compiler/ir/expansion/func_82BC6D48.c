typedef struct VT {
    char pad[0x58];
    void (*fn58)(void *self, int a, int i, int v);
} VT;
typedef struct Obj { VT *vt; } Obj;
extern int fn_82BD3510(unsigned int *p, int i);

void fn_82BC6D48(unsigned int *p, Obj *o)
{
    int i;
    for (i = 0; i < 4; i++) {
        int v = fn_82BD3510(p, i);
        o->vt->fn58(o, 1, i, v);
    }
    if ((p[0] & 0x400000) != 0) {
        p[1] = (p[1] & 0xffffba98) | 0x3210;
    }
}
