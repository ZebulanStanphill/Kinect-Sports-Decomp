typedef struct Arena_8268D210 {
    void *heap;             /* 0x000 */
    char buffer[0x200];     /* 0x004 */
    char *cursor;           /* 0x204 */
    unsigned int remaining; /* 0x208 */
} Arena_8268D210;

extern void *lbl_831E7E64;
extern void *fn_8267B8F0(void *heap, unsigned int size, unsigned int align, int flags);

void *fn_8268D210(Arena_8268D210 *self, unsigned int size)
{
    void *result;
    unsigned int used;

    if (size <= self->remaining) {
        result = self->cursor;
        self->cursor = (char *)(((unsigned int)(self->cursor + size - 1) & ~3) + 4);
        used = self->cursor - self->buffer;
        self->remaining = used < 0x200 ? 0x200 - used : 0;
    } else if (self->heap != 0) {
        result = fn_8267B8F0(self->heap, size, 4, 0);
    } else {
        result = fn_8267B8F0(lbl_831E7E64, size, 4, 0);
    }
    return result;
}
