void __dcbz(int offset, void *base);

int fn_8307E3C8(char *self, int index)
{
    unsigned int *context;
    unsigned int size;
    unsigned int offset;

    context = (unsigned int *)(index * 0x60 + *(int *)(self + 8));
    size = (((context[1] >> 0x1d) & 1) + 1) * 0x100;
    for (offset = 0; offset < size; offset += 0x80) {
        __dcbz(offset, (void *)context[0x12]);
    }
    context[5] = 0;
    context[6] = 0;
    context[0] = context[0] & 0xfffff000;
    context[1] = context[1] & 0xfffff000;
    context[0] = context[0] & 0xffcfffff;
    context[2] = context[2] & 0xfc000000;
    context[4] = context[4] & 0x7fffffff;
    context[0x15] = 0;
    context[0x16] = 0;
    context[0x13] = 0;
    context[0] = context[0] & 0x7ffffff;
    context[9] = context[9] & 0xffffffe0;
    context[1] = context[1] | 0x80000000;
    *(unsigned short *)((char *)context + 0x52) = 0;
    context[2] = context[2] & 0x83ffffff;
    context[2] = context[2] & 0x7fffffff;
    context[3] = context[3] & 0x83ffffff;
    context[3] = context[3] & 0x7fffffff;
    return 0;
}
