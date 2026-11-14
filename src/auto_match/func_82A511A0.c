typedef struct Desc_82A511A0 {
    char pad0[0x3c];
    void *m3c;
    char pad40[8];
    float m48;
} Desc_82A511A0;

typedef struct Obj_82A511A0 {
    void *a;
    Desc_82A511A0 *desc;
    void *impl;
} Obj_82A511A0;

extern char lbl_83219D50[];
extern void *fn_82A3FF60(void *heap, int size, int flags, int zero);
extern void *fn_82A68C48(void *mem, void *b, void *c, void *d);
extern int fn_82A68C70(void *impl, float value, int zero);
extern void fn_82A68E28(void *impl);
extern void fn_82A4F4E0(void *p);

int fn_82A511A0(Obj_82A511A0 *self, void *a, Desc_82A511A0 *desc, void *b, void *c)
{
    void *m;
    int hr;
    self->desc = desc;
    self->a = a;
    m = fn_82A3FF60(lbl_83219D50, 0x1c, 0x20970005, 0);
    self->impl = m != 0 ? fn_82A68C48(m, b, c, desc->m3c) : 0;
    if (self->impl == 0) {
        hr = 0x8007000e;
    } else {
        hr = fn_82A68C70(self->impl, desc->m48, 0);
        if (hr < 0) {
            void *impl = self->impl;
            if (impl != 0) {
                fn_82A68E28(impl);
                fn_82A4F4E0(impl);
                self->impl = 0;
            }
        }
    }
    return hr;
}
