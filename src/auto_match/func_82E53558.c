#include <string.h>

typedef struct Blob_82E53558 {
    unsigned int size;
    void *data;
} Blob_82E53558;

typedef struct Entry_82E53558 {
    unsigned int guid[4];  /* 0x00 */
    unsigned short type;   /* 0x10 */
    Blob_82E53558 blob;    /* 0x14 */
} Entry_82E53558;

typedef struct Obj_82E53558 {
    char pad0[0xa0];
    char table[0x68];      /* 0xa0 */
    unsigned int count;    /* 0x108 */
} Obj_82E53558;

extern int fn_82E531C8(void *table, unsigned int index, Entry_82E53558 **out);

static __forceinline Entry_82E53558 *GetEntry(Obj_82E53558 *self, unsigned short index)
{
    Entry_82E53558 *found;
    return fn_82E531C8(self->table, index, &found) ? found : 0;
}

int fn_82E53558(Obj_82E53558 *self, unsigned int index, unsigned int *guid, unsigned short *type,
                void *buffer, unsigned int *size)
{
    Entry_82E53558 *e;
    int hr = 0;
    int valid;

    valid = guid != 0 && type != 0;
    if (!valid) {
        hr = 0x80004003;
        goto done;
    }
    if ((unsigned short)index >= self->count) {
        hr = 0xC00D36BF;
        goto done;
    }
    e = GetEntry(self, (unsigned short)index);
    if (e == 0) {
        hr = 0xC00D36BB;
        goto done;
    }
    guid[0] = e->guid[0];
    guid[1] = e->guid[1];
    guid[2] = e->guid[2];
    guid[3] = e->guid[3];
    *type = e->type;
    if (size != 0) {
        if (buffer == 0) {
            if (*size > 0) {
                hr = 0x80070057;
                goto done;
            }
            goto small;
        } else {
            unsigned int n = e->blob.size;
            if (*size < n) {
small:
                hr = 0xC00D36B1;
                *size = e->blob.size;
                goto done;
            }
            *size = n;
            {
                Blob_82E53558 *b = &e->blob;
                memcpy(buffer, b->data, b->size);
            }
        }
    }
done:
    return hr;
}
