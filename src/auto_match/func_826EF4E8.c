#include <string.h>

/* Virtual method (slot 1 of the table at lbl_8200DA00). The object pointer it receives points 4 bytes
   past a "has data" byte; the data pointer sits at +0xc. */
void fn_826EF4E8(char *self, void *dst, size_t size)
{
    if (*(unsigned char *)(self - 4) != 0) {
        memcpy(dst, *(void **)(self + 0xc), size);
    }
}
