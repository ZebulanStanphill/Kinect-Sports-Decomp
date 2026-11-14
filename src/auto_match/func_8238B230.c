typedef struct Inner_8238B230 {
    char pad0[0xc];
    int busy;                   /* 0x0c */
} Inner_8238B230;

typedef struct Mid_8238B230 {
    char pad0[0x18];
    Inner_8238B230 *inner;      /* 0x18 */
} Mid_8238B230;

typedef struct Owner_8238B230 {
    char pad0[0xd4];
    Mid_8238B230 *mid;          /* 0xd4 */
    char padd8[0x204 - 0xd8];
    unsigned int mode;          /* 0x204 */
} Owner_8238B230;

typedef struct Timer_8238B230 {
    char pad0[8];
    Owner_8238B230 *owner;      /* 0x08 */
    float remaining;            /* 0x0c */
} Timer_8238B230;

extern void fn_82359698(Owner_8238B230 *owner, int state);

void fn_8238B230(Timer_8238B230 *self, float dt)
{
    Owner_8238B230 *owner = self->owner;

    if (owner->mid->inner->busy != 0)
        return;
    self->remaining -= dt;
    if (self->remaining > 0.0f)
        return;
    switch (owner->mode) {
    case 0:
        fn_82359698(owner, 2);
        break;
    case 1:
        fn_82359698(owner, 0x10);
        break;
    case 2:
        fn_82359698(owner, 0x11);
        break;
    }
}
