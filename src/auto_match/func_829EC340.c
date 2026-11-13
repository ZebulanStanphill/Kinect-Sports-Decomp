typedef struct {
    const char *name;
    int data[7];
} Entry_829EC340;

extern Entry_829EC340 lbl_83218A38[10];
extern int fn_82F6F868(const char *a, const char *b);

Entry_829EC340 *fn_829EC340(const char *name)
{
    Entry_829EC340 *result = 0;
    unsigned int i;

    if (name == 0)
        return 0;
    for (i = 0; i < 10; i++) {
        if (lbl_83218A38[i].name != 0 && fn_82F6F868(name, lbl_83218A38[i].name) == 0) {
            result = &lbl_83218A38[i];
            break;
        }
    }
    return result;
}
