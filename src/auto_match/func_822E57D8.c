typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Vec3_822E57D8 {
    float x, y, z;
} Vec3_822E57D8;

typedef struct Group_822E57D8 {
    void **maps;
    char pad4[0xc];
    int current;
} Group_822E57D8;
typedef struct Groups_822E57D8 { Group_822E57D8 **items; } Groups_822E57D8;

typedef struct Source_822E57D8 Source_822E57D8;
typedef struct SourceVtbl_822E57D8 {
    void *slots[7];
    unsigned int (*GetKey)(Source_822E57D8 *self);
} SourceVtbl_822E57D8;
struct Source_822E57D8 { SourceVtbl_822E57D8 *vt; };

typedef struct Ctx_822E57D8 {
    char pad0[8];
    Groups_822E57D8 *groups;
    char padc[0x2e0 - 0xc];
    Source_822E57D8 *source;
} Ctx_822E57D8;

typedef struct Thing_822E57D8 { char pad0[0x80]; __vector4 pos; } Thing_822E57D8;
typedef struct Owner_822E57D8 { char pad0[0x50]; char sub[1]; } Owner_822E57D8;

typedef struct Self_822E57D8 {
    char pad0[0x2c];
    int side;
    char pad30[0x50];
    __vector4 pos;
    char pad90[0x30];
    char fc0[0x54];
    Owner_822E57D8 *owner;
    char pad118[0x1bc - 0x118];
    Ctx_822E57D8 *ctx;
    char pad1c0[0x2a0 - 0x1c0];
    float angle;
    int pad2a4;
    int settled;
} Self_822E57D8;

extern float lbl_831D9208;
extern unsigned int fn_822ABA88(void *map, unsigned int key);
extern float fn_8255A070(__vector4 v);
extern int fn_8255A780(float a, float b, float tolerance);
extern int fn_822E58E8(Self_822E57D8 *self);
extern void fn_822C6B30(void *sub, void *a, void *b, Vec3_822E57D8 v);

void fn_822E57D8(Self_822E57D8 *self)
{
    Ctx_822E57D8 *ctx = self->ctx;
    __vector4 origin = self->pos;
    Group_822E57D8 *group = ctx->groups->items[self->side == 0];
    unsigned int key = ctx->source->vt->GetKey(ctx->source);
    Thing_822E57D8 *thing = (Thing_822E57D8 *)fn_822ABA88(group->maps[group->current], key);
    float target = fn_8255A070(__vsubfp(thing->pos, origin));

    if (!fn_8255A780(self->angle, target, lbl_831D9208)) {
        self->angle = target;
        self->settled = 0;
    }
    if (self->settled == 0) {
        if (fn_822E58E8(self)) {
            self->settled = 1;
        } else {
            Vec3_822E57D8 v;
            v.y = self->angle;
            v.x = 0.0f;
            v.z = 0.0f;
            fn_822C6B30(self->owner->sub, &self->pos, self->fc0, v);
        }
    }
}
