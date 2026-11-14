extern void *malloc(unsigned int size);
extern void free(void *p);
extern int *_errno(void);
extern void *fn_82A2A360(void);
extern void *fn_82A29158(void *heap, unsigned int flags, void *p, unsigned int size);
extern int fn_82F800C8(unsigned int size);
extern unsigned int fn_82A1F470(void);
extern int fn_82F681D0(unsigned int error);
extern int lbl_83263614;

void *realloc(void *block, unsigned int size)
{
    void *result;

    if (block == 0) {
        return malloc(size);
    }
    if (size == 0) {
        free(block);
        return 0;
    }
    while (size <= 0xfffff000) {
        if (size == 0) {
            size = 1;
        }
        result = fn_82A29158(fn_82A2A360(), 0, block, size);
        if (result != 0 || lbl_83263614 == 0) {
            if (result == 0) {
                *_errno() = fn_82F681D0(fn_82A1F470());
            }
            return result;
        }
        if (fn_82F800C8(size) == 0) {
            *_errno() = fn_82F681D0(fn_82A1F470());
            return 0;
        }
    }
    fn_82F800C8(size);
    *_errno() = 0xc;
    return 0;
}
