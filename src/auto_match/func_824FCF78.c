typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Model_824FCF78 {
    char pad0[0xa0];
    float colour[3];          /* 0xa0 */
    char padac[0xc4];
    int dirty;                /* 0x170 */
    char pad174[0x74c];
    char *manager;            /* 0x8c0 */
} Model_824FCF78;

typedef struct Scene_824FCF78 {
    char pad0[0x8c0];
    char *manager;            /* 0x8c0 */
} Scene_824FCF78;

typedef struct Locator_824FCF78 Locator_824FCF78;
typedef struct LocatorVtbl_824FCF78 {
    void *f0[2];
    void (*notify)(Locator_824FCF78 *self, int event, int arg);
} LocatorVtbl_824FCF78;
struct Locator_824FCF78 {
    LocatorVtbl_824FCF78 *vt;
};

typedef struct Champagne_824FCF78 {
    char pad0[0xb3c];
    float rate;               /* 0xb3c */
    char padb40[0x20];
    int source;               /* 0xb60 */
    char padb64[0x4c];
    Model_824FCF78 *model;    /* 0xbb0 */
    float amount;             /* 0xbb4 */
    unsigned char sprayed;    /* 0xbb8 */
    char padbb9[0x7];
    char effect[0x10];        /* 0xbc0 */
} Champagne_824FCF78;

extern const float lbl_821CA45C[];
extern const float lbl_82191130[];
extern const float lbl_821916FC;

void fn_82528948(Model_824FCF78 *model);
void fn_82F50DA8(__vector4 *out, int source, int a, int b);
Locator_824FCF78 *fn_825735B8(char *list, const char *name);
void fn_82536590(void *effect, int arg);
void fn_824FD570(Champagne_824FCF78 *self, int arg);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

void fn_824FCF78(Champagne_824FCF78 *self, int arg)
{
    Model_824FCF78 *model = self->model;

    if (model != 0) {
        float one = lbl_821CA45C[1];
        if (model->colour[0] != one || model->colour[1] != one || model->colour[2] != one) {
            model->colour[0] = one;
            model->colour[1] = one;
            model->colour[2] = one;
            model->dirty = 0;
            fn_82528948(model);
        }
        if (self->sprayed == 0) {
            __vector4 v;
            __vector4 l;
            float speed;
            float amount;
            float limit;

            fn_82F50DA8(&v, self->source, 10, 2);
            l = Length3(v);
            speed = l.vector4_f32[0];
            limit = lbl_82191130[2];
            amount = self->rate * speed + self->amount;
            self->amount = amount;
            if (amount > limit && speed > lbl_821916FC) {
                Locator_824FCF78 *loc = fn_825735B8(self->model->manager + 0x128, "champagnesprayLocator1");
                if (loc != 0)
                    loc->vt->notify(loc, 5, 0);
                fn_82536590(self->effect, 0);
                self->sprayed = 1;
            }
        }
    }
    fn_824FD570(self, arg);
}
