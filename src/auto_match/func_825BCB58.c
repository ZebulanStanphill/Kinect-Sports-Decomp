// Creates a model at the origin (function-local static zero position) for the owner, with unit
// scale, gives it a freshly constructed 0x1c0-byte controller whose embedded node (+0x98) is set
// up for the owner and placed with the identity-like matrix lbl_8329EAD0, then sets five flag
// bits on both of the model's parts and returns the model.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
void __stvewx(__vector4 v, void *base, int offset);
__vector4 __VMXGetReg(int n);

typedef struct ModelDesc_825BCB58 {
    char pad0[0x4b];
    char name[0x39];          /* 0x4b */
    int owner;                /* 0x84 */
    char pad88[0x10];
    float position[3];        /* 0x98 */
    char padA4[0xc];
    float scaleX;             /* 0xb0 */
    float scaleY;             /* 0xb4 */
    char padB8[0x508];
} ModelDesc_825BCB58;

typedef struct Parts_825BCB58 {
    char pad0[0x10];
    unsigned int flags[2];      /* 0x10 */
} Parts_825BCB58;

typedef struct Node_825BCB58 {
    char pad0[0x128];
} Node_825BCB58;

typedef struct Controller_825BCB58 {
    char pad0[0x98];
    Node_825BCB58 node;         /* 0x98 */
} Controller_825BCB58;

typedef struct Model_825BCB58 {
    char pad0[0x1d0];
    Parts_825BCB58 parts;       /* 0x1d0 */
    char pad1e8[0x6d8];
    Controller_825BCB58 *controller; /* 0x8c0 */
    char pad8c4[0x28c];
    int active;                 /* 0xb50 */
} Model_825BCB58;

extern unsigned int lbl_83297920;
extern __vector4 lbl_83297910;
extern const float lbl_821CA45C[];
extern char lbl_8329EAD0[];

void fn_82529508(ModelDesc_825BCB58 *desc);
void *fn_82587AC0(const char *name);
Model_825BCB58 *fn_82529A38(void *model, ModelDesc_825BCB58 *desc, int flags);
void *fn_8265C9E0(unsigned int size);
Controller_825BCB58 *fn_825BC9F8(void *mem);
void fn_82555470(Controller_825BCB58 *controller, Node_825BCB58 *node, int source, int a, int b, int owner);
void fn_82555FF8(Node_825BCB58 *node, const void *matrix, int a, int b);
void fn_82556448(Node_825BCB58 *node, const void *matrix);
void fn_82556520(Node_825BCB58 *node);

static __forceinline void StoreFloat3(float *dst, const __vector4 *p)
{
    __vector4 x = __vspltw(*p, 0);
    __vector4 y = __vspltw(*p, 1);
    __vector4 z = __vspltw(*p, 2);
    __stvewx(x, dst, 0);
    __stvewx(y, dst, 4);
    __stvewx(z, dst, 8);
}

static __forceinline const __vector4 *Origin(void)
{
    if ((lbl_83297920 & 1) == 0) {
        lbl_83297920 |= 1;
        lbl_83297910 = __VMXGetReg(77);
    }
    return &lbl_83297910;
}

static __forceinline void SetPartFlags(Model_825BCB58 *model, unsigned int mask)
{
    int i;

    Parts_825BCB58 *p = &model->parts;
    for (i = 0; i < 2; i++) {
        p->flags[i] |= mask;
    }
}

Model_825BCB58 *fn_825BCB58(int owner, int source)
{
    ModelDesc_825BCB58 desc;
    Model_825BCB58 *model;
    Controller_825BCB58 *controller;
    void *mem;
    void *src;
    Node_825BCB58 *node;

    fn_82529508(&desc);
    StoreFloat3(desc.position, Origin());
    desc.owner = owner;
    desc.scaleX = lbl_821CA45C[1];
    desc.scaleY = lbl_821CA45C[1];
    src = fn_82587AC0(desc.name);
    model = fn_82529A38(src, &desc, 0);
    model->active = 1;
    mem = fn_8265C9E0(0x1c0);
    if (mem != 0) {
        controller = fn_825BC9F8(mem);
    } else {
        controller = 0;
    }
    model->controller = controller;
    node = &controller->node;
    fn_82555470(controller, node, source, 0, 0, owner);
    fn_82555FF8(node, lbl_8329EAD0, 0, 0);
    fn_82556448(node, lbl_8329EAD0);
    fn_82556520(node);
    SetPartFlags(model, 0x100);
    SetPartFlags(model, 0x400000);
    SetPartFlags(model, 0x200000);
    SetPartFlags(model, 0x40000);
    SetPartFlags(model, 0x20000);
    return model;
}
