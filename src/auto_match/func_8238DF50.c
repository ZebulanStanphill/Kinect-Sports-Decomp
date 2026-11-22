typedef struct Fader_8238DF50 {
    float period;    /* 0x0 */
    float frequency; /* 0x4 */
    float elapsed;   /* 0x8 */
    float value;     /* 0xc */
    int mode;        /* 0x10 */
} Fader_8238DF50;

typedef struct Owner_8238DF50 {
    char pad0[0x9a0];
    Fader_8238DF50 fader; /* 0x9a0 */
} Owner_8238DF50;

typedef struct Waiter_8238DF50 {
    char pad0[0x8];
    Owner_8238DF50 *owner; /* 0x8 */
    char padC[0x1c];
    int waiting; /* 0x28 */
    int next;    /* 0x2c */
} Waiter_8238DF50;

extern int fn_82278B40(Fader_8238DF50 *fader);
extern void fn_82359698(Owner_8238DF50 *owner, int next);

void fn_8238DF50(Waiter_8238DF50 *self)
{
    Owner_8238DF50 *owner = self->owner;

    if (self->waiting != 0 && owner->fader.value >= 0.999f && owner->fader.value <= 1.001f) {
        fn_82278B40(&owner->fader);
        self->waiting = 0;
    }
    if (self->waiting == 0) {
        fn_82359698(owner, self->next);
    }
}
