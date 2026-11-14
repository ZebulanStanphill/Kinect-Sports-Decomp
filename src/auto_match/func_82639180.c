typedef struct Object_82639180 {
    char pad0[0x20];
    unsigned __int64 flags;
    char pad28[0x29c4 - 0x28];
    float value;
} Object_82639180;

static void set_flags(unsigned __int64 *flags, unsigned __int64 mask)
{
    *flags |= mask;
}

void fn_82639180(Object_82639180 *p, unsigned int value)
{
    p->value = *(float *)&value;
    set_flags(&p->flags, 0x400000000);
}
