typedef struct Guid_82E25C48 {
    unsigned int data[4];
} Guid_82E25C48;

typedef struct Attributes_82E25C48 Attributes_82E25C48;

typedef struct AttributesVtbl_82E25C48 {
    void *slots0[20];
    int (*DeleteAllItems)(Attributes_82E25C48 *self);                                              /* 0x50 */
    int (*SetUINT32)(Attributes_82E25C48 *self, const Guid_82E25C48 *key, unsigned int value);     /* 0x54 */
    int (*SetUINT64)(Attributes_82E25C48 *self, const Guid_82E25C48 *key, unsigned __int64 value); /* 0x58 */
    int (*SetDouble)(Attributes_82E25C48 *self, const Guid_82E25C48 *key, double value);           /* 0x5c */
    int (*SetGUID)(Attributes_82E25C48 *self, const Guid_82E25C48 *key,
                   const Guid_82E25C48 *value); /* 0x60 */
    int (*SetString)(Attributes_82E25C48 *self, const Guid_82E25C48 *key,
                     const unsigned short *value); /* 0x64 */
    int (*SetBlob)(Attributes_82E25C48 *self, const Guid_82E25C48 *key, const unsigned char *data,
                   unsigned int size);             /* 0x68 */
    void *SetUnknown;                              /* 0x6c */
    int (*LockStore)(Attributes_82E25C48 *self);   /* 0x70 */
    int (*UnlockStore)(Attributes_82E25C48 *self); /* 0x74 */
} AttributesVtbl_82E25C48;

struct Attributes_82E25C48 {
    AttributesVtbl_82E25C48 *vt;
};

typedef struct Item_82E25C48 {
    Guid_82E25C48 key;   /* 0x0 */
    unsigned short type; /* 0x10 */
    char pad12[6];

    union {
        unsigned int u32;
        unsigned __int64 u64;
        double f64;

        struct {
            unsigned int size;   /* 0x18 */
            unsigned int offset; /* 0x1c */
        } blob;
    } value; /* 0x18 */
} Item_82E25C48;

typedef struct Header_82E25C48 {
    unsigned int magic;     /* 0x0 */
    unsigned int count;     /* 0x4 */
    Item_82E25C48 items[1]; /* 0x8 */
} Header_82E25C48;

extern unsigned int fn_82F64CE0(const unsigned short *string);

int fn_82E25C48(Attributes_82E25C48 *attributes, const unsigned char *data, unsigned int size)
{
    const Header_82E25C48 *header = (const Header_82E25C48 *)data;
    const unsigned char *end = data + size;
    const unsigned char *payload;
    unsigned int count;
    const Item_82E25C48 *items;
    unsigned int needed;
    unsigned int i;
    int hr;

    hr = attributes->vt->LockStore(attributes);
    if (hr >= 0) {
        if (size < 8 || header->magic != 0x494d4641) {
            goto invalid;
        }
        count = header->count;
        items = header->items;
        needed = count * 0x20 + 8;
        if (size < needed) {
            goto invalid;
        }
        payload = data + needed;
        hr = attributes->vt->DeleteAllItems(attributes);
        if (hr >= 0) {
            for (i = 0; i < count; i++) {
                const Item_82E25C48 *item = &items[i];
                switch (item->type) {
                case 5:
                    hr = attributes->vt->SetDouble(attributes, &item->key, item->value.f64);
                    if (hr < 0) {
                        goto done;
                    }
                    break;
                case 0x13:
                    hr = attributes->vt->SetUINT32(attributes, &item->key, item->value.u32);
                    if (hr < 0) {
                        goto done;
                    }
                    break;
                case 0x15:
                    hr = attributes->vt->SetUINT64(attributes, &item->key, item->value.u64);
                    if (hr < 0) {
                        goto done;
                    }
                    break;
                case 0x1f: {
                    unsigned int bytes = item->value.blob.size;
                    const unsigned short *string = (const unsigned short *)(data + item->value.blob.offset);
                    unsigned int length = (item->value.blob.size >> 1) - 1;
                    if (bytes < 2 || (item->value.blob.size & 1) != 0 ||
                        (const unsigned char *)string < payload ||
                        (const unsigned char *)string + item->value.blob.size > end || string[length] != 0 ||
                        fn_82F64CE0(string) != length) {
                        goto invalid;
                    }
                    hr = attributes->vt->SetString(attributes, &item->key, string);
                    if (hr < 0) {
                        goto done;
                    }
                    break;
                }
                case 0x48: {
                    const unsigned char *guid = data + item->value.blob.offset;
                    if (guid < payload || guid + 0x10 > end) {
                        goto invalid;
                    }
                    hr = attributes->vt->SetGUID(attributes, &item->key, (const Guid_82E25C48 *)guid);
                    if (hr < 0) {
                        goto done;
                    }
                    break;
                }
                case 0x1011: {
                    const unsigned char *blob = data + item->value.blob.offset;
                    if (blob < payload || blob + item->value.blob.size > end) {
                        goto invalid;
                    }
                    hr = attributes->vt->SetBlob(attributes, &item->key, blob, item->value.blob.size);
                    if (hr < 0) {
                        goto done;
                    }
                    break;
                }
                default:
                    goto invalid;
                }
            }
        }
        goto done;
    invalid:
        hr = 0x80070057;
    }
done:
    attributes->vt->UnlockStore(attributes);
    return hr;
}
