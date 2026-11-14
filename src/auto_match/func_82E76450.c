unsigned short _byteswap_ushort(unsigned short value);
unsigned long _byteswap_ulong(unsigned long value);

unsigned int fn_82E76450(void *self, unsigned char size, const void *data, int *pos)
{
    unsigned int value = 0;

    switch (size) {
    case 1:
        value = *(const unsigned char *)data;
        *pos += 1;
        break;
    case 2:
        value = _byteswap_ushort(*(const unsigned short *)data);
        *pos += 2;
        break;
    case 3:
        value = _byteswap_ulong(*(const unsigned long *)data);
        *pos += 4;
        break;
    }
    return value;
}
