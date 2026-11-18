typedef struct Desc_82811298 {
    unsigned int type; /* 0x0 */
} Desc_82811298;

typedef struct State_82811298 {
    int enabled;      /* 0x0 */
    int mask;         /* 0x4 */
    int x8;           /* 0x8 */
    int xc;           /* 0xc */
    unsigned int arg; /* 0x10 */
    int flags;        /* 0x14 */
} State_82811298;

void fn_82811298(State_82811298 *self, const Desc_82811298 *desc, unsigned int arg)
{
    self->arg = arg;
    self->enabled = 0;
    self->mask = 0;
    self->x8 = 0;
    self->xc = 0;
    self->flags = 0;
    switch (desc->type) {
    case 0:
        self->enabled = 0;
        break;
    case 1:
        self->enabled = 1;
        self->mask = -1;
        self->flags = 0x404;
        break;
    case 2:
        self->enabled = 1;
        self->mask = -1;
        self->flags = 4;
        break;
    case 3:
        self->enabled = 0;
        break;
    case 4:
        self->enabled = 1;
        break;
    case 5:
        self->enabled = 0;
        break;
    }
}
