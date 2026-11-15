extern void fn_827F6370(void *, float);
extern void fn_827F5708(void *, float);
extern const float lbl_8218E8E8;

typedef struct State_8250EF10 {
    char pad000[0x2fc];
    int enabled; /* 0x2fc */
    char pad300[0x1ac];
    int disabled; /* 0x4ac */
    char pad4b0[0x40];
    char animation[0xf0]; /* 0x4f0 */
    void *first;          /* 0x5e0 */
    void *second;         /* 0x5e4 */
} State_8250EF10;

typedef struct Object_8250EF10 {
    char pad000[0x14];
    State_8250EF10 *state; /* 0x14 */
} Object_8250EF10;

void fn_8250EF10(Object_8250EF10 *self, float value, float amount)
{
    int enabled;
    fn_827F6370(self->state->first, value);
    fn_827F6370(self->state->second, value);
    fn_827F5708(self->state->animation, amount);
    enabled = amount < lbl_8218E8E8;
    self->state->enabled = enabled;
    self->state->disabled = enabled == 0;
}
