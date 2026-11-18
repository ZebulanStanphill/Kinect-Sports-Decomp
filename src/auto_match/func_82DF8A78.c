typedef struct Header_82DF8A78 {
    unsigned char bytes[0x21];
    unsigned char count; /* 0x21 */
    unsigned char pad22[2];
    unsigned char word24[4]; /* 0x24 */
    unsigned char pad28[8];
    unsigned char words[4][4]; /* 0x30 */
} Header_82DF8A78;

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

static __forceinline void Reverse32(unsigned char *bytes)
{
    unsigned char *first = bytes;
    unsigned char *last = bytes + 3;
    unsigned char t;

    t = *first;
    *first = *last;
    *last = t;
    first++;
    last--;
    t = *first;
    *first = *last;
    *last = t;
}

/* Converts the header's multi-byte fields between big- and little-endian order. */
void fn_82DF8A78(Header_82DF8A78 *header)
{
    int i;
    unsigned char *word;

    for (i = 0; i < header->count; i++) {
        Swap16(&header->bytes[i * 4 + 2]);
    }
    i = 4;
    word = header->words[0];
    do {
        Reverse32(word);
        word += 4;
    } while (--i);
    Swap32(header->word24);
}
