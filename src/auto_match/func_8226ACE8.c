typedef struct Obj_8226ACE8 {
    char pad0[0x24];
    float rate;     /* 0x24 */
    char pad28[8];
    float value;    /* 0x30 */
} Obj_8226ACE8;

/* Decays value by rate * dt, clamped at zero. */
void fn_8226ACE8(Obj_8226ACE8 *self, float dt)
{
    self->value -= self->rate * dt;
    if (self->value < 0.0f)
        self->value = 0.0f;
}
