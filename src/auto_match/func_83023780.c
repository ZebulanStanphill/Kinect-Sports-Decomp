typedef struct Buffers_83023780 {
    char pad0[0x3c];
    unsigned short current; /* 0x3c */
    unsigned short pad3e;
    void *buffers[2];      /* 0x40 */
    unsigned short count;  /* 0x48 */
    unsigned short stride; /* 0x4a */
} Buffers_83023780;

extern void *memset(void *dst, int value, unsigned int size);

void fn_83023780(Buffers_83023780 *self, int frames)
{
    void *buffer = self->buffers[self->current];

    self->current++;
    if (self->current == 2)
        self->current = 0;
    self->count++;
    memset(buffer, 0, self->stride * frames);
}
