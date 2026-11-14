static __forceinline unsigned int Convert_82ABAB58(unsigned int x)
{
    switch (x) {
    case 0: return 0;
    case 1: return 1;
    case 2: return 2;
    case 3: return 3;
    }
    return 0;
}

unsigned int fn_82ABAB58(unsigned int v)
{
    unsigned int result = 0;
    unsigned int pos = 0;
    unsigned int shift;

    for (shift = 0x10; shift < 0x18; shift += 2) {
        result |= Convert_82ABAB58((v >> shift) & 3) << pos;
        pos += 4;
    }
    return result;
}
