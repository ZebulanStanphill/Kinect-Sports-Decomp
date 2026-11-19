typedef struct Variant_82E80668 Variant_82E80668;

struct Variant_82E80668 {
    unsigned short type; /* 0x00 */
    unsigned short reserved[3];
    Variant_82E80668 *variant; /* 0x08 */
    void *elements;            /* 0x0c */
};

extern void *memset(void *p, int c, unsigned int n);
extern int fn_82E7E7E0(Variant_82E80668 *self);
extern int fn_82E7E900(Variant_82E80668 *dst, Variant_82E80668 *src);
extern int fn_82E7ED68(Variant_82E80668 *self, int flags, void **value);
extern int fn_82E7F868(Variant_82E80668 *self, unsigned int index, void *value);
extern int fn_82E7F8F0(Variant_82E80668 *self, unsigned int index, Variant_82E80668 *item);

static __forceinline int IsCompatible_82E80668(Variant_82E80668 *self, Variant_82E80668 *other)
{
    if (other->type == 0)
        return 0;
    if ((self->type & 0xfff) != 0xc && (other->type & 0xfff) != (self->type & 0xfff))
        return 0;
    return 1;
}

static __forceinline int Validate_82E80668(Variant_82E80668 *self, Variant_82E80668 *other)
{
    if (self->type == 0)
        return 0xc00d36e9;
    if (other == 0)
        return 0x80004003;
    if (self == other)
        return 0x80004003;
    if (!IsCompatible_82E80668(self, other))
        return 0x80070057;
    return 0;
}

int fn_82E80668(Variant_82E80668 *self, unsigned int index, Variant_82E80668 *other)
{
    void *converted = 0;
    Variant_82E80668 item;
    void *value;
    int hr;

    memset(&item, 0, sizeof(item));
    hr = Validate_82E80668(self, other);
    if (hr >= 0) {
        hr = fn_82E7F8F0(self, index, &item);
        if (hr < 0) {
            goto done;
        }
        if ((item.type & 0xfff) == 0xc) {
            hr = fn_82E7E7E0(item.variant);
            item.type = 0;
            if (hr < 0) {
                goto done;
            }
        } else if ((item.type & 0xfff) == 0x48) {
            item.type = 0;
        } else {
            hr = fn_82E7E7E0(&item);
            if (hr < 0) {
                goto done;
            }
        }
        hr = fn_82E7E900(&item, other);
        if (hr < 0) {
            goto done;
        }
        if ((self->type & 0xfff) == 0xc) {
            value = &item;
        } else {
            hr = fn_82E7ED68(&item, 0, &converted);
            if (hr < 0) {
                goto done;
            }
            value = converted;
        }
        hr = fn_82E7F868(self, index, value);
        if (hr >= 0) {
            memset(&item, 0, sizeof(item));
        }
    }
done:
    fn_82E7E7E0(&item);
    return hr;
}
