typedef struct S { char pad[0x38]; unsigned int *flags; } S;

unsigned char fn_82ABDD48(S *s, unsigned char b)
{
    unsigned int *f = s->flags;
    return (f != 0 && (*f & 0x800) != 0) || (b != 0 && !(f != 0 && (*f & 0x1000) != 0));
}
