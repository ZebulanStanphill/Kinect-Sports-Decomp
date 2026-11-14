extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);

unsigned int *fn_8264B730(unsigned int size)
{
    unsigned int *obj;
    unsigned int mem;
    int align;

    obj = (unsigned int *)fn_8265C940(0xb8, 0x64800000);
    if (obj == 0) {
        return 0;
    }
    align = (size & 0xffff) != 0 ? 3 : 0;
    mem = (unsigned int)fn_8265C940(size, 0x85800000 | ((align & 7) << 28));
    if (mem == 0) {
        fn_8265C990(obj, 0x24800000);
        return 0;
    }
    obj[0x26] = mem;
    obj[0x27] = size;
    obj[1] = 1;
    obj[0] = 0x500009;
    obj[5] = 0xffff0000;
    return obj;
}
