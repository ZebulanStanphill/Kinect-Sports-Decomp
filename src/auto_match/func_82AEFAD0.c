int fn_82AEFAD0(unsigned int a, unsigned int b)
{
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
