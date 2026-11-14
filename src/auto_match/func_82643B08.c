typedef struct Device_82643B08 {
    char pad0[0x4230];
    unsigned int *fallback;     /* 0x4230 */
} Device_82643B08;

typedef struct Chain_82643B08 {
    unsigned int *first;        /* 0x00 */
    unsigned int *block;        /* 0x04 */
    unsigned int size;          /* 0x08 */
    unsigned int *cursor;       /* 0x0c */
    unsigned int *end;          /* 0x10 */
    Device_82643B08 *device;    /* 0x14 */
} Chain_82643B08;

extern unsigned int *fn_82644040(Device_82643B08 *device, unsigned int count, int align);
extern void fn_8264D6C0(unsigned int start, unsigned int end, int flags);

static __forceinline unsigned int GpuAddress(void *p)
{
    unsigned int a = (unsigned int)p;

    return (((a >> 20) + 0x200) & 0x1000) + (a & 0x1fffffff) - 0x40000000;
}

unsigned int *fn_82643B08(Chain_82643B08 *chain)
{
    unsigned int *block;

    if (chain->block != 0)
        chain->block[0] = GpuAddress(chain->cursor);
    block = fn_82644040(chain->device, chain->size >> 2, 0x80);
    if (block == 0) {
        block = chain->device->fallback;
        chain->first = 0;
    } else {
        block[0] = GpuAddress(block + 1);
        if (chain->cursor != 0)
            chain->cursor[0] = GpuAddress(block);
        else
            chain->first = block;
        {
            unsigned int address = GpuAddress(block);
            fn_8264D6C0(address, address + chain->size, 0);
        }
    }
    chain->block = block;
    chain->cursor = block + 1;
    chain->end = (unsigned int *)((char *)block + ((chain->size - 4) & ~3));
    return chain->cursor;
}
