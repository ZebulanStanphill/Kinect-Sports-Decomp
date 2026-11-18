static __forceinline unsigned int ReadLittleEndian(const unsigned char *p, unsigned int count)
{
    unsigned int value = 0;
    unsigned int i = 0;
    unsigned int shift = 0;

    for (; i < count; i++) {
        value |= (unsigned int)p[i] << shift;
        shift += 8;
    }
    return value;
}

static __forceinline unsigned int ReadLength(const unsigned char *data)
{
    const unsigned char *p = data + 1;
    unsigned int value = 0;
    unsigned int i = 0;
    unsigned int shift = 0;
    unsigned int count = ((data[0] >> 3) & 3) + 1;

    for (; i < count; i++) {
        value |= (unsigned int)p[i] << shift;
        shift += 8;
    }
    return value;
}

void fn_8275E580(const unsigned char *data, unsigned int *first, unsigned int *second)
{
    unsigned int width;
    unsigned int length;
    const unsigned char *p;

    width = ((data[0] >> 5) & 3) + 1;
    length = ReadLength(data);
    p = data + length - width * 2;
    if (first != 0) {
        *first = ReadLittleEndian(p, width);
    }
    p += width;
    if (second != 0) {
        *second = ReadLittleEndian(p, width);
    }
}
