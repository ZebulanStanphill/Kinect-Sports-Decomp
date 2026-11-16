void __emit(unsigned int);
#define __lwsync() __emit(0x7C2004AC)
extern void fn_826DB3B8(void *node);
extern void fn_826D6BE0(void *node, unsigned int flags);
extern void fn_826D7FF8(void *node, unsigned int flags);

// Queue links are polled while other threads update them; each read uses an acquire barrier.
static __forceinline void *ReadPointer(void *volatile *slot)
{
    void *value = *slot;
    __lwsync();
    return value;
}

void fn_826DCDA8(void **self)
{
    void *node = ReadPointer(&self[0]);
    __lwsync();
    self[0] = 0;
    while (node != 0) {
        node = ReadPointer((void **)((char *)node + 0x20));
    }
    while (ReadPointer(&self[2]) != 0) {
        void *first = ReadPointer(&self[2]);
        node = ReadPointer(&self[2]);
        self[2] = *(void **)((char *)node + 0x18);
        fn_826DB3B8(first);
    }
    while (ReadPointer(&self[6]) != 0) {
        void *first = ReadPointer(&self[6]);
        node = ReadPointer(&self[6]);
        self[6] = *(void **)((char *)node + 0xc);
        fn_826D6BE0(first, 0);
    }
    while (ReadPointer(&self[4]) != 0) {
        void *first = ReadPointer(&self[4]);
        node = ReadPointer(&self[4]);
        self[4] = *(void **)((char *)node + 0xc);
        fn_826D7FF8(first, 0);
    }
}
