typedef struct Variant_82E80530 {
    unsigned short type; /* 0x00 */
    unsigned short reserved[3];
    unsigned int count; /* 0x08 */
    void *elements;     /* 0x0c */
} Variant_82E80530;

extern void *memset(void *p, int c, unsigned int n);
extern int fn_82E7EC68(Variant_82E80530 *self, unsigned int *count);
extern int fn_82E7F8F0(Variant_82E80530 *self, unsigned int index, Variant_82E80530 *item);
extern int fn_82E7F3F8(Variant_82E80530 *self, Variant_82E80530 *item, int *found);
extern int fn_82E804C0(Variant_82E80530 *self, Variant_82E80530 *other);

static __forceinline int IsCompatible(Variant_82E80530 *self, Variant_82E80530 *other)
{
    if (self == other || other->type == 0)
        return 0;
    if (self->type != 0 && (self->type & 0xfff) != 0xc && (other->type & 0xfff) != (self->type & 0xfff))
        return 0;
    return 1;
}

int fn_82E80530(Variant_82E80530 *self, Variant_82E80530 *other)
{
    unsigned int count = 0;
    int found = 0;
    unsigned int i = 0;
    Variant_82E80530 item;
    int hr;

    memset(&item, 0, sizeof(item));
    if ((self->type & 0x1000) == 0 && self->type != 0)
        return 0xc00d36ec;
    if (other == 0)
        return 0x80004003;
    if (!IsCompatible(self, other))
        return 0x80070057;
    hr = fn_82E7EC68(self, &count);
    if (hr < 0)
        return hr;

    while (count > i) {
        memset(&item, 0, sizeof(item));
        hr = fn_82E7F8F0(self, i, &item);
        if (hr < 0)
            return hr;
        hr = fn_82E7F3F8(other, &item, &found);
        if (hr < 0)
            return hr;
        if (found != 0)
            break;
        i++;
    }
    if (count > i)
        return hr;
    return fn_82E804C0(self, other);
}
