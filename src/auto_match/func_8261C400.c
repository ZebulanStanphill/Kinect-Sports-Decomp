extern int fn_82A1E658(void *handle);
extern void *XMemSet(void *destination, int value, unsigned int size);
extern int fn_82A29DE8(const char *name, unsigned int access, unsigned int share, void *security,
                       unsigned int creation, unsigned int flags, void *templateFile);
extern int fn_82A1F470(void);

int fn_8261C400(char *self, unsigned int access, unsigned int share, unsigned int creation)
{
    if (*(void **)(self + 0x31c) != 0) {
        fn_82A1E658(*(void **)(self + 0x31c));
    }
    XMemSet(self + 0x30c, 0, 0x14);
    *(int *)(self + 0x314) = 0;
    *(int *)(self + 0x304) = fn_82A29DE8(self + 0x100, access, share, 0, creation, 0x40000000, 0);
    if (*(int *)(self + 0x304) == -1) {
        *(int *)(self + 0x320) = fn_82A1F470();
        if (*(int *)(self + 0x320) == 2 && self[0x200] != 0) {
            *(int *)(self + 0x304) = fn_82A29DE8(self + 0x200, access, share, 0, creation, 0x40000000, 0);
            if (*(int *)(self + 0x304) == -1) {
                *(int *)(self + 0x320) = fn_82A1F470();
            } else {
                *(int *)(self + 0x320) = 0;
            }
        }
    }
    return 1;
}
