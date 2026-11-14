void *memmove(void *dst, const void *src, unsigned int n);

typedef struct List_8286F598 {
    char pad0[0x14];
    void **first;   /* 0x14 */
    void **last;    /* 0x18 */
} List_8286F598;

extern unsigned char fn_8287A7B0(void *item);
extern unsigned char fn_8287A7D0(void *item);
extern void *fn_8287A7A8(void *item);
extern void fn_8286F3A8(List_8286F598 *self, void *value);

int fn_8286F598(List_8286F598 *self)
{
    void **p = self->first;
    void **next;
    void *item;

    if (p != self->last) {
        next = p + 1;
        do {
            item = *p;
            if (fn_8287A7B0(item)) {
                memmove(p, next, (self->last - next) * sizeof(void *));
                self->last = self->last - 1;
            } else if (fn_8287A7D0(item)) {
                fn_8286F3A8(self, fn_8287A7A8(item));
            }
            p++;
            next++;
        } while (p != self->last);
    }
    return 0x20100000;
}
