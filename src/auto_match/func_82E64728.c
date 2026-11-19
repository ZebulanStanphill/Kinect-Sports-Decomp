typedef struct Entry_82E64728 {
    unsigned short *name; /* 0x00 */
    char data[0x6c];      /* 0x04 */
} Entry_82E64728;

typedef struct Source_82E64728 {
    char pad0[0xc];
    char lock[0x4c - 0xc];     /* 0x0c */
    char entries[0xb4 - 0x4c]; /* 0x4c */
    unsigned int entryCount;   /* 0xb4 */
    int currentIndex;          /* 0xb8 */
} Source_82E64728;

extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern int fn_82E644B8(void *entries, unsigned int index, Entry_82E64728 **out);
extern int fn_82E64288(void *entries, Entry_82E64728 *entry, int *index);
extern void fn_82E64520(Entry_82E64728 *entry, int flags);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void fn_82E5AEC8(void *data);
extern void fn_82E4FE40(void *memory);
extern int fn_82F6ADA8(const unsigned short *a, const unsigned short *b);
extern int fn_82A3F758(unsigned short *dst, unsigned int cch, const unsigned short *src);

static __forceinline Entry_82E64728 *FindEntry(void *entries, unsigned int index)
{
    Entry_82E64728 *entry;

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

int fn_82E64728(Source_82E64728 *self, const unsigned short *name)
{
    Entry_82E64728 *entry = 0;
    Entry_82E64728 *found;
    unsigned int length;
    unsigned int count;
    unsigned int index;
    int hr;

    fn_82E50CB8(self->lock);
    if (name == 0) {
        hr = 0x80070057;
        goto done;
    }
    length = 0;
    hr = StringLength(name, 0x104, &length);
    if (hr < 0) {
        hr = 0x80070057;
        goto done;
    }
    for (index = 0; index < self->entryCount; index++) {
        found = FindEntry(self->entries, index);
        if (found == 0) {
            hr = 0x80004003;
            goto done;
        }
        if (fn_82F6ADA8(found->name, name) == 0) {
            self->currentIndex = index;
            goto done;
        }
    }
    entry = (Entry_82E64728 *)fn_82E50BE8(sizeof(Entry_82E64728), 0, 0, 0, 0);
    if (entry != 0) {
        fn_82E5AEC8(entry->data);
    } else {
        entry = 0;
    }
    if (entry == 0) {
        hr = 0x8007000e;
        goto done;
    }
    entry->name = 0;
    count = length + 1;
    entry->name = (unsigned short *)fn_82E50BE8(count <= 0x7fffffff ? count * 2 : 0xffffffff, 0, 0, 0, 0);
    if (entry->name == 0) {
        hr = 0x8007000e;
        goto cleanup;
    }
    hr = StringCopy(entry->name, count, name);
    if (hr < 0) {
        goto cleanup;
    }
    if (fn_82E64288(self->entries, entry, &self->currentIndex) == 0) {
        hr = 0x8007000e;
        goto cleanup;
    }
    entry = 0;
cleanup:
    if (entry != 0) {
        if (entry->name != 0) {
            fn_82E4FE40(entry->name);
        }
        entry->name = 0;
        fn_82E64520(entry, 1);
    }
done:
    fn_82E50F10(self->lock);
    return hr;
}
