extern int *_errno(void);
extern void *fn_82A2A360(void);
extern void *fn_82A28568(void *heap, unsigned int flags, unsigned int size);
extern int fn_82F800C8(unsigned int size);
extern int lbl_83263614;

void *fn_82F84120(unsigned int count, unsigned int size, int *errorOut)
{
    unsigned int total;
    void *block;

    if (count == 0 || 0xFFFFF000 / count >= size) {
        total = count * size;
        if (total == 0)
            total = 1;
        for (;;) {
            block = 0;
            if (total <= 0xFFFFF000) {
                block = fn_82A28568(fn_82A2A360(), 8, total);
                if (block != 0)
                    return block;
            }
            if (lbl_83263614 != 0) {
                /* new handler mode: retry below */
            } else {
                if (errorOut != 0)
                    *errorOut = 12;
                return block;
            }
            if (fn_82F800C8(total) == 0)
                break;
        }
        if (errorOut != 0)
            *errorOut = 12;
        return 0;
    } else {
        *_errno() = 12;
        return 0;
    }
}
