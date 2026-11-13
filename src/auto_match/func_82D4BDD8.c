/* hkpMoppBvTreeShape::castRayBundle: raises the shape-key level of the four outputs, builds
   a temporary hkpMoppCode on the (16-byte realigned) stack from the shape's code info copy
   and MOPP data, runs the ray bundle MOPP query (fn_82DCDB88) into the result comparison,
   then lowers the level again and clears the key of every ray that hit. Wrapped in the
   "TtrcBundleMopp" timer scope. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vspltisw(int value);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);
unsigned __int64 __mftb(void);

typedef struct ProfTls_82D4BDD8 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D4BDD8;

typedef struct MoppCode_82D4BDD8 {
    char header[0x10];
    __vector4 offset;               /* 0x10 m_info.m_offset */
    const unsigned char *data;      /* 0x20 m_data */
    int size;                       /* 0x24 */
    int capacity;                   /* 0x28 */
    int pad2c;
} MoppCode_82D4BDD8;

typedef struct Shape_82D4BDD8 {
    char pad0[0x18];
    const unsigned char *moppData;  /* 0x18 */
    int moppDataSize;               /* 0x1c */
    __vector4 codeInfoCopy;         /* 0x20 */
    char pad30[4];
    char *childShape;               /* 0x34 */
} Shape_82D4BDD8;

typedef struct RayOutput_82D4BDD8 {
    char pad0[0x20];
    unsigned int shapeKeys[8];      /* 0x20 */
    int shapeKeyIndex;              /* 0x40 */
    char pad44[0xc];
} RayOutput_82D4BDD8;

typedef struct BundleOutput_82D4BDD8 {
    RayOutput_82D4BDD8 outputs[4];
} BundleOutput_82D4BDD8;

typedef struct VirtualMachine_82D4BDD8 {
    char data[0xe0];
} VirtualMachine_82D4BDD8;

extern unsigned int lbl_8323B4A0;
extern const __vector4 lbl_8323B230[16];
extern const int lbl_82132CD0[4];
void *KeTlsGetValue(unsigned int index);
extern __vector4 *fn_82DCDB88(__vector4 *result, VirtualMachine_82D4BDD8 *vm, const void *container,
                              const MoppCode_82D4BDD8 *code, const void *input, BundleOutput_82D4BDD8 *output,
                              const __vector4 *mask);

static __forceinline void Timer(const char *name)
{
    ProfTls_82D4BDD8 *t = (ProfTls_82D4BDD8 *)KeTlsGetValue(lbl_8323B4A0);
    void **p = t->cur;
    if (p < t->end) {
        p[0] = (void *)name;
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}

static __forceinline int AnyIsSet(__vector4 c, int mask)
{
    unsigned int cr;
    __vcmpequwR(__vand(c, lbl_8323B230[mask]), __vspltisw(0), &cr);
    return (int)(~cr & 0x80);
}

static __forceinline void ChangeLevel(RayOutput_82D4BDD8 *o, int delta)
{
    o->shapeKeyIndex += delta;
}

static __forceinline void SetKey(RayOutput_82D4BDD8 *o, unsigned int key)
{
    o->shapeKeys[o->shapeKeyIndex] = key;
}

__vector4 *fn_82D4BDD8(__vector4 *result, const Shape_82D4BDD8 *self, const void *input,
                       BundleOutput_82D4BDD8 *output, const __vector4 *mask)
{
    char buffer[0x40];
    MoppCode_82D4BDD8 *code;
    VirtualMachine_82D4BDD8 vm;
    int i;

    Timer("TtrcBundleMopp");
    for (i = 0; i < 4; i++)
        ChangeLevel(&output->outputs[i], 1);

    code = (MoppCode_82D4BDD8 *)(((unsigned int)buffer + 15) & ~15);
    code->offset = self->codeInfoCopy;
    code->data = self->moppData;
    code->size = self->moppDataSize;
    code->capacity = self->moppDataSize;

    fn_82DCDB88(result, &vm, self->childShape ? self->childShape + 0x10 : 0, code, input, output, mask);

    for (i = 0; i < 4; i++) {
        ChangeLevel(&output->outputs[i], -1);
        if (AnyIsSet(*result, lbl_82132CD0[i]))
            SetKey(&output->outputs[i], 0);
    }

    Timer("Et");
    return result;
}
