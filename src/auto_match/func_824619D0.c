/* Creates the model of the given slot: copies the slot's description resource into a fresh buffer, places it at
   the slot's position, names the owner, instantiates the model and flags its two parts. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct ModelDesc_824619D0 {
    char pad0[0x4b];
    char name[0x39];          /* 0x4b */
    int owner;                /* 0x84 */
    char pad88[0x10];
    float position[3];        /* 0x98 */
    float rotation;           /* 0xa4 */
    float scale;              /* 0xa8 */
    float tilt;               /* 0xac */
    float alpha;              /* 0xb0 */
    char padb4[0x508];
    int unk5bc;               /* 0x5bc */
    int slot;                 /* 0x5c0 */
} ModelDesc_824619D0;

typedef struct Parts_824619D0 {
    char pad0[0x10];
    unsigned int flags[2];      /* 0x10 */
} Parts_824619D0;

typedef struct Model_824619D0 {
    char pad0[0x1d0];
    Parts_824619D0 parts;       /* 0x1d0 */
} Model_824619D0;

typedef struct Handle_824619D0 {
    int value;
} Handle_824619D0;

typedef struct Self_824619D0 {
    char pad0[0x4];
    int owner;                    /* 0x004 */
    char pad8[0x1ac];
    Handle_824619D0 resource;     /* 0x1b4 */
    char pad1b8[0x18];
    Model_824619D0 *models[1];    /* 0x1d0 */
} Self_824619D0;

void *fn_8249ABC0(void);
int fn_8249B598(void *mgr, int slot);
int fn_82F4EBC0(unsigned char id);
__vector4 *fn_82F4EEC0(__vector4 *out, int value);
void fn_82461CE0(__vector4 *out, __vector4 v);
void *fn_8251F720(Handle_824619D0 *handle, int flags);
unsigned int fn_8251FBA8(void *data);
void *fn_8265CA60(unsigned int size);
void fn_82A1DD38(void *dst, const void *src, unsigned int size);
void *fn_82587AC0(const char *name);
Model_824619D0 *fn_82529A38(void *model, ModelDesc_824619D0 *desc, int flags);
void fn_8265CAA0(void *p);
void fn_8251FA58(void *data);

extern const float lbl_82193E50;
extern const float lbl_821CA45C[];

static __forceinline void StoreFloat3(float *dst, const __vector4 *p)
{
    __vector4 x = __vspltw(*p, 0);
    __vector4 y = __vspltw(*p, 1);
    __vector4 z = __vspltw(*p, 2);
    __stvewx(x, dst, 0);
    __stvewx(y, dst, 4);
    __stvewx(z, dst, 8);
}

void fn_824619D0(Self_824619D0 *self, int slot)
{
    Handle_824619D0 *resource = &self->resource;
    __vector4 tmp;
    __vector4 position;
    ModelDesc_824619D0 *desc;
    void *data;
    Model_824619D0 *model;
    Parts_824619D0 *parts;
    int i;

    int ok = 0;
    if (resource != 0) ok = resource->value != 0;
    if (ok) {
        fn_82461CE0(&position, *fn_82F4EEC0(&tmp, fn_82F4EBC0(fn_8249B598(fn_8249ABC0(), slot))));
        desc = 0;
        data = fn_8251F720(resource, 0);
        if (data != 0) {
            unsigned int size = fn_8251FBA8(data);
            desc = (ModelDesc_824619D0 *)fn_8265CA60(size);
            fn_82A1DD38(desc, data, size);
        }
        StoreFloat3(desc->position, &position);
        desc->rotation = 0.0f;
        desc->tilt = 0.0f;
        desc->scale = 3.14159274f;
        desc->alpha = lbl_821CA45C[1];
        desc->owner = self->owner;
        desc->slot = slot;
        desc->unk5bc = 0;
        {
            void *source = fn_82587AC0(desc->name);
            model = fn_82529A38(source, desc, 0);
        }
        self->models[slot] = model;
        parts = &model->parts;
        for (i = 0; i < 2; i++) {
            parts->flags[i] |= 8;
        }
        fn_8265CAA0(desc);
        if (data != 0) {
            fn_8251FA58(data);
        }
    }
}
