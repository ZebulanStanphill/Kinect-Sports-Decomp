typedef struct Buffer_82CFA528 {
    char pad0[0xc];
    char *data; /* 0x0c */
    int end;    /* 0x10 */
    int cursor; /* 0x14 */
    char pad18[4];
    int start; /* 0x1c */
    int limit; /* 0x20 */
} Buffer_82CFA528;

void fn_82CFC058(void *dst, const void *src, int size);

void fn_82CFA528(Buffer_82CFA528 *self)
{
    int start = self->start;
    int length;
    int rest;
    int offset;

    if (start < 0) {
        self->end = 0;
        self->cursor = 0;
        return;
    }
    length = self->end - start;
    if (length > self->limit) {
        self->end = 0;
        self->cursor = 0;
        self->start = -1;
        self->limit = -1;
        return;
    }
    if (start > 0) {
        rest = length % 0x200;
        offset = rest != 0 ? 0x200 - rest : 0;
        fn_82CFC058(self->data + offset, self->data + start, length);
        self->start = offset;
        self->end = ((rest != 0) + length / 0x200) * 0x200;
        self->cursor = self->end;
    }
}
