typedef struct Name_82525F28 {
    int length;
} Name_82525F28;

extern void *lbl_832767D4;
extern void *lbl_832767E8;
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82549960(void *mem, Name_82525F28 *name, int a, int b, int c, int d);

static __forceinline unsigned int NotEmpty(Name_82525F28 *name)
{
    return name->length != 0;
}

void fn_82525F28(Name_82525F28 *first, Name_82525F28 *second)
{
    void *mem;

    if (first != 0 && NotEmpty(first) > 0 && lbl_832767D4 == 0) {
        mem = fn_8265C9E0(0x200);
        if (mem != 0)
            lbl_832767D4 = fn_82549960(mem, first, 0, 0, 0, 0);
        else
            lbl_832767D4 = 0;
    }
    if (second != 0 && NotEmpty(second) > 0 && lbl_832767E8 == 0) {
        mem = fn_8265C9E0(0x200);
        if (mem != 0)
            lbl_832767E8 = fn_82549960(mem, second, 0, 0, 0, 0);
        else
            lbl_832767E8 = 0;
    }
}
