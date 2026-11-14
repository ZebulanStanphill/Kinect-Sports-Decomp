extern const unsigned int lbl_83155A28[];

/* number of significant bits of x (0 for 0), as a balanced binary search */
static __forceinline unsigned char BitWidth_826A74A0(unsigned int x)
{
    return x < 0x8000
        ? (x < 0x80
            ? (x < 0x8
                ? (x < 0x2 ? (x < 0x1 ? 0 : 1) : (x < 0x4 ? 2 : 3))
                : (x < 0x20 ? (x < 0x10 ? 4 : 5) : (x < 0x40 ? 6 : 7)))
            : (x < 0x800
                ? (x < 0x200 ? (x < 0x100 ? 8 : 9) : (x < 0x400 ? 10 : 11))
                : (x < 0x2000 ? (x < 0x1000 ? 12 : 13) : (x < 0x4000 ? 14 : 15))))
        : (x < 0x800000
            ? (x < 0x80000
                ? (x < 0x20000 ? (x < 0x10000 ? 16 : 17) : (x < 0x40000 ? 18 : 19))
                : (x < 0x200000 ? (x < 0x100000 ? 20 : 21) : (x < 0x400000 ? 22 : 23)))
            : (x < 0x8000000
                ? (x < 0x2000000 ? (x < 0x1000000 ? 24 : 25) : (x < 0x4000000 ? 26 : 27))
                : (x < 0x20000000 ? (x < 0x10000000 ? 28 : 29)
                    : (x < 0x40000000 ? 30 : (x < 0x80000000 ? 31 : 32)))));
}

unsigned int fn_826A74A0(const unsigned int *flags)
{
    unsigned int value = *flags;
    unsigned int index;

    if (value <= 0x40000)
        index = BitWidth_826A74A0(value);
    else
        index = value - 0x80000 + 0x14;
    if (index != 0 && index < 0x1e)
        return lbl_83155A28[index];
    return 0x2c;
}
