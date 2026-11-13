typedef struct Pair_82F57338 {
    int ptr;
    int rep;
} Pair_82F57338;

typedef struct Out_82F57338 {
    int a;
    int b;
} Out_82F57338;

typedef struct Desc_82F57338 {
    int data[12];
} Desc_82F57338;

typedef struct Big_82F57338 {
    int data[0xa80 / 4];
} Big_82F57338;

typedef struct Device_82F57338 Device_82F57338;
typedef struct DeviceVt_82F57338 {
    void *slot0;
    void (*getBig)(Device_82F57338 *self, Big_82F57338 *out);
    void (*getDesc)(Device_82F57338 *self, Desc_82F57338 *out);
} DeviceVt_82F57338;
struct Device_82F57338 {
    DeviceVt_82F57338 *vt;
};

typedef struct Self_82F57338 {
    Device_82F57338 *device;
    char pad4[0x1e4];
    Pair_82F57338 sp;
} Self_82F57338;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82F5AC50(void *mem);
extern void fn_82F56F60(Pair_82F57338 *sp, void *obj);
extern void fn_82F5AF98(int obj, Desc_82F57338 *desc, int flags, float value);
extern void fn_8256E1D8(Out_82F57338 *out, int ptr, int rep);

Out_82F57338 *fn_82F57338(Out_82F57338 *out, Self_82F57338 *self)
{
    Pair_82F57338 *sp = &self->sp;
    void *mem;
    void *n;
    Desc_82F57338 desc;
    Big_82F57338 big;

    if (sp->ptr == 0) {
        mem = fn_8265C9E0(0x280);
        n = mem ? fn_82F5AC50(mem) : 0;
        fn_82F56F60(sp, n);
        self->device->vt->getDesc(self->device, &desc);
        self->device->vt->getBig(self->device, &big);
        fn_82F5AF98(sp->ptr, &desc, 0, 0.0f);
    }
    out->a = 0;
    out->b = 0;
    fn_8256E1D8(out, sp->ptr, sp->rep);
    return out;
}
