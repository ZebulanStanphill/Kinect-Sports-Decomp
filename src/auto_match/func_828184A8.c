unsigned int fn_828184A8(const char *data, unsigned int length)
{
    unsigned int hash = 0;
    unsigned int i;
    for (i = 0; i < length; i++) {
        unsigned int high;
        hash = (hash << 4) + data[i];
        high = hash & 0xf0000000;
        if (high != 0)
            hash ^= high >> 24 | high;
    }
    return hash;
}
