int fn_82AEFB68(unsigned int *desc, unsigned int b)
{
    unsigned int a = *desc & 0x1f;
    if ((a & 0x18) != 0 && (b & 0x18) != 0) {
        return 0;
    }
    if ((a & 2) != 0 && (b & 1) != 0) {
        return 0;
    }
    if ((a & 4) != 0 && (b & 1) != 0) {
        return 0;
    }
    return 1;
}
