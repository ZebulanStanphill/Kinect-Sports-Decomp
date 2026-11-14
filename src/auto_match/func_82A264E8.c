unsigned __int64 fn_82A264E8(unsigned __int64 dataSize, unsigned int count)
{
    unsigned int blocks;
    unsigned int l1, l2, l3;

    blocks = ((((count * 64 + 0x103f) & ~0xfff) * 2) + (((unsigned int)dataSize + 0xfff) & ~0xfff)) >> 12;
    l1 = (blocks + 0xa9) / 0xaa;
    if (l1 > 1)
        l2 = (l1 + 0xa9) / 0xaa;
    else
        l2 = 0;
    if (l2 > 1)
        l3 = (l2 + 0xa9) / 0xaa;
    else
        l3 = 0;
    return ((unsigned __int64)((l3 + l2 + l1) * 2 + blocks) + 0x1a) * 0x1000;
}
