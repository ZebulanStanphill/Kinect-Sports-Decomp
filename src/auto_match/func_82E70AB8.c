int memcmp(const void *a, const void *b, unsigned int n);

typedef struct Guid_82E70AB8 {
    unsigned int data[4];
} Guid_82E70AB8;

typedef struct Reader_82E70AB8 Reader_82E70AB8;

typedef struct ReaderVtbl_82E70AB8 {
    void *f0[9];
    int (*Seek)(Reader_82E70AB8 *self, unsigned __int64 count, unsigned __int64 *position,
                int flags); /* 0x24 */
} ReaderVtbl_82E70AB8;

struct Reader_82E70AB8 {
    ReaderVtbl_82E70AB8 *vtbl; /* 0x00 */
    char pad4[8];
    Guid_82E70AB8 format; /* 0x0c */
};

extern const Guid_82E70AB8 lbl_8202E618;
int fn_82E6F498(Reader_82E70AB8 *self, unsigned __int64 position, unsigned int *type);

int fn_82E70AB8(Reader_82E70AB8 *self, unsigned __int64 count, unsigned int type, __int64 unitSize,
                __int64 *out)
{
    Guid_82E70AB8 format = self->format;
    int hr = 0;
    unsigned __int64 position = 0;
    unsigned int found = 0;
    unsigned __int64 i;
    unsigned __int64 remaining;

    if (memcmp(&lbl_8202E618, &format, 16) != 0) {
        /* Not this format: no count, but success (the original sets the status again here). */
        *out = -1;
        hr = 0;
        goto done;
    }
    for (i = 0; i < count; i++) {
        remaining = count - i;
        hr = self->vtbl->Seek(self, remaining, &position, 0);
        if (hr < 0) {
            goto done;
        }
        hr = fn_82E6F498(self, position, &found);
        if (hr < 0) {
            goto done;
        }
        if (found != type) {
            *out = remaining * unitSize;
            goto done;
        }
    }
done:
    return hr;
}
