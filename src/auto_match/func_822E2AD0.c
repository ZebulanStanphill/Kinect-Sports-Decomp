typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Model_822E2AD0 {
    void *handle; /* 0x0 */
    char pad4[0x9c - 0x4];
    int active; /* 0x9c */
} Model_822E2AD0;

typedef struct Entity_822E2AD0 {
    char pad0[0x20];
    __vector4 position; /* 0x20 */
    __vector4 rotation; /* 0x30 */
    char pad40[0x118 - 0x40];
    float scale; /* 0x118 */
    char pad11C[0x190 - 0x11c];
    __vector4 velocity; /* 0x190 */
    char pad1A0[0x217c - 0x1a0];
    int value; /* 0x217c */
} Entity_822E2AD0;

typedef struct Pair_822E2AD0 {
    void *first;  /* 0x0 */
    void *second; /* 0x4 */
} Pair_822E2AD0;

typedef struct Settings_822E2AD0 {
    char pad0[0x204];
    int disabled; /* 0x204 */
} Settings_822E2AD0;

typedef struct Flags_822E2AD0 {
    char pad0[0x1d4];
    unsigned char flagA; /* 0x1d4 */
    char pad1D5[0x254 - 0x1d5];
    unsigned char flagB; /* 0x254 */
} Flags_822E2AD0;

typedef struct Context_822E2AD0 {
    char pad0[0x24];
    int notify; /* 0x24 */
    int key;    /* 0x28 */
    int index;  /* 0x2c */
    char pad30[0x78 - 0x30];
    void *pending; /* 0x78 */
    char pad7C[0x118 - 0x7c];
    Flags_822E2AD0 *flags; /* 0x118 */
    char pad11C[0x1c0 - 0x11c];
    Settings_822E2AD0 *settings; /* 0x1c0 */
} Context_822E2AD0;

typedef struct Status_822E2AD0 {
    char pad0[0x14];
    int changed; /* 0x14 */
} Status_822E2AD0;

typedef struct Target_822E2AD0 {
    char pad0[0x7dc];
    Status_822E2AD0 *status; /* 0x7dc */
} Target_822E2AD0;

typedef struct Self_822E2AD0 {
    char pad0[0x10];
    Target_822E2AD0 *target;   /* 0x10 */
    Context_822E2AD0 *context; /* 0x14 */
    char pad18[0x58 - 0x18];
    char entity; /* 0x58 */
} Self_822E2AD0;

extern void fn_822B7340(Context_822E2AD0 *context);
extern void fn_824D2AE8(Pair_822E2AD0 *out, void *src);
extern void fn_825275B0(void *handle);
extern void fn_822315A0(void *p);
extern void fn_8237B150(Entity_822E2AD0 *entity, Context_822E2AD0 *context, float dt);
extern void fn_82377388(Target_822E2AD0 *target, __vector4 a, __vector4 b, __vector4 c, float t, int value,
                        int index, int key, float u);

void fn_822E2AD0(Self_822E2AD0 *self, float dt)
{
    Pair_822E2AD0 pair;
    Model_822E2AD0 *model;
    Context_822E2AD0 *context;
    Target_822E2AD0 *target;
    Entity_822E2AD0 *entity;

    if (self->context->settings->disabled == 0 && self->context->pending != 0) {
        fn_822B7340(self->context);
    }
    fn_824D2AE8(&pair, &self->entity);
    model = (Model_822E2AD0 *)pair.first;
    fn_825275B0(model->handle);
    model->active = 0;
    if (pair.second != 0) {
        fn_822315A0(pair.second);
    }
    self->context->flags->flagA = 0;
    self->context->flags->flagB = 0;
    context = self->context;
    fn_824D2AE8(&pair, &self->entity);
    entity = (Entity_822E2AD0 *)pair.first;
    target = self->target;
    fn_8237B150(entity, context, dt);
    fn_82377388(target, entity->position, entity->rotation, entity->velocity, entity->scale, entity->value,
                context->index, context->key, dt);
    if (context->notify != 0) {
        target->status->changed = 1;
    }
    if (pair.second != 0) {
        fn_822315A0(pair.second);
    }
}
