// Creates the avatar cursor's dot model: fills a model description (position from one of two vectors,
// scale, owner fields, the "ui_avatarcursordotmodel" resource id), creates the instance from the named
// model and, when its colour differs from the cursor's, sets all three components and refreshes it.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct ModelDesc_822659E0 {
    char pad0[0x4b];
    char name[0x39];          /* 0x4b */
    int owner;                /* 0x84 */
    char pad88[0x10];
    float position[3];        /* 0x98 */
    float rotation;           /* 0xa4 */
    float scale;              /* 0xa8 */
    float tilt;               /* 0xac */
    char padb0[0x24];
    int resource;             /* 0xd4 */
    char padd8[0x4];
    int layer;                /* 0xdc */
    char pade0[0x4];
    int flags;                /* 0xe4 */
    char pade8[0x3f0];
    int parent;               /* 0x4d8 */
    char pad4dc[0xe4];
} ModelDesc_822659E0;

typedef struct Model_822659E0 {
    char pad0[0xa0];
    float colour[3];          /* 0xa0 */
    char padac[0xc4];
    int dirty;                /* 0x170 */
} Model_822659E0;

typedef struct Cursor_822659E0 {
    char pad0[0x48];
    int layer;                /* 0x48 */
    char pad4c[0x4];
    __vector4 position;       /* 0x50 */
    float scale;              /* 0x60 */
    char pad64[0x1c];
    __vector4 altPosition;    /* 0x80 */
    char pad90[0x10];
    unsigned int mode;        /* 0xa0 */
    char pada4[0x30];
    int flags;                /* 0xd4 */
    char padd8[0xc];
    Model_822659E0 *model;    /* 0xe4 */
    char pade8[0x10];
    float colour;             /* 0xf8 */
    char padfc[0x4];
    int owner;                /* 0x100 */
} Cursor_822659E0;

void fn_82520158(const char *name, void *id, int flags);
void fn_82529508(ModelDesc_822659E0 *desc);
void *fn_82587AC0(const char *name);
Model_822659E0 *fn_82529A38(void *model, ModelDesc_822659E0 *desc, int flags);
void fn_82528948(Model_822659E0 *model);

static __forceinline void StoreFloat3(float *dst, __vector4 v)
{
    __vector4 x = __vspltw(v, 0);
    __vector4 y = __vspltw(v, 1);
    __vector4 z = __vspltw(v, 2);
    __stvewx(x, dst, 0);
    __stvewx(y, dst, 4);
    __stvewx(z, dst, 8);
}

void fn_822659E0(Cursor_822659E0 *self)
{
    int id[2];
    ModelDesc_822659E0 desc;
    Model_822659E0 *model;
    float scale;
    float colour;

    fn_82520158("ui_avatarcursordotmodel", id, 0);
    scale = self->scale;
    fn_82529508(&desc);
    desc.owner = self->owner;
    if (self->mode & 1) {
        StoreFloat3(desc.position, self->altPosition);
    } else {
        StoreFloat3(desc.position, self->position);
    }
    desc.scale = scale;
    desc.parent = 0;
    desc.flags = self->flags;
    desc.layer = self->layer;
    desc.rotation = 0.0f;
    desc.resource = id[0];
    desc.tilt = 0.0f;
    {
        void *source = fn_82587AC0(desc.name);
        model = fn_82529A38(source, &desc, 0);
    }
    self->model = model;
    colour = self->colour;
    if (model->colour[0] != colour || model->colour[1] != colour || model->colour[2] != colour) {
        model->colour[0] = colour;
        model->dirty = 0;
        model->colour[1] = colour;
        model->colour[2] = colour;
        fn_82528948(model);
    }
}
