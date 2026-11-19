typedef struct Effect_825C1498 {
    char data[0xc];
} Effect_825C1498;

typedef struct Owner_825C1498 {
    char pad0[0x10];
    float timers[3];            /* 0x10 */
    Effect_825C1498 effects[3]; /* 0x1c */
    int active[3];              /* 0x40 */
    int target;                 /* 0x4c */
    float cooldown;             /* 0x50 */
} Owner_825C1498;

extern float lbl_831D4558[0x4a];

extern int fn_825529B0(Effect_825C1498 *effect);
extern void fn_82552B50(Effect_825C1498 *effect, int stop);

void fn_825C1498(Owner_825C1498 *self, float time, int keepPlaying)
{
    int i;

    for (i = 0; i < 3; i++) {
        if (self->active[i] != 0) {
            if (keepPlaying != 0 || fn_825529B0(&self->effects[i]) == 0) {
                fn_82552B50(&self->effects[i], 1);
                self->active[i] = 0;
            }
        }
        if (self->timers[i] > 0.0f) {
            self->timers[i] -= lbl_831D4558[0x3c] * time;
        }
    }
    if (self->cooldown > 0.0f) {
        if (self->cooldown > time) {
            self->cooldown -= time;
        } else {
            self->cooldown = 0.0f;
            self->target = -1;
        }
    }
}
