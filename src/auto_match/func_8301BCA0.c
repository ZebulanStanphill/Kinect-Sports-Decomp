typedef struct O O;
typedef struct { void *s[8]; int (*f)(O *o); } OVt;
struct O { OVt *vt; int a, b; unsigned char flags; };

int fn_8301BCA0(void *ctx, O *o)
{
    int r;

    if ((o->flags & 0x80) == 0) {
        r = o->vt->f(o);
        if (r == 1)
            o->flags |= 0x80;
        return r;
    }
    return 1;
}
