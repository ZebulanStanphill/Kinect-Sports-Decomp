typedef void *(*AllocFn_82AEFC28)(void *context, unsigned int size);

void fn_82AEFC28(unsigned int **out, unsigned int bits, AllocFn_82AEFC28 alloc, void *context)
{
    if (bits > 0x1f) {
        unsigned int words = (bits + 0x20) >> 5;
        unsigned int *p = (unsigned int *)alloc(context, (words + 1) * 4);
        *out = p;
        *p = words;
    } else {
        *out = (unsigned int *)1;
    }
}
