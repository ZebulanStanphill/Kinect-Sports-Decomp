typedef struct Key_8278BDD0 {
    char pad0[8];
    unsigned int *name;
    unsigned short f0c;
    short f0e;
    short f10;
    unsigned short f12;
    unsigned short f14;
    unsigned short flags;
} Key_8278BDD0;

static __forceinline unsigned char Bit0_8278BDD0(short v)
{
    return v & 1;
}

static __forceinline int HashBytes_8278BDD0(const void *data, unsigned int n)
{
    const unsigned char *bytes = (const unsigned char *)data;
    int h = 0x1505;
    while (n != 0) {
        n--;
        h = h * 0x1003f + bytes[n];
    }
    return h;
}

unsigned int fn_8278BDD0(void *self, const Key_8278BDD0 *key)
{
    unsigned short flags = key->flags;
    unsigned int hash = 0;
    unsigned char extra;

    if (Bit0_8278BDD0(flags >> 6)) {
        if (key->name != 0)
            hash = HashBytes_8278BDD0(key->name, (*key->name + 1) * 4);
    }
    if (Bit0_8278BDD0(flags >> 1))
        hash = key->f0c ^ hash;
    if (Bit0_8278BDD0(flags >> 2))
        hash = (key->f0e << 8) ^ hash;
    if (Bit0_8278BDD0(flags >> 3))
        hash = (key->f10 << 12) ^ hash;
    if (Bit0_8278BDD0(flags >> 4))
        hash = (key->f12 << 16) ^ hash;
    if (Bit0_8278BDD0(flags >> 5))
        hash = (key->f14 << 18) ^ hash;
    extra = Bit0_8278BDD0(flags >> 7) && (flags & 0x8000);
    return (((key->flags >> 8) & 6) | (key->flags << 9) | extra) ^ ((key->flags >> 1) & 0xc00) ^ hash;
}
