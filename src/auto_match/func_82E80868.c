#include <string.h>

typedef struct Variant_82E80868 {
    unsigned short type; /* 0x00 */
    unsigned short reserved[3];
    unsigned int count; /* 0x08 */
    void *elements;     /* 0x0c */
} Variant_82E80868;

extern void *fn_82E4FE08(unsigned int);
extern int fn_82E7E7E0(Variant_82E80868 *);
extern int fn_82E7E900(Variant_82E80868 *, Variant_82E80868 *);
extern int fn_82E7EC68(Variant_82E80868 *, unsigned int *);
extern int fn_82E7F478(Variant_82E80868 *, unsigned short, unsigned int);
extern int fn_82E7F868(Variant_82E80868 *, unsigned int, void *);
extern int fn_82E7F8F0(Variant_82E80868 *, unsigned int, Variant_82E80868 *);
extern int fn_82E80668(Variant_82E80868 *, unsigned int, Variant_82E80868 *);

int fn_82E80868(Variant_82E80868 *self)
{
    unsigned int type = self->type;
    unsigned int index;
    unsigned int count = 0;
    Variant_82E80868 old;
    Variant_82E80868 item;
    int hr = 0;
    unsigned int isArray = (type >> 12) & 1;

    memset(&old, 0, sizeof(old));
    if (isArray != 0 && (type & 0xfff) == 0xc)
        goto done;
    if (type == 0) {
        self->count = 0;
        self->type = 0x100c;
        {
            unsigned __int64 *elements = (unsigned __int64 *)fn_82E4FE08(0x10);
            self->elements = elements;
            if (elements == 0) {
                hr = 0x8007000e;
                goto done;
            }
            elements[0] = 0;
            elements[1] = 0;
        }
    } else if (isArray != 0) {
        fn_82E7E900(&old, self);
        hr = fn_82E7E7E0(self);
        if (hr < 0)
            goto done;
        hr = fn_82E7EC68(&old, &count);
        if (hr < 0)
            goto done;
        {
            unsigned int total = count;
            hr = fn_82E7F478(self, 0xc, total);
            if (hr < 0)
                goto done;
            index = 0;
            while (total > index) {
                hr = fn_82E7F8F0(&old, index, &item);
                if (hr < 0)
                    goto done;
                hr = fn_82E80668(self, index, &item);
                if (hr < 0)
                    goto done;
                ++index;
            }
        }
        fn_82E7E7E0(&old);
    } else {
        hr = fn_82E7E900(&old, self);
        if (hr < 0)
            goto done;
        hr = fn_82E7E7E0(self);
        if (hr < 0)
            goto done;
        self->type = 0x100c;
        self->count = 1;
        self->elements = fn_82E4FE08(0x10);
        if (self->elements == 0) {
            hr = 0x8007000e;
            goto done;
        }
        memset(self->elements, 0, 0x10);
        hr = fn_82E7F868(self, 0, &old);
        if (hr < 0) {
            fn_82E7E7E0(&old);
            return hr;
        }
        old.type = 0;
    }
done:
    fn_82E7E7E0(&old);
    return hr;
}
