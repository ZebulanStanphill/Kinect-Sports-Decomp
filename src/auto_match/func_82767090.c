typedef struct Table_82767090 {
    int pad0[2];
    unsigned char **data; /* 0x08 */
    int pad1[2];
    int count;  /* 0x14 */
    int offset; /* 0x18 */
} Table_82767090;

static __forceinline unsigned short ReadU16(const unsigned char *data, int index)
{
    return data[index] | (data[index + 1] << 8);
}

static __forceinline unsigned char KeyLess(unsigned int first, unsigned int second, unsigned int a,
                                           unsigned int b)
{
    if (first != a) {
        return first < a;
    }
    return second < b;
}

float fn_82767090(Table_82767090 *self, unsigned int first, unsigned int second)
{
    int hi = self->count - 1;
    int lo = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int idx = self->offset + mid * 6;
        const unsigned char *data;
        unsigned int a;
        unsigned int b;
        int secondIndex = idx + 2;

        data = *self->data;
        a = ReadU16(data, idx);
        b = ReadU16(data, secondIndex);
        if (a == first && b == second) {
            return (short)ReadU16(*self->data, idx + 4);
        }
        if (KeyLess(first, second, a, b)) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return 0.0f;
}
