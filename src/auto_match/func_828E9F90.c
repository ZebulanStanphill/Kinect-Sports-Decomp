typedef struct Writer_828E9F90 {
    unsigned int bitPos;
    unsigned int pos;
    unsigned char *buffer;
    unsigned int capacity;
} Writer_828E9F90;

extern void *memcpy(void *dst, const void *src, unsigned int n);

int fn_828E9F90(Writer_828E9F90 *self, const void *src, unsigned int size)
{
    int ok = 1;

    if (self->bitPos != 0 || self->pos + size > self->capacity)
        ok = 0;
    else {
        memcpy(self->buffer + self->pos, src, size);
        self->pos += size;
    }
    return ok;
}
