typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Float3_8241AED8 {
    float x;
    float y;
    float z;
} Float3_8241AED8;

typedef struct Body_8241AED8 {
    char pad0[0xe8];
    unsigned char motionType; /* 0xE8 */
} Body_8241AED8;

typedef struct Ctx_8241AED8 {
    char pad0[0x1d0];
    int dirty; /* 0x1D0 */
    char pad1d4[0x7c0 - 0x1d4];
    Body_8241AED8 *body; /* 0x7C0 */
} Ctx_8241AED8;

typedef struct Item_8241AED8 {
    char pad0[0x10];
    Ctx_8241AED8 *ctx; /* 0x10 */
    char pad14[0xc];
    __vector4 position; /* 0x20 */
    int state;          /* 0x30 */
    char pad34[0xc];
    int timer; /* 0x40 */
} Item_8241AED8;

typedef struct Layout_8241AED8 {
    char pad0[0x1e0];
    unsigned int count; /* 0x1E0 */
} Layout_8241AED8;

struct Source_8241AED8;

typedef struct SourceVt_8241AED8 {
    void *pad0[3];
    Layout_8241AED8 *(*get)(struct Source_8241AED8 *self, char *entry); /* 0x0C */
} SourceVt_8241AED8;

typedef struct Source_8241AED8 {
    SourceVt_8241AED8 *vt;
} Source_8241AED8;

typedef struct Rack_8241AED8 {
    int unk0;                /* 0x00 */
    Source_8241AED8 *source; /* 0x04 */
    char *entries;           /* 0x08 */
    char padc[0xc];
    int index; /* 0x18 */
    char pad1c[0x6c];
    Item_8241AED8 **begin; /* 0x88 */
    Item_8241AED8 **end;   /* 0x8C */
    char pad90[0x110];
    float height; /* 0x1A0 */
} Rack_8241AED8;

extern const Float3_8241AED8 lbl_821CA1A0;

extern void fn_82417B28(Rack_8241AED8 *self, Layout_8241AED8 *layout);
extern void fn_8253C548(Ctx_8241AED8 *ctx, __vector4 *position, const Float3_8241AED8 *angles);
extern void fn_82D8B6C8(Body_8241AED8 *body, int motionType, int activation, int updateFilter);

void fn_8241AED8(Rack_8241AED8 *self)
{
    Layout_8241AED8 *layout;
    Item_8241AED8 **it;
    unsigned int i;
    Item_8241AED8 *item;
    Body_8241AED8 *body;
    char *entry;

    entry = self->entries + self->index * 0x1ac;
    layout = self->source->vt->get(self->source, entry);
    fn_82417B28(self, layout);
    i = 0;
    for (it = self->begin; it != self->end; it++) {
        if (i >= layout->count) {
            break;
        }
        item = *it;
        {
            __vector4 position = item->position;

            position.vector4_f32[1] += self->height;
            fn_8253C548(item->ctx, &position, &lbl_821CA1A0);
        }
        item->ctx->dirty = 0;
        body = item->ctx->body;
        if (body->motionType == 4) {
            fn_82D8B6C8(body, 1, 1, 0);
        }
        item->state = 0;
        item->timer = 0;
        i++;
    }
}
