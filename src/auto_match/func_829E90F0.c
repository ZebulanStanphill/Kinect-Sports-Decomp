typedef struct Iface_829E90F0 Iface_829E90F0;
struct Iface_829E90F0 {
    struct {
        void *f0;
        int (*f4)(Iface_829E90F0 *self);
    } *vt;
};

typedef struct Self_829E90F0 {
    char pad0[0x20];
    Iface_829E90F0 *inner;
} Self_829E90F0;

int fn_829E90F0(Self_829E90F0 *self, void **out)
{
    int hr = 0x80004005;

    if (out == 0)
        return 0x80070057;
    *out = 0;
    if (self->inner != 0)
        hr = self->inner->vt->f4(self->inner);
    return hr;
}
