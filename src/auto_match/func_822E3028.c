typedef struct Target_822E3028 {
    char pad[0x10c];
    float value;
} Target_822E3028;

typedef struct Obj_822E3028 {
    char pad0[0x14];
    Target_822E3028 *target;
    char pad18[0x44 - 0x18];
    float value;
} Obj_822E3028;

void fn_822E3028(Obj_822E3028 *self)
{
    if (self->value <= 0.0f) {
        return;
    }
    self->target->value = self->value;
}
