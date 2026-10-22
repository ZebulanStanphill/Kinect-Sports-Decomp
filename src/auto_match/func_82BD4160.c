typedef struct IObj IObj;

typedef struct {
    char pad0[0x48];
    void (*Release)(IObj *self);
} IObjVtbl;

struct IObj {
    IObjVtbl *vtbl;
};

typedef struct {
    char pad0[0x10];
    void *f10;
    char pad14[0x10];
    int mode;
    void *buf;
    char pad2c[0x10];
    IObj *obj;
    char pad40[0xc];
    void *f4c;
} Thing;

extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82BD8098(void *p);
extern void fn_82BD88F8(void *p);

void fn_82BD4160(Thing *param_1)
{
    if (param_1 != 0) {
        if (param_1->mode == 1) {
            if (param_1->obj != 0) {
                param_1->obj->vtbl->Release(param_1->obj);
                param_1->obj = 0;
            }
            fn_82BD88F8(param_1->f4c);
        }
        if (param_1->buf != 0) {
            fn_8265C990(param_1->buf, 0x618a0003);
            param_1->buf = 0;
        }
        fn_82BD8098(param_1->f10);
        fn_8265C990(param_1, 0x618a8011);
    }
}
