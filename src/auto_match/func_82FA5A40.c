unsigned int fn_82FA5A40(unsigned int size, unsigned int alignment)
{
    unsigned int aligned = 0;
    if (size != 0 && size < 0x40000000) {
        aligned = (size + alignment - 1) & ~(alignment - 1);
        if (aligned <= 0xc)
            aligned = 0xc;
    }
    return aligned;
}
