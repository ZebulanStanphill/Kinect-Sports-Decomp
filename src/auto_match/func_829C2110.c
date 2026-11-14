/* zlib zcalloc for the D3DX allocator: tagged allocation, alignment check, zero fill. */
extern void *memset(void *dst, int value, unsigned int size);
extern void *fn_8265C940(unsigned int size, unsigned int tag);

void *d3dx_zcalloc(void *opaque, unsigned int items, unsigned int size)
{
    unsigned int bytes = items * size;
    void *p = fn_8265C940(bytes, 0x24810000);

    if (p != 0) {
        if ((unsigned int)p % size != 0)
            __debugbreak();
        memset(p, 0, bytes);
    }
    return p;
}
