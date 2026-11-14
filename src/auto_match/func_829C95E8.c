typedef struct Entry_829C95E8 {
    int words[19];
} Entry_829C95E8;

extern unsigned char lbl_83215000[];
extern void *memset(void *, int, unsigned int);

#define IN_USE ((int *)(lbl_83215000 + 0x28a8))
#define ENTRIES ((Entry_829C95E8 *)(lbl_83215000 + 0x27c4))

Entry_829C95E8 *fn_829C95E8(void)
{
    unsigned int i;
    Entry_829C95E8 *entry;

    for (i = 0; i < 3; i++) {
        if (IN_USE[i] == 0) {
            IN_USE[i] = 1;
            entry = &ENTRIES[i];
            memset(entry, 0, sizeof(Entry_829C95E8));
            return entry;
        }
    }
    return 0;
}
