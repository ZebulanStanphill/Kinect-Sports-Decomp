typedef union Bools_82BB9F48 {
    unsigned int word;
    unsigned char c[4];
} Bools_82BB9F48;

/* Indexed [second][first] by the four flags of each argument packed into a nibble. */
extern unsigned char lbl_8316E680[16][16];

static __forceinline unsigned int PackFlags(Bools_82BB9F48 flags)
{
    return (flags.c[0] & 1) << 3 | (flags.c[1] & 1) << 2 | (flags.c[2] & 1) << 1 | (flags.c[3] & 1);
}

Bools_82BB9F48 fn_82BB9F48(Bools_82BB9F48 a, Bools_82BB9F48 b)
{
    Bools_82BB9F48 result;
    unsigned char bits;

    bits = lbl_8316E680[PackFlags(b)][PackFlags(a)];
    result.c[0] = (bits >> 3) & 1;
    result.c[1] = (bits >> 2) & 1;
    result.c[2] = (bits >> 1) & 1;
    result.c[3] = bits & 1;
    return result;
}
