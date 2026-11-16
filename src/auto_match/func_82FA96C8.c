typedef struct Buffer_82FA96C8 Buffer_82FA96C8;

typedef struct Vtable_82FA96C8 {
    void *slots[4];
    void (*Advance)(Buffer_82FA96C8 *self, int amount, int limit);
} Vtable_82FA96C8;

struct Buffer_82FA96C8 {
    Vtable_82FA96C8 *vtable; /* 0x00 */
    int reserved;            /* 0x04 */
    int position;            /* 0x08 */
    int remaining;           /* 0x0c */
    unsigned char active;    /* 0x10 */
    char padding[0x2f];
    char *source; /* 0x40 */
};

extern void fn_82FACC70(void *self, int offset, int size);

void fn_82FA96C8(Buffer_82FA96C8 *self, int amount, int *limit, unsigned char update)
{
    if (self->active) {
        char *source = self->source;
        if (source && ((unsigned char)source[0x34] & 0x80)) {
            fn_82FACC70(source, 0, *limit);
        }
        if (self->position + amount >= 0) {
            if (self->position + amount < *limit) {
                self->vtable->Advance(self, amount, *limit);
            }
            if (update) {
                self->remaining -= *limit;
            }
            if (amount >= 0 && amount < *limit) {
                *limit -= amount;
            }
        }
    } else if (update) {
        self->remaining -= *limit;
    }
}
