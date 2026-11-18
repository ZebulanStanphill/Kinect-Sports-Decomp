/* An element of the 0x28-byte array at lbl_83217344, rewritten by fn_829CDC78 (spin lock, sync);
   the original re-reads baseHandle and sizes after every test, so they are volatile here. */
typedef struct Surface_829C9438 {
    unsigned int handle;              /* 0x00 */
    unsigned int size;                /* 0x04 */
    unsigned int flags;               /* 0x08 */
    volatile unsigned int baseHandle; /* 0x0c */
    unsigned int planes[3];           /* 0x10 */
    unsigned int *volatile sizes;     /* 0x1c */
    unsigned int planeMask;           /* 0x20 */
    long refs;                        /* 0x24 */
} Surface_829C9438;

extern int lbl_83215000[];
extern long _InterlockedIncrement(long volatile *);
extern void fn_8264D1C8(int device, unsigned int handle, unsigned int size, unsigned int flags);

void fn_829C9438(Surface_829C9438 *surface)
{
    unsigned int i;
    unsigned int bit;

    __emit(0x7C0004AC);
    if ((unsigned long)_InterlockedIncrement(&surface->refs) == 2) {
        fn_8264D1C8(lbl_83215000[7], surface->handle, surface->size, surface->flags);
        if (surface->baseHandle != 0) {
            fn_8264D1C8(lbl_83215000[7], surface->baseHandle, surface->sizes ? surface->sizes[0] : 0, 0);
            bit = 1;
            for (i = 0; i < 3; i++) {
                fn_8264D1C8(lbl_83215000[7], surface->planes[i],
                            surface->sizes && (surface->planeMask & bit) ? surface->sizes[i + 1] : 0, 0);
                bit = (bit << 1) | (bit >> 31);
            }
        }
        surface->handle = 0;
        surface->baseHandle = 0;
    }
}
