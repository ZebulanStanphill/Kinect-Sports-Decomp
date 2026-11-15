unsigned short fn_826F67F0(unsigned char *self)
{
    unsigned char *data;
    int offset = 1;
    data = self + 4;
    if ((data[0] & 0x80) != 0) {
        offset = 5;
    }
    ++offset;
    return (data[offset + 1] << 8) | data[offset];
}
