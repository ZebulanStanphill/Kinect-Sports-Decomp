typedef struct Object_826391D8 {
    char pad0[0x20];
    unsigned __int64 flags;
    char pad28[0x29c8 - 0x28];
    float value;
} Object_826391D8;

static void set_flags(unsigned __int64 *flags, unsigned __int64 mask)
{
    *flags |= mask;
}

void fn_826391D8(Object_826391D8 *p, unsigned int value)
{
    p->value = *(float *)&value;
    set_flags(&p->flags, 0x200000000);
}
