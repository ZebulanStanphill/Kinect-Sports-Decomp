typedef struct Unknown_82E51DE8 Unknown_82E51DE8;

typedef struct Desc_82E51DE8 {
    char pad0[8];
    unsigned int bits;
    char padc[0x88 - 0xc];
    unsigned __int64 size;
} Desc_82E51DE8;

typedef struct UnknownVtbl_82E51DE8 {
    int (*QueryInterface)(Unknown_82E51DE8 *self, const void *iid, void *out);
    unsigned int (*AddRef)(Unknown_82E51DE8 *self);
    unsigned int (*Release)(Unknown_82E51DE8 *self);
    void *slots[0x98 / 4 - 3];
    Desc_82E51DE8 *(*GetDesc)(Unknown_82E51DE8 *self);
} UnknownVtbl_82E51DE8;

struct Unknown_82E51DE8 {
    UnknownVtbl_82E51DE8 *vt;
};

typedef struct Variant_82E51DE8 {
    __int64 words[2];
} Variant_82E51DE8;

extern char lbl_821531C8[];
extern char lbl_821531D8[];
extern int fn_82E50330(Variant_82E51DE8 *v);
extern void *memset(void *, int, unsigned int);

int fn_82E51DE8(void *self, Unknown_82E51DE8 *source, unsigned int *size, unsigned int *other)
{
    Unknown_82E51DE8 *a;
    Unknown_82E51DE8 *b;
    Variant_82E51DE8 var;
    int hr;
    Desc_82E51DE8 *d;

    if (source == 0 || size == 0 || other == 0)
        return 0x80004003;
    *size = 0;
    *other = 0;
    a = 0;
    memset(&var, 0, sizeof(var));
    hr = 0;
    b = 0;
    if (source->vt->QueryInterface(source, lbl_821531C8, &a) >= 0) {
        d = a->vt->GetDesc(a);
        if ((d->bits & 0x7fffff00) == 0x7fffff00) {
            hr = 0xc00d3aa0;
            goto done;
        }
        *size = d->bits << 3;
    } else {
        if (source->vt->QueryInterface(source, lbl_821531D8, &b) < 0)
            goto done;
        *size = (unsigned int)b->vt->GetDesc(b)->size;
    }
done:
    if (a != 0) {
        a->vt->Release(a);
        a = 0;
    }
    if (b != 0) {
        b->vt->Release(b);
        b = 0;
    }
    fn_82E50330(&var);
    return hr;
}
