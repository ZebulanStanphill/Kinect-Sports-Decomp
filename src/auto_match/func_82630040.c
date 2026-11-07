extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);

unsigned int *fn_82630040(unsigned int size, unsigned int flags)
{
    unsigned int *obj;
    unsigned int mem;
    unsigned int kind;
    int align;

    obj = (unsigned int *)fn_8265C940(0x20, 0x64800000);
    if (obj == 0) {
        return 0;
    }
    align = 3;
    kind = 0x100001;
    if ((flags & 4) != 0) {
        align = 2;
        kind = 0x300001;
    }
    if ((flags & 0x200) != 0) {
        kind |= 0x400000;
    }
    mem = (unsigned int)fn_8265C940(size, 0x82800000 | ((align & 7) << 28));
    if (mem == 0) {
        fn_8265C990(obj, 0x24800000);
        return 0;
    }
    obj[0] = kind;
    obj[6] = mem | 3;
    obj[1] = 1;
    obj[5] = 0xffff0000;
    obj[7] = (size & 0x3fffffc) | (obj[7] & 0x8000000) | 0x10000002;
    return obj;
}
