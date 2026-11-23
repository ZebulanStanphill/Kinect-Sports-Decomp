typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmsum4fp(__vector4 a, __vector4 b);

typedef struct Info_822E1680 {
    char pad0[0x54];
    unsigned int kind; /* 0x54 */
} Info_822E1680;

typedef struct Unit_822E1680 {
    char pad0[0x90];
    __vector4 forward; /* 0x90 */
} Unit_822E1680;

typedef struct Self_822E1680 {
    char pad0[0x10];
    Info_822E1680 *info; /* 0x10 */
    Unit_822E1680 *unit; /* 0x14 */
    char pad18[0x4c - 0x18];
    float distance; /* 0x4c */
} Self_822E1680;

extern int fn_822CF008(Unit_822E1680 *unit, float range);
extern void fn_822CDCF8(Unit_822E1680 *unit, __vector4 *position, __vector4 *orientation);

int fn_822E1680(Self_822E1680 *self)
{
    Unit_822E1680 *unit;
    __vector4 position;
    __vector4 orientation;

    if (self->distance < 0.0f) {
        if (self->info->kind == 11) {
            if (fn_822CF008(self->unit, 0.05f) != 0) {
                unit = self->unit;
                fn_822CDCF8(unit, &position, &orientation);
                orientation = __vmsum4fp(orientation, unit->forward);
                if (orientation.vector4_f32[0] >= 0.95f) {
                    return 1;
                }
            }
        } else if (fn_822CF008(self->unit, 1.0f) != 0 || self->info->kind == 12 || self->info->kind == 15) {
            return 1;
        }
    }
    return 0;
}
