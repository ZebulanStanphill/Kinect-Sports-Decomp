extern unsigned int lbl_831E7B50;
extern void *lbl_831E7B54;
extern char *lbl_831E7B58;
extern char lbl_831E7B5C[];

extern void fn_82819430(unsigned int heap);
extern void fn_82522ED8(void *p);
extern unsigned int fn_82819420(unsigned int count);
extern void *fn_82522D98(unsigned int size);
extern char *fn_82549798(unsigned int size, unsigned int alignment, unsigned int protect, int flags);
extern void fn_8281B210(unsigned int *heap, unsigned int count, char *tableBegin, char *tableEnd,
                        char *memoryBegin, char *memoryEnd, int flags);
extern void fn_82818908(unsigned int heap, unsigned int alignment);
extern void RtlInitializeCriticalSection(void *section);

void fn_82679FF0(unsigned int size, unsigned int count)
{
    unsigned int tableSize;
    unsigned int protect;
    char *memory;

    if (lbl_831E7B50 != 0) {
        fn_82819430(lbl_831E7B50);
        lbl_831E7B50 = 0;
        fn_82522ED8(lbl_831E7B54);
        lbl_831E7B54 = 0;
        fn_82522ED8(lbl_831E7B58);
        lbl_831E7B58 = 0;
    }
    tableSize = fn_82819420(count);
    lbl_831E7B58 = fn_82522D98(tableSize);
    if ((size & 0xffffff) == 0) {
        protect = 0x80000004;
    } else if ((size & 0xffff) == 0) {
        protect = 0x20000004;
    } else {
        protect = 4;
    }
    memory = fn_82549798(size, 0x1000, protect | 0x400, 0);
    lbl_831E7B54 = memory;
    fn_8281B210(&lbl_831E7B50, count, lbl_831E7B58, lbl_831E7B58 + tableSize, memory, memory + size, 0);
    fn_82818908(lbl_831E7B50, 0x1000);
    RtlInitializeCriticalSection(lbl_831E7B5C);
}
