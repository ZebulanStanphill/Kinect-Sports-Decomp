typedef struct Vec3_822E5710 {
    float x, y, z;
} Vec3_822E5710;

typedef struct Target_822E5710 { char pad0[0x14]; float angle; } Target_822E5710;
typedef struct Targets_822E5710 {
    Target_822E5710 **items;
    char pad4[0xc];
    int current;
} Targets_822E5710;
typedef struct Owner_822E5710 { char pad0[0x50]; char sub[1]; } Owner_822E5710;

typedef struct Self_822E5710 {
    char pad0[0x1c];
    Targets_822E5710 *targets;
    char pad20[0x60];
    char f80[0x40];
    char fc0[0x54];
    Owner_822E5710 *owner;
    char pad118[0x2a0 - 0x118];
    float angle;
    int pad2a4;
    int settled;
} Self_822E5710;

extern float lbl_831D9208;
extern int fn_8255A780(float a, float b, float tolerance);
extern int fn_822E58E8(Self_822E5710 *self);
extern void fn_822C6B30(void *sub, void *a, void *b, Vec3_822E5710 v);

void fn_822E5710(Self_822E5710 *self)
{
    float target = self->targets->items[self->targets->current]->angle;

    if (!fn_8255A780(self->angle, target, lbl_831D9208)) {
        self->angle = target;
        self->settled = 0;
    }
    if (self->settled == 0) {
        if (fn_822E58E8(self)) {
            self->settled = 1;
        } else {
            Vec3_822E5710 v;
            v.y = self->angle;
            v.x = 0.0f;
            v.z = 0.0f;
            fn_822C6B30(self->owner->sub, self->f80, self->fc0, v);
        }
    }
}
