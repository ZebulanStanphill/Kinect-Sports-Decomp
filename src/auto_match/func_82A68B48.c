extern void *lbl_8315F75C[];

static __forceinline int Depth(unsigned int bits)
{
    if (bits == 8) return 0;
    if (bits == 16) return 1;
    if (bits == 32) return 2;
    return -1;
}
/* table entry for channel count (1 or 2) and bit depth (8, 16, 32) */
void *fn_82A68B48(unsigned int channels, unsigned int bits)
{
    int depth = Depth(bits);
    if (depth < 0)
        return 0;
    if (channels != 1 && channels != 2)
        return 0;
    return lbl_8315F75C[channels * 3 + depth - 3];
}
