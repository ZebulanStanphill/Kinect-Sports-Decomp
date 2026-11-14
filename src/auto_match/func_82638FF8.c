typedef struct Object_82638FF8 {
    char pad0[0x18];
    unsigned __int64 flags;
    char pad20[0x297c - 0x20];
    float value;
} Object_82638FF8;

static void set_flags(unsigned __int64 *flags, unsigned __int64 mask)
{
    *flags |= mask;
}

void fn_82638FF8(Object_82638FF8 *p, unsigned int value)
{
    p->value = *(float *)&value;
    set_flags(&p->flags, 0x1000000000000);
}
