extern void *fn_822ACDA0(void *self, const char *name);
extern void fn_8251FA58(void *handle);
extern void *fn_8251F720(void *source, int flags);

typedef struct Object_822ACB68 {
    int unk0;        /* 0x00 */
    int unk4;        /* 0x04 */
    void *handle;    /* 0x08 */
    char name[0x80]; /* 0x0c */
} Object_822ACB68;

static __forceinline int CompareString(const unsigned char *a, const unsigned char *b)
{
    unsigned char c = *a;
    unsigned char d = *b;

    while (d == c) {
        a++;
        b++;
        if (d == 0) {
            return 0;
        }
        d = *b;
        c = *a;
    }
    return d - c;
}

static __forceinline void CopyString(char *dst, const char *src, int size)
{
    char *end = dst + size;

    while (dst < end && (*dst++ = *src++) != 0) {
    }
    if (dst == end) {
        dst[-1] = 0;
    }
}

int fn_822ACB68(Object_822ACB68 *self, const char *name)
{
    void *source;

    if (CompareString((const unsigned char *)name, (const unsigned char *)self->name) == 0) {
        return 1;
    }
    source = fn_822ACDA0(self, name);
    if (source != 0) {
        if (self->handle != 0) {
            fn_8251FA58(self->handle);
            self->handle = 0;
        }
        self->handle = fn_8251F720(source, 0);
        CopyString(self->name, name, 0x80);
        return 1;
    }
    return 0;
}
