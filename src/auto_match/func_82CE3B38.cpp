struct Buf_82CE3628 {
    char *base;        /* 0x0 */
    int pad;           /* 0x4 */
    unsigned int size; /* 0x8 */
    unsigned int pos;  /* 0xc */
    int swap;          /* 0x10 */
    long Write(const unsigned short *src, unsigned int n);
    long Write(const unsigned int *src, unsigned int n);
    long Write(const unsigned __int64 *src, unsigned int n);
};

struct Entry_82CE3B38 {
    unsigned int flags; /* 0x0, low two bits: log2 of the value size */
    char *data;         /* 0x4 */
    int pad8[2];
};

extern "C" void fn_82CE3440(Buf_82CE3628 *buffer, char *base, unsigned int capacity, unsigned int size,
                            int swap);
extern "C" long fn_82CE35B0(Buf_82CE3628 *buffer, const unsigned char *src, unsigned int n);

extern "C" long fn_82CE3B38(Entry_82CE3B38 *entries, int index, unsigned __int64 value, int swap)
{
    Entry_82CE3B38 *entry = &entries[index];
    long hr = 0;
    unsigned char byteValue;
    unsigned short shortValue;
    unsigned int word; /* the value size first, then a 4-byte value */
    Buf_82CE3628 buffer;

    word = 1 << (entry->flags & 3);
    fn_82CE3440(&buffer, entry->data, word, word, swap);
    switch (entry->flags & 3) {
    case 0:
        byteValue = (unsigned char)value;
        hr = fn_82CE35B0(&buffer, &byteValue, 1);
        break;
    case 1:
        shortValue = (unsigned short)value;
        hr = buffer.Write(&shortValue, 1);
        break;
    case 2:
        word = (unsigned int)value;
        hr = buffer.Write(&word, 1);
        break;
    case 3:
        hr = buffer.Write(&value, 1);
        break;
    }
    return hr;
}
