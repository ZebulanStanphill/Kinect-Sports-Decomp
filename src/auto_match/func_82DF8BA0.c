typedef struct Entry_82DF8BA0 {
    unsigned char unknown0[2];
    unsigned char value[2]; /* 0x2: a 16-bit value */
    unsigned char unknown4[4];
} Entry_82DF8BA0;

typedef struct Header_82DF8BA0 {
    unsigned char countA;     /* 0x0 */
    unsigned char countB;     /* 0x1 */
    unsigned char numEntries; /* 0x2 */
    unsigned char unknown3;
    Entry_82DF8BA0 entries[1]; /* 0x4 */
} Header_82DF8BA0;

static __forceinline void SwapBytes(unsigned char *bytes)
{
    unsigned char first = bytes[0];
    bytes[0] = bytes[1];
    bytes[1] = first;
}

/* Byte-swaps the 16-bit value of every entry and the 16-bit array that follows the entries. */
void fn_82DF8BA0(Header_82DF8BA0 *header)
{
    unsigned char *values;
    int count;
    int i;

    for (i = 0; i < header->numEntries; i++) {
        SwapBytes(header->entries[i].value);
    }
    values = (unsigned char *)&header->entries[header->numEntries];
    count = header->countB + header->countA;
    for (i = 0; i < count; i++) {
        SwapBytes(&values[i * 2]);
    }
}
