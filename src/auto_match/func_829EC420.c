typedef struct Entry_829EC420 {
    const char *name;   /* 0x0 */
    unsigned int refs;  /* 0x4 */
    unsigned int flags; /* 0x8 */
    int padc;
    unsigned __int64 size; /* 0x10 */
    void *data;            /* 0x18 */
    int pad1c;
} Entry_829EC420;

typedef struct Globals_829EC420 {
    char pad0[0x8f4cc];
    void *heap; /* 0x8f4cc */
} Globals_829EC420;

extern Entry_829EC420 lbl_83218A38[10];
extern Globals_829EC420 *lbl_832179FC;
extern Entry_829EC420 *fn_829EC340(const char *name);
extern char *fn_82A28568(void *heap, int flags, unsigned int size);
extern int fn_82F664B0(char *dst, unsigned int size, const char *src);
unsigned int strlen(const char *s);

char *fn_829EC420(const char *name, void *data, unsigned __int64 size, unsigned int flags)
{
    char *copy = 0;
    unsigned int i;
    unsigned int length;

    if (data == 0 || size == 0) {
        return 0;
    }
    if (fn_829EC340(name) == 0) {
        for (i = 0; i < 10; i++) {
            if (lbl_83218A38[i].name == 0 && lbl_83218A38[i].refs == 0) {
                length = strlen(name) + 1;
                copy = fn_82A28568(lbl_832179FC->heap, 0, length + 1);
                if (copy != 0) {
                    fn_82F664B0(copy, length, name);
                    lbl_83218A38[i].name = copy;
                    lbl_83218A38[i].size = size;
                    lbl_83218A38[i].data = data;
                    lbl_83218A38[i].flags = flags;
                    lbl_83218A38[i].refs++;
                }
                break;
            }
        }
    }
    return copy;
}
