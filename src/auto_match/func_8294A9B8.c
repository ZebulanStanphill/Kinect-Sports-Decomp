typedef struct {
    char pad0[0xe8];
    unsigned int mask;
    int unkEC;
    unsigned int shift;
} Packer;

unsigned int fn_8294A9B8(Packer *p, unsigned int bits, unsigned int value)
{
    return (value << p->shift) | (p->mask & bits);
}
