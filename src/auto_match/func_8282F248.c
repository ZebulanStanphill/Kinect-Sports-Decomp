typedef unsigned int size_t;
extern void *memcpy(void *dst, const void *src, size_t n);

/* Hook called before the copy (function pointer global). */
extern void (*lbl_8320A7AC)(void);

void fn_8282F248(const void *src, unsigned int size, void *dst, unsigned int *capacity)
{
    lbl_8320A7AC();
    if (*capacity >= size) {
        memcpy(dst, src, size);
        *capacity = size;
    }
}
