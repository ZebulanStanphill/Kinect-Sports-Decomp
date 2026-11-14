typedef struct Obj_82552B50 Obj_82552B50;
struct Obj_82552B50 {
    void (**vt)(Obj_82552B50 *);
};
typedef struct Handle_82552B50 {
    Obj_82552B50 *obj;
    int f4;
    int f8;
} Handle_82552B50;
extern unsigned char fn_82536358(void *item);
extern void fn_82536288(Handle_82552B50 *h);

static __forceinline unsigned char IsValid(Obj_82552B50 *o)
{
    if (o != 0)
        return fn_82536358(o);
    return 0;
}

void fn_82552B50(Handle_82552B50 *h, unsigned char destroy)
{
    Obj_82552B50 *o = h->obj;
    if (IsValid(o)) {
        if (destroy && o != 0) {
            o->vt[0](o);
        }
        fn_82536288(h);
        h->obj = 0;
        h->f8 = -1;
        h->f4 = 0;
    }
}
