struct Src_82C1EFD0;
typedef struct Src_82C1EFD0 {
    char pad[0x10];
    int (*read)(struct Src_82C1EFD0 *, int, char **, unsigned int *, void *);
} Src_82C1EFD0;
typedef struct Stream_82C1EFD0 {
    Src_82C1EFD0 *src;
    int pad;
    unsigned __int64 pos;
} Stream_82C1EFD0;
typedef struct Obj_82C1EFD0 {
    char pad[0x1c];
    Stream_82C1EFD0 *stream;
} Obj_82C1EFD0;
extern void *memcpy(void *, const void *, unsigned int);

int fn_82C1EFD0(Obj_82C1EFD0 *self, char *dst, unsigned int limit, char **srcp, unsigned int *avail,
                int *remaining)
{
    Stream_82C1EFD0 *s = self->stream;
    char buf[16];
    int hr = 0;
    int adv = 0;
    int rem = limit;
    int off = 0;
    unsigned int n;

    do {
        if (*avail == 0) {
            hr = s->src->read(s->src, *remaining, srcp, avail, buf);
            if (hr < 0)
                return hr;
            adv = 0;
            s->pos = s->pos + *avail;
            *remaining = *remaining - *avail;
        }
        n = *avail;
        if (n > rem)
            n = rem;
        if (dst != 0) {
            if (n + off > limit)
                return 0x8050000c;
            memcpy(dst + off, *srcp, n);
        }
        rem = rem - n;
        off = off + n;
        adv = adv + n;
        *avail = *avail - n;
    } while (0 < rem);
    *srcp = *srcp + adv;
    return hr;
}
