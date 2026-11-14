extern int fn_828F6FA8(char *out, int size, const char *fmt, ...);
extern unsigned int *fn_82954BA8(int *self, void *table, unsigned int key);
extern void fn_82975A18(int *self, unsigned int *item, char *out, int size);
extern char lbl_8315B868[];

void fn_829631B8(int *self, unsigned int *item, char *out, int size)
{
    unsigned int *entry;
    if ((item[1] != (unsigned int)self[0x20] && item[1] != (unsigned int)self[0x21]) ||
        ((entry = fn_82954BA8(self, lbl_8315B868,
                              (*(unsigned int (**)(int *, unsigned int))(*self + 0x70))(self, item[0x1b]))),
         entry[4] == -1)) {
        fn_82975A18(self, item, out, size);
    } else {
        unsigned int value = (*(unsigned int (**)(int *, unsigned int))(*self + 0x74))(self, item[0x1b]);
        fn_828F6FA8(out, size, "%s%s%u", **(unsigned int **)(self[4] + item[1] * 4), *entry, value);
        out[size - 1] = 0;
    }
}
