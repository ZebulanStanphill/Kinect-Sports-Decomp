typedef struct Pair_82F57198 {
    int ptr;
    int rep;
} Pair_82F57198;

typedef struct Out_82F57198 {
    int a;
    int b;
} Out_82F57198;

typedef struct Desc_82F57198 {
    int data[12];
} Desc_82F57198;

typedef struct Big_82F57198 {
    int data[0xa80 / 4];
} Big_82F57198;

typedef struct Device_82F57198 Device_82F57198;
typedef struct DeviceVt_82F57198 {
    void *slot0;
    void *slot1;
    void (*getDesc)(Device_82F57198 *self, Desc_82F57198 *out);
} DeviceVt_82F57198;
struct Device_82F57198 {
    DeviceVt_82F57198 *vt;
};

typedef struct Self_82F57198 {
    Device_82F57198 *device;
    char pad4[0xc];
    char settings[0x1c0];
    Pair_82F57198 sp;
} Self_82F57198;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82F5B1D0(void *mem);
extern void fn_82F56E40(Pair_82F57198 *sp, void *obj);
extern void fn_824B4298(void *dst, const void *src, unsigned int n);
extern void fn_82F5B3C8(int obj, Desc_82F57198 *desc, int flags);
extern void fn_82F5B5A8(int obj, float value);
extern void fn_8256E1D8(Out_82F57198 *out, int ptr, int rep);

Out_82F57198 *fn_82F57198(Out_82F57198 *out, Self_82F57198 *self)
{
    Pair_82F57198 *sp = &self->sp;
    void *mem;
    void *n;
    Desc_82F57198 desc;
    Big_82F57198 big;

    if (sp->ptr == 0) {
        mem = fn_8265C9E0(0x28);
        n = mem ? fn_82F5B1D0(mem) : 0;
        fn_82F56E40(sp, n);
        self->device->vt->getDesc(self->device, &desc);
        fn_824B4298(&big, self->settings, 0x1c0);
        fn_82F5B3C8(sp->ptr, &desc, 0);
        fn_82F5B5A8(sp->ptr, 0.0f);
    }
    out->a = 0;
    out->b = 0;
    fn_8256E1D8(out, sp->ptr, sp->rep);
    return out;
}
