extern void fn_8265C990(void *memory, unsigned int tag);

void fn_82AC6808(char *self, unsigned int *memory, unsigned int size)
{
    unsigned int *freeLists = (unsigned int *)(self + 0x3cc);
    if (size > 0x84) {
        unsigned int *header = (unsigned int *)((unsigned int)(memory - 3) & ~1u);
        *(unsigned int *)(header[1] & ~1u) = header[0];
        *(unsigned int *)(header[0] & ~1u) = header[1];
        fn_8265C990(memory - 3, 0x618d0000);
    } else {
        unsigned int index = (size >> 2) - 1;
        *memory = freeLists[index];
        freeLists[index] = (unsigned int)memory;
    }
}
