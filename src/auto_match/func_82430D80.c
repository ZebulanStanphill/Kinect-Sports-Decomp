typedef struct State_82430D80 {
    int maxValue;            /* +0x0 */
    char pad4[0x60];
    unsigned char flag64;    /* +0x64 */
    char pad65[3];
    int mode;                /* +0x68 */
    float timer;             /* +0x6c */
    char pad70[0x60];
    unsigned char fd0;       /* +0xd0 */
    char padd1[3];
    float fd4;               /* +0xd4 */
} State_82430D80;

typedef struct Inner_82430D80 { char pad[0xc]; void *target; } Inner_82430D80;
typedef struct Owner_82430D80 { char pad[0xd4]; Inner_82430D80 *inner; } Owner_82430D80;

typedef struct Obj_82430D80 {
    char pad0[0x240];
    Owner_82430D80 *owner;   /* +0x240 */
    State_82430D80 *state;   /* +0x244 */
} Obj_82430D80;

extern void fn_8229F618(void *target);

void fn_82430D80(Obj_82430D80 *self, int mode, int value)
{
    int m;
    if (mode == self->state->mode)
        return;
    self->state->timer = 0.0f;
    self->state->mode = mode;
    switch (mode) {
    case 1:
        self->state->fd4 = 0.0f;
        break;
    case 5:
        fn_8229F618(self->owner->inner->target);
        break;
    case 7:
        if (self->state->flag64 != 0)
            self->state->mode = 8;
        break;
    }
    self->state->fd0 = 0;
    m = self->state->maxValue;
    if (m < value)
        m = value;
    self->state->maxValue = m;
}
