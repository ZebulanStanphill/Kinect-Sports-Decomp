typedef struct Guid_82E5B380 {
    unsigned int data[4];
} Guid_82E5B380;

typedef struct Entry_82E5B380 {
    Guid_82E5B380 id;      /* 0x00 */
    unsigned short key;    /* 0x10 */
    unsigned int size;     /* 0x14 */
    void *data;            /* 0x18 */
} Entry_82E5B380;

typedef struct Owner_82E5B380 {
    char pad0[0x8c];
    char table[0x68];      /* 0x8c */
    unsigned int count;    /* 0xf4 */
} Owner_82E5B380;

extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);
extern int memcmp(const void *, const void *, unsigned int);
extern int fn_82E5AF48(void *, unsigned int, Entry_82E5B380 **);
extern int fn_82E5A508(void *, Entry_82E5B380 *, int);
extern void *fn_82E50BE8(unsigned int, int, int, int, int);
extern void fn_82E4FE40(void *);

static __forceinline Entry_82E5B380 *getEntry_82E5B380(Owner_82E5B380 *o, unsigned int i)
{
    Entry_82E5B380 *found;
    return fn_82E5AF48(o->table, i, &found) ? found : 0;
}

int fn_82E5B380(Owner_82E5B380 *o, Guid_82E5B380 id, unsigned short key, unsigned int size, const void *data)
{
    int hr;
    int added;
    Entry_82E5B380 *e;
    unsigned int i;

    if (data == 0 && size != 0) {
        return 0x80070057;
    }
    hr = 0;
    added = 0;
    e = 0;
    for (i = 0; i < o->count; i++) {
        e = getEntry_82E5B380(o, i);
        if (e != 0 && memcmp(e, &id, sizeof(id)) == 0) {
            break;
        }
        e = 0;
    }
    if (e == 0) {
        e = (Entry_82E5B380 *)fn_82E50BE8(sizeof(Entry_82E5B380), 0, 0, 0, 0);
        if (e == 0) {
            hr = 0x8007000e;
            goto done;
        }
        memset(e, 0, sizeof(Entry_82E5B380));
        added = fn_82E5A508(o->table, e, 0);
        if (added == 0) {
            hr = 0x8007000e;
            goto fail;
        }
    }
    e->key = key;
    e->id = id;
    if (e->data != 0) {
        fn_82E4FE40(e->data);
    }
    e->data = 0;
    e->size = 0;
    if (data != 0) {
        e->data = fn_82E50BE8(size, 0, 0, 0, 0);
        if (e->data == 0) {
            hr = 0x8007000e;
            goto fail;
        }
        memcpy(e->data, data, size);
        e->size = size;
    }
    e = 0;
fail:
    if (e != 0) {
        if (e->data != 0) {
            fn_82E4FE40(e->data);
        }
        e->data = 0;
    }
    if (added != 0 && e != 0) {
        fn_82E4FE40(e);
    }
done:
    return hr;
}
