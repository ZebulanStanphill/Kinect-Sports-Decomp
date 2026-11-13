typedef struct Obj_827120C8 Obj_827120C8;
typedef struct VT_827120C8 {
    void *f[0x74 / 4];
    void (*f74)(Obj_827120C8 *self, void *arg);
} VT_827120C8;
struct Obj_827120C8 {
    VT_827120C8 *vt;
    int pad4[2];
    void **pp;
};
extern void fn_826F7B88(void *p);
extern unsigned char fn_82711940(Obj_827120C8 *self);

int fn_827120C8(Obj_827120C8 *self, void *arg)
{
    if (*self->pp != 0) {
        fn_826F7B88(*self->pp);
    }
    if (fn_82711940(self)) {
        self->vt->f74(self, arg);
        return 1;
    }
    return 0;
}
