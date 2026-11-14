typedef struct Entry_829C9540 {
    char pad0[0x118];
    int handle;
    int value;
    char pad120[0x10];
} Entry_829C9540;

typedef struct Globals_829C9540 {
    char pad0[0x2270];
    int *values;
    char pad2274[0x19c];
    Entry_829C9540 entries[3];
    int used[3];
} Globals_829C9540;

extern Globals_829C9540 lbl_83215000;
extern void *memset(void *dst, int c, unsigned int n);
extern int fn_829CFAB0(int kind);

Entry_829C9540 *fn_829C9540(void)
{
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (lbl_83215000.used[i] == 0) {
            Entry_829C9540 *e = &lbl_83215000.entries[i];
            lbl_83215000.used[i] = 1;
            memset(e, 0, sizeof(*e));
            if (lbl_83215000.values != 0)
                e->value = lbl_83215000.values[i + 0x2a];
            e->handle = fn_829CFAB0(4);
            return e;
        }
    }
    return 0;
}
