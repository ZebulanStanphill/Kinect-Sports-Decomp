typedef long HRESULT;

typedef struct Entry_82F40E88 {
    void *object;
    int value;
    int pad8[3];
    unsigned int flags;
} Entry_82F40E88;

extern HRESULT fn_82F49100(int key, int reserved, Entry_82F40E88 **entry);

HRESULT fn_82F40E88(void *self, int key, void **outObject, unsigned short skipFlagged,
                    int *outValue, unsigned int mask)
{
    Entry_82F40E88 *entry;
    HRESULT hr;
    unsigned int flags;

    if (outValue == 0)
        return 0x8000FFFF;
    entry = 0;
    hr = fn_82F49100(key, 0, &entry);
    if (hr < 0)
        goto done;
    if (hr != 0)
        goto done;
    flags = entry->flags;
    if ((flags & mask) != 0) {
        if (((flags & 0x80) != 0 && (mask & 0x80) != 0) ||
            ((flags & 0x100) != 0 && (mask & 0x100) != 0))
            return 0xC00D3E8F;
        return 1;
    }
    if (skipFlagged != 0 && (flags & 0x2000) != 0)
        return 1;
    *outValue = entry->value;
    if (outObject != 0 && entry->object != 0)
        *outObject = entry->object;
done:
    return hr;
}
