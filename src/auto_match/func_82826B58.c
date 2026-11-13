extern void fn_8282D0E0(void *obj, int count, void *items);
unsigned int strlen(const char *s);

void fn_82826B58(char *self, unsigned char index, int *out)
{
    if ((*(unsigned char *)(self + 0x134) & 0x20) == 0)
        fn_8282D0E0(*(void **)(self + 0xcc), 1, &self);
    *out = strlen(*(char **)(*(char **)(self + 0x114) + index * 0x21 - 0x21) + *(int *)(self + 0xc8)) + 1;
}
