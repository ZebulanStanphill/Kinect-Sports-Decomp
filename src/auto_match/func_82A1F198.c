extern int lbl_83219594;
extern void *MmAllocatePhysicalMemoryEx(unsigned int flags, unsigned int size, unsigned int protect,
                                        unsigned int lowest, unsigned int highest, unsigned int alignment);
extern void fn_82A2A370(int);

void *fn_82A1F198(unsigned int size, unsigned int address, unsigned int alignment, unsigned int protect)
{
    void *p;
    unsigned int lowest;
    unsigned int highest;

    if (lbl_83219594 != 0)
        protect &= ~0x20000000;
    if (address != 0xffffffff) {
        lowest = address;
        highest = size + address - 1;
        alignment = 0;
    } else {
        lowest = 0;
        highest = 0xffffffff;
    }
    p = MmAllocatePhysicalMemoryEx(0, size, protect, lowest, highest, alignment);
    if (p == 0)
        fn_82A2A370(8);
    return p;
}
