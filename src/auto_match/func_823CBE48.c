typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

typedef struct Target_823CBE48 {
    void *value; /* 0x00 */
    char pad04[0x1c - 0x04];
    struct Link_823CBE48 *link; /* 0x1c */
} Target_823CBE48;

typedef struct Link_823CBE48 {
    char pad00[0x40];
    void *value; /* 0x40 */
} Link_823CBE48;

typedef struct Owner_823CBE48 {
    char pad00[0x94];
    int target; /* 0x94 */
} Owner_823CBE48;

typedef struct Player_823CBE48 {
    char pad000[0x240];
    Owner_823CBE48 *owner; /* 0x240 */
    char pad244[0x290 - 0x244];
    int state; /* 0x290 */
    char pad294[0x3a0 - 0x294];
    __vector4 start; /* 0x3a0 */
    __vector4 last;  /* 0x3b0 */
    int started;     /* 0x3c0 */
    int linked;      /* 0x3c4 */
    char pad3c8[0x3d0 - 0x3c8];
    __vector4 target; /* 0x3d0 */
} Player_823CBE48;

void fn_823CBE48(Player_823CBE48 *self, __vector4 position)
{
    Target_823CBE48 *target;
    Link_823CBE48 *link;
    __vector4 dot;

    if (self->state == 0x18) {
        return;
    }
    if (self->linked == 0) {
        if (self->owner->target != 0) {
            target = (Target_823CBE48 *)self->owner->target;
            link = target->link;
            if (link != 0 && link->value == 0) {
                link->value = target->value;
            }
        }
        self->linked = 1;
    }
    if (position.vector4_f32[1] > 1.6f) {
        return;
    }
    if (self->started == 0) {
        self->started = 1;
        self->start = position;
        self->last = position;
    }
    dot = __vmsum3fp(__vsubfp(self->start, self->target), __vsubfp(position, self->last));
    if (dot.vector4_f32[0] > 0.0f) {
        self->last = position;
    }
}
