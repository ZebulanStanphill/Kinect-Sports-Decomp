static __forceinline unsigned int popc4(unsigned int n)
{
    return (unsigned int)(0x8DA691691448ULL >> n >> n >> n) & 7;
}

unsigned int fn_82ADCF98(unsigned int x)
{
    unsigned char b3 = (unsigned char)(x >> 24);
    unsigned char b2 = (unsigned char)(x >> 16);
    unsigned char b1 = (unsigned char)(x >> 8);
    unsigned char b0 = (unsigned char)x;

    return popc4(b3 >> 4) + popc4(b3 & 0xf) +
           popc4(b2 >> 4) + popc4(b2 & 0xf) +
           popc4(b1 >> 4) + popc4(b1 & 0xf) +
           popc4(b0 >> 4) + popc4(b0 & 0xf);
}
