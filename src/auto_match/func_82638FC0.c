typedef struct Object_82638FC0 {
    char pad0[0x18];
    unsigned __int64 flags;
    char pad20[0x2980 - 0x20];
    float value;
} Object_82638FC0;

static void set_flags(unsigned __int64 *flags, unsigned __int64 mask)
{
    *flags |= mask;
}

void fn_82638FC0(Object_82638FC0 *p, unsigned int value)
{
    p->value = *(float *)&value;
    set_flags(&p->flags, 0x800000000000);
}
