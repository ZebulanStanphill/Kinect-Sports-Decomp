typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Body_8262D6E8 {
    char pad0[0x40];
    __vector4 velocity; /* 0x40 */
    char pad50[0x54];
    int contacts; /* 0xa4 */
    char pada8[0x28];
    float forces[5]; /* 0xd0 */
    char pade4[0xa0];
    float height; /* 0x184 */
} Body_8262D6E8;

typedef struct Condition_8262D6E8 {
    char pad0[0x8];
    int type; /* 0x08 */
} Condition_8262D6E8;

extern const float lbl_82191EA0[0xd0];

int fn_8262D6E8(Body_8262D6E8 *self, const Condition_8262D6E8 *condition)
{
    __vector4 velocity;

    if (condition->type == 5) {
        return self->height > 0.0f;
    }
    switch ((unsigned int)condition->type) {
    case 0:
        velocity = self->velocity;
        return velocity.vector4_f32[1] >= 0.0f;
    case 1:
        velocity = self->velocity;
        if (velocity.vector4_f32[1] < lbl_82191EA0[3]) {
            return 0;
        }
        return 1;
    case 2:
        return self->forces[0] != 0.0f || self->forces[1] != 0.0f || self->forces[2] != 0.0f ||
               self->forces[3] != 0.0f || self->forces[4] != 0.0f;
    case 3:
        return self->contacts < 3;
    case 4:
        return self->contacts == 0;
    }
    return 0;
}
