typedef struct Rc_82720F48 {
    int pad[2];
    int count;
} Rc_82720F48;

typedef struct Inner_82720F48 {
    char pad[0xc];
    Rc_82720F48 *rc;
} Inner_82720F48;

typedef struct Obj_82720F48 {
    char pad[0x80];
    int inner;
} Obj_82720F48;

extern void fn_82720D48(char *owner, void *ctx, int a, int index, Rc_82720F48 **rc, int d, int e, unsigned char f);
extern Inner_82720F48 *fn_8269F500(Obj_82720F48 *obj);
extern void fn_826944C8(Rc_82720F48 *rc);

void fn_82720F48(char *iface, void *ctx, int a, int e, Obj_82720F48 *obj)
{
    if (obj != 0) {
        Inner_82720F48 *inner;
        Rc_82720F48 *rc;
        if (obj->inner != 0)
            inner = (Inner_82720F48 *)obj->inner;
        else
            inner = fn_8269F500(obj);
        rc = inner->rc;
        rc->count = rc->count + 1;
        fn_82720D48(iface - 0x34, ctx, a, 0x65, &rc, e, 0, 0);
        {
            Rc_82720F48 *r = rc;
            if (--r->count == 0)
                fn_826944C8(r);
        }
    } else {
        fn_82720D48(iface - 0x34, ctx, a, 0x65, 0, e, 0, 0);
    }
}
