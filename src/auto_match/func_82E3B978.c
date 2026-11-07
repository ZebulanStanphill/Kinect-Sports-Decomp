typedef struct Item_82E3B978 Item_82E3B978;
typedef struct List_82E3B978 List_82E3B978;

typedef struct ItemVtbl_82E3B978 {
    void *slot0;
    void *slot4;
    unsigned int (*Release)(Item_82E3B978 *self);
    int (*Lock)(Item_82E3B978 *self, unsigned char **data, unsigned int *a, unsigned int *b);
    int (*Unlock)(Item_82E3B978 *self);
    int (*GetLength)(Item_82E3B978 *self, unsigned int *len);
} ItemVtbl_82E3B978;

struct Item_82E3B978 {
    ItemVtbl_82E3B978 *vt;
};

typedef struct ListVtbl_82E3B978 {
    void *slots[39];
    int (*GetCount)(List_82E3B978 *self, unsigned int *count);
    int (*GetItem)(List_82E3B978 *self, unsigned int index, Item_82E3B978 **item);
} ListVtbl_82E3B978;

struct List_82E3B978 {
    ListVtbl_82E3B978 *vt;
};

typedef struct Self_82E3B978 {
    unsigned char pad[0x4c];
    void *field4c;
} Self_82E3B978;

extern int fn_82E39CE8(unsigned char *src, unsigned char **cursor, unsigned int len,
                       unsigned char *end);

int fn_82E3B978(Self_82E3B978 *self, List_82E3B978 *list, unsigned char *info,
                unsigned char *buf, unsigned short cb)
{
    Item_82E3B978 *item;
    unsigned char *data;
    unsigned int len;
    unsigned int count;
    unsigned char *cursor;
    unsigned int n;
    unsigned int hdr;
    unsigned char *end;
    unsigned int total;
    unsigned int written;
    unsigned int i;
    unsigned int chunk;
    unsigned int off;
    int hr;

    if (list == 0 || info == 0 || buf == 0) {
        return 0x80004003;
    }
    n = cb;
    if (n < 8) {
        return 0x80070057;
    }
    item = 0;
    hdr = *(unsigned int *)(info + 0x21) + *(unsigned int *)(info + 0x13);
    data = 0;
    cursor = buf;
    end = buf + n;
    if (self->field4c == 0) {
        return 0xC00D36B6;
    }
    count = 0;
    hr = list->vt->GetCount(list, &count);
    if (hr >= 0) {
        total = 0;
        written = 0;
        for (i = 0; i < count; i++) {
            if (written == n) {
                break;
            }
            len = 0;
            if (item != 0) {
                item->vt->Release(item);
                item = 0;
            }
            hr = list->vt->GetItem(list, i, &item);
            if (hr < 0) {
                goto done;
            }
            hr = item->vt->GetLength(item, &len);
            if (hr < 0) {
                goto done;
            }
            total = len + total;
            if (total > written + hdr) {
                hr = item->vt->Lock(item, &data, 0, 0);
                if (hr < 0) {
                    goto done;
                }
                chunk = total - written - hdr;
                off = len - total + written + hdr;
                if (n - written < chunk) {
                    chunk = n - written;
                }
                hr = fn_82E39CE8(data + off, &cursor, chunk, end);
                if (hr < 0) {
                    goto done;
                }
                written = chunk + written;
                if (data != 0) {
                    item->vt->Unlock(item);
                    data = 0;
                }
            }
        }
        if (hr != 0 || written != n) {
            hr = 0xC00D3A9A;
        }
    }
done:
    if (data != 0) {
        if (item != 0) {
            item->vt->Unlock(item);
        }
    }
    if (item != 0) {
        item->vt->Release(item);
    }
    return hr;
}
