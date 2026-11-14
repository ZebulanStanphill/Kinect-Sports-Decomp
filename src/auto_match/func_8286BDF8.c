typedef struct Object_8286BDF8 Object_8286BDF8;

typedef struct ObjectVtbl_8286BDF8 {
    void *slots[7];
    void (*Release)(Object_8286BDF8 *self);
} ObjectVtbl_8286BDF8;

struct Object_8286BDF8 {
    ObjectVtbl_8286BDF8 *vt;
};

typedef struct Factory_8286BDF8 Factory_8286BDF8;

typedef struct FactoryVtbl_8286BDF8 {
    int (*Create)(Factory_8286BDF8 *self, int a, int b, Object_8286BDF8 **out, int c);
} FactoryVtbl_8286BDF8;

struct Factory_8286BDF8 {
    FactoryVtbl_8286BDF8 *vt;
};

extern void *fn_82865170(void);
extern void fn_82866418(void *p);
extern void *fn_828684F8(void);
extern int fn_82870B98(void *manager, Object_8286BDF8 *obj);
extern int fn_82870BA0(Object_8286BDF8 *obj, unsigned char flag);

int fn_8286BDF8(Factory_8286BDF8 *self, int a, int b, int c)
{
    Object_8286BDF8 *obj = 0;
    if (self->vt->Create(self, a, b, &obj, c) < 0) {
        fn_82866418(fn_82865170());
        if (obj != 0) {
            obj->vt->Release(obj);
        }
        return 0xa00f0000;
    }
    {
        Object_8286BDF8 *o = obj;
        fn_82870B98(fn_828684F8(), o);
        fn_82870BA0(o, 0);
        fn_82870B98(fn_828684F8(), o);
    }
    return 0x200f0000;
}
