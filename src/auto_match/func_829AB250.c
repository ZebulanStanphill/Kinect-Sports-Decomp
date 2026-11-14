#include <string.h>

/* libpng png_zalloc: zlib allocator that clears the block in 32 KB pieces. */
extern void *fn_829B5088(void *png_ptr, unsigned int size);

void *fn_829AB250(void *png_ptr, unsigned int items, unsigned int size)
{
    void *ptr;
    unsigned int num_bytes;

    num_bytes = items * size;
    ptr = fn_829B5088(png_ptr, num_bytes);
    if (ptr == 0)
        return 0;
    if (num_bytes > 0x8000) {
        memset(ptr, 0, 0x8000);
        memset((unsigned char *)ptr + 0x8000, 0, num_bytes - 0x8000);
    } else {
        memset(ptr, 0, num_bytes);
    }
    return ptr;
}
