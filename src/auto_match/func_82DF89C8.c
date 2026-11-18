typedef struct Header_82DF89C8 {
    unsigned char magic[4];    /* 0x0 */
    unsigned char word4[4];    /* 0x4 */
    unsigned char word8[4];    /* 0x8 */
    unsigned char wordC[4];    /* 0xc */
    unsigned char words[4][4]; /* 0x10 */
} Header_82DF89C8;

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
void fn_82DF89C8(Header_82DF89C8 *header)
{
    int i;
    unsigned char *word;

    Swap32(header->word4);
    Swap32(header->word8);
    Swap32(header->wordC);
    i = 4;
    word = header->words[0];
    do {
        Swap32(word);
        word += 4;
    } while (--i);
}
