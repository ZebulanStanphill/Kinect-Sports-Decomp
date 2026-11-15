extern int fn_82CE86F0(void *self, unsigned int size);
extern void fn_82CE8758(void *self, void *block);
extern void fn_82CE9810(void *entry);
extern void fn_82CE98C8(void *entry);
extern void fn_82CFBB08(void *allocator, int count);

void fn_82CE8A48(char *self, char *block, unsigned int size, int mode)
{
    int index = fn_82CE86F0(self, size);
    if (mode == 0)
        fn_82CE98C8(block + index * 20 + 0x2c);
    else
        fn_82CE9810(block + index * 20 + 0x2c);
    if (index < *(int *)(self + 0x88)) {
        unsigned short *count = (unsigned short *)block + index + 0x11;
        if (*count != 0) {
            --*count;
            fn_82CFBB08(((void **)self)[index + 0x1e], 1);
            return;
        }
    }
    fn_82CE8758(self, block);
}
