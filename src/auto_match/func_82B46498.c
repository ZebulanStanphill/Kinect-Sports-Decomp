typedef struct Desc_82B46498 {
    int pad0;
    int value;
    unsigned int flags;
} Desc_82B46498;

typedef struct State_82B46498 {
    char pad0[0x20];
    int value;
    int pad24;
    unsigned int flags;
} State_82B46498;

void fn_82B46498(State_82B46498 *self, const Desc_82B46498 *desc)
{
    self->value = desc->value;
    if (desc->flags & 1)
        self->flags |= 0x20000000;
    else
        self->flags &= ~0x20000000;
    if (desc->flags & 2)
        self->flags |= 2;
    else
        self->flags &= ~2;
}
