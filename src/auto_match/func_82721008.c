typedef struct Rc_82721008 {
    int pad[2];
    int count;
} Rc_82721008;

typedef struct Inner_82721008 {
    char pad[0xc];
    Rc_82721008 *rc;
} Inner_82721008;

typedef struct Obj_82721008 {
    char pad[0x80];
    int inner;
} Obj_82721008;

extern void fn_82720D48(char *owner, void *ctx, int a, int index, Rc_82721008 **rc, int d, int e, unsigned char f);
extern Inner_82721008 *fn_8269F500(Obj_82721008 *obj);
extern void fn_826944C8(Rc_82721008 *rc);

void fn_82721008(char *iface, void *ctx, int a, int e, Obj_82721008 *obj)
{
    if (obj != 0) {
        Inner_82721008 *inner;
        Rc_82721008 *rc;
        if (obj->inner != 0)
            inner = (Inner_82721008 *)obj->inner;
        else
            inner = fn_8269F500(obj);
        rc = inner->rc;
        rc->count = rc->count + 1;
        fn_82720D48(iface - 0x34, ctx, a, 0x67, &rc, 0, e, 0);
        {
            Rc_82721008 *r = rc;
            if (--r->count == 0)
                fn_826944C8(r);
        }
    } else {
        fn_82720D48(iface - 0x34, ctx, a, 0x67, 0, 0, e, 0);
    }
}
