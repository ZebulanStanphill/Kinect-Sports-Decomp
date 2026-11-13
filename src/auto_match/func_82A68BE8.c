unsigned int fn_82A68BE8(unsigned short value, unsigned short unit, unsigned int size, unsigned int *padding)
{
    unsigned short block;
    unsigned int count;

    if (value >= unit * 7) {
        block = value * 2 / unit - 12;
    } else {
        block = 0;
    }
    count = (size + block - 1) / block;
    if (padding != 0) {
        *padding = block * ((size + block - 1) / block) - size;
    }
    return count;
}
