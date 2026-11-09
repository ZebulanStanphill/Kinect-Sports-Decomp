extern void fn_8282D0E0(void *obj, int count, void *items);

void fn_82826C68(char *self, int index, int *out)
{
    int offset;

    if ((*(unsigned char *)(self + 0x134) & 0x20) == 0)
        fn_8282D0E0(*(void **)(self + 0xcc), 1, &self);
    offset = index * 0x21;
    out[0] = *(int *)(*(char **)(self + 0x114) + offset - 0x21) + *(int *)(self + 0xc8);
    out[1] = *(int *)(*(char **)(self + 0x114) + offset - 0x18);
}
