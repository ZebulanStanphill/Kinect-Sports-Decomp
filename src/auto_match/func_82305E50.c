extern unsigned char fn_822BD338(void *a, const char *b);
extern void fn_822C8C08(void *a, const char *b);
extern const char *lbl_831CC7A0[];

unsigned char fn_82305E50(int param_1)
{
    unsigned int i;
    const char **pp;
    int base;

    pp = lbl_831CC7A0;
    i = 0;
    base = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20);
    do {
        if (fn_822BD338((void *)(base + 4), *pp)) {
            fn_822C8C08(*(void **)(*(int *)(param_1 + 0xc) + 0x114), "idle");
            return 1;
        }
        i += 4;
        pp++;
    } while (i < 8);
    return 0;
}
