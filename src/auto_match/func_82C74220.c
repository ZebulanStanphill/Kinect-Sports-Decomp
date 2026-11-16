typedef struct Context_82C74220 {
    char padding0[0x3c4c];
    void *first;
    char padding1[8];
    void *second;
    int unused;
    void *third;
    char padding2[0x6070 - 0x3c64];
    char *allocator;
} Context_82C74220;

extern void *fn_82C53960(unsigned int, int);
extern void *memset(void *, int, unsigned int);
extern void *fn_82C562F0(void *, unsigned int, const char *);
extern char lbl_82196582[];

int fn_82C74220(Context_82C74220 *self)
{
    void *allocator = self->allocator + 8;
    if (self->first == 0) {
        void *memory = fn_82C53960(0x48, 0);
        if (memory != 0) {
            memset(memory, 0, 0x48);
        }
        self->first = memory;
        if (memory == 0) {
            return -9;
        }
    }
    if (self->second == 0) {
        self->second = fn_82C562F0(allocator, 0x38, lbl_82196582);
        if (self->second == 0) {
            return -9;
        }
    }
    if (self->third == 0) {
        self->third = fn_82C562F0(allocator, 0x190, lbl_82196582);
        if (self->third == 0) {
            return -9;
        }
    }
    return 0;
}
