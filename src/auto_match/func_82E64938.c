typedef struct Entry_82E64938 {
    unsigned short *name; /* 0x00 */
} Entry_82E64938;

typedef struct Source_82E64938 {
    char pad0[0xc];
    char lock[0x4c - 0xc];     /* 0x0c */
    char entries[0xb8 - 0x4c]; /* 0x4c */
    int currentIndex;          /* 0xb8 */
} Source_82E64938;

extern void fn_82E50D88(void *lock);
extern void fn_82E50FA0(void *lock);
extern int fn_82E644B8(void *entries, int index, Entry_82E64938 **out);
extern unsigned short *fn_82E4FE08(unsigned int size);
extern void fn_82E4FE40(void *memory);
extern int fn_82A3F758(unsigned short *dst, unsigned int cch, const unsigned short *src);

static __forceinline Entry_82E64938 *FindEntry(void *entries, int index)
{
    Entry_82E64938 *entry;

    return fn_82E644B8(entries, index, &entry) ? entry : 0;
}

static __forceinline int StringLength(const unsigned short *text, unsigned int maxLength,
                                      unsigned int *length)
{
    unsigned int remaining = maxLength;
    const unsigned short *cursor = text;
    int hr = 0;

    while (remaining != 0 && *cursor != 0) {
        cursor++;
        remaining--;
    }
    if (remaining == 0) {
        hr = 0x80070057;
    } else {
        *length = maxLength - remaining;
    }
    return hr;
}

static __forceinline int StringCopy(unsigned short *dst, unsigned int cch, const unsigned short *src)
{
    int hr;

    if (cch > 0x7fffffff) {
        hr = 0x80070057;
    } else {
        hr = fn_82A3F758(dst, cch, src);
    }
    return hr;
}

int fn_82E64938(Source_82E64938 *self, unsigned short **out)
{
    unsigned short *copy = 0;
    Entry_82E64938 *entry;
    unsigned short *name;
    unsigned int length;
    int hr;

    fn_82E50D88(self->lock);
    if (out == 0) {
        hr = 0x80004003;
        goto done;
    }
    *out = 0;
    if (self->currentIndex == -1) {
        hr = 0x80004005;
        goto done;
    }
    entry = FindEntry(self->entries, self->currentIndex);
    if (entry == 0) {
        hr = 0x80004003;
        goto done;
    }
    name = entry->name;
    length = 0;
    if (name != 0) {
        hr = StringLength(name, 0x104, &length);
    } else {
        hr = 0x80070057;
    }
    if (hr < 0) {
        goto done;
    }
    copy = fn_82E4FE08((length + 1) * 2);
    if (copy == 0) {
        hr = 0x8007000e;
        goto done;
    }
    hr = StringCopy(copy, length + 1, name);
    if (hr >= 0) {
        *out = copy;
        copy = 0;
    }
done:
    fn_82E4FE40(copy);
    fn_82E50FA0(self->lock);
    return hr;
}
