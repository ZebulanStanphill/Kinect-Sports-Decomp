unsigned int fn_82B81588(unsigned int param_1)
{
    unsigned int result;
    unsigned int i;
    unsigned int shift;

    result = 0;
    for (i = 0; i < 4; i++) {
        shift = i * 2;
        result = ((((param_1 >> shift) + i) & 3) << shift) | (result & ~(3 << shift));
    }
    return result;
}
