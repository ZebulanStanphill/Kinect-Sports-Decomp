extern void fn_8282D0E0(void *obj, int count, void *items);

int fn_828270A0(char *self, unsigned int index, int column)
{
    unsigned int i;
    int total;

    fn_8282D0E0(*(void **)(self + 0xcc), 3, &self);
    total = *(int *)(self + 0xc4) + *(int *)(self + 0x1c);
    for (i = 0; i < index - 1; i++) {
        total += *(int *)(*(char **)(self + 0x114) + i * 0x21 + 9);
    }
    return *(int *)(*(char **)(self + 0xe8) + column * 0xe - 0xa) + total;
}
