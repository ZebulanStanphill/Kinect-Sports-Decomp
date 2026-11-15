extern int fn_826400A0(void *, unsigned int, int, int, int, unsigned int, int, void **, void **);
extern void *memcpy(void *, const void *, unsigned int);

void fn_826405E0(char *self, unsigned int format, int first, int count, int size, const void *extra,
                 unsigned int flags, const char *source, int stride)
{
    struct {
        void *main;
        void *extra;
    } buffers;

    if (fn_826400A0(self, format, -first, count, size, flags, stride, &buffers.extra, &buffers.main) == 0) {
        memcpy(buffers.main, source + first * stride, count * stride);
        memcpy(buffers.extra, extra, (((flags & 4) != 0 ? 4 : 2) * size + 3) & ~3u);
        *(unsigned int *)(self + 0x30) = *(unsigned int *)(self + 0x3554);
    }
}
