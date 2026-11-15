extern unsigned int fn_82E38BE0(void *, unsigned int, unsigned int);

unsigned int fn_82E34A88(char *self)
{
    unsigned int divisor = *(unsigned int *)(self + 0x20);
    unsigned int bytes;
    if (divisor == 0) {
        divisor = 1;
    }
    bytes = ((*(unsigned int *)(self + 0x28) + divisor - 1) / divisor) * *(unsigned short *)(self + 0xc) * 8;
    return fn_82E38BE0(*(void **)(self + 0x1c), *(unsigned int *)(self + 4),
                       *(unsigned int *)(self + 8) * 8) *
               2 +
           bytes;
}
