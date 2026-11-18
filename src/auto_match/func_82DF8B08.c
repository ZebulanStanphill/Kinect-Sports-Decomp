typedef struct Header_82DF8B08 {
    unsigned char shorts[3][2]; /* 0x0 */
    unsigned char pad6[2];
    unsigned char words[5][4]; /* 0x8 */
} Header_82DF8B08;

static __forceinline void Swap16(unsigned char *bytes)
{
    unsigned char t;

    t = bytes[0];
    bytes[0] = bytes[1];
    bytes[1] = t;
}

static __forceinline void SwapByte(unsigned char *a, unsigned char *b)
{
    unsigned char t;

    t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void Swap32(unsigned char *bytes)
{
    unsigned char *last = bytes + 3;

    SwapByte(&bytes[0], &last[0]);
    SwapByte(&bytes[1], &last[-1]);
}

/* Converts the header's multi-byte fields between big- and little-endian order. */
void fn_82DF8B08(Header_82DF8B08 *header)
{
    int i;
    unsigned char *value16;
    unsigned char *value32;

    value16 = header->shorts[0];
    value32 = header->words[0];
    i = 3;
    do {
        Swap16(value16);
        value16 += 2;
        Swap32(value32);
        value32 += 4;
    } while (--i);
    Swap32(header->words[3]);
    Swap32(header->words[4]);
}
