typedef struct {
    unsigned int f0;
    unsigned int size;
    unsigned int base;
    unsigned int off;
    unsigned int pos;
} Stream;

extern void *memcpy(void *d, const void *s, unsigned int n);

unsigned char fn_82A8B508(Stream *s, void *dst, unsigned int want, unsigned int *got)
{
    unsigned int avail = s->size - s->pos;

    *got = want > avail ? avail : want;
    memcpy(dst, (void *)(s->off + s->base + s->pos), *got);
    s->pos = *got + s->pos;
    return *got == want;
}
