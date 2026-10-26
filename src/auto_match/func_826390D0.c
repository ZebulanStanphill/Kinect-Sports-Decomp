typedef unsigned __int64 U64;

typedef struct S826390D0 {
    char pad0[0x10];
    U64 flags;
    char pad18[0x28d8 - 0x18];
    int value;
} S826390D0;

static void set_flags(U64 *flags, U64 mask)
{
    *flags |= mask;
}

void fn_826390D0(S826390D0 *p, int value)
{
    p->value = value;
    set_flags(&p->flags, 0x4000000000);
}
