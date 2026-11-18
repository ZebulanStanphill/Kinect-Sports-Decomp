typedef struct Object_827F5928 {
    unsigned char pad[0xdc];
    unsigned char flags; /* 0xdc */
} Object_827F5928;

static __forceinline void SetFlags(unsigned char *flags, unsigned char mask)
{
    *flags |= mask;
}

void fn_827F5928(Object_827F5928 *self, int value)
{
    int flags;

    SetFlags(&self->flags, 4);
    flags = self->flags;
    self->flags = ((value > 0) << 3) | (flags & ~8);
}
