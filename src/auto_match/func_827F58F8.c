typedef struct Object_827F58F8 {
    unsigned char pad[0xdc];
    unsigned char flags; /* 0xdc */
} Object_827F58F8;

static __forceinline void SetFlags(unsigned char *flags, unsigned char mask)
{
    *flags |= mask;
}

void fn_827F58F8(Object_827F58F8 *self, int value)
{
    int flags;

    SetFlags(&self->flags, 1);
    flags = self->flags;
    self->flags = ((value > 0) << 1) | (flags & ~2);
}
