typedef struct Guid_82E53670 {
    unsigned int data[4];
} Guid_82E53670;

typedef struct Entry_82E53670 {
    Guid_82E53670 id;      /* 0x00 */
    unsigned short key;    /* 0x10 */
    unsigned int size;     /* 0x14 */
    void *data;            /* 0x18 */
} Entry_82E53670;

typedef struct Owner_82E53670 {
    char pad0[0xa0];
    char table[0x68];      /* 0xa0 */
    unsigned int count;    /* 0x108 */
} Owner_82E53670;

extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);
extern int memcmp(const void *, const void *, unsigned int);
extern int fn_82E531C8(void *, unsigned int, Entry_82E53670 **);
extern int fn_82E52368(void *, Entry_82E53670 *, int);
extern void *fn_82E50BE8(unsigned int, int, int, int, int);
extern void fn_82E4FE40(void *);

static __forceinline Entry_82E53670 *getEntry_82E53670(Owner_82E53670 *o, unsigned int i)
{
    Entry_82E53670 *found;
    return fn_82E531C8(o->table, i, &found) ? found : 0;
}

int fn_82E53670(Owner_82E53670 *o, Guid_82E53670 id, unsigned short key, const void *data, unsigned int size)
{
    int hr = 0;
    int added = 0;
    Entry_82E53670 *e;
    unsigned int i;

    if (key > 0xff && key != 0xffff) {
        hr = 0x80070057;
        goto done;
    }
    e = 0;
    for (i = 0; i < o->count; i++) {
        e = getEntry_82E53670(o, i);
        if (e != 0 && memcmp(e, &id, sizeof(id)) == 0) {
            break;
        }
        e = 0;
    }
    if (e == 0) {
        e = (Entry_82E53670 *)fn_82E50BE8(sizeof(Entry_82E53670), 0, 0, 0, 0);
        if (e == 0) {
            hr = 0x8007000e;
            goto done;
        }
        memset(e, 0, sizeof(Entry_82E53670));
        added = fn_82E52368(o->table, e, 0);
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
    if (added == 0 && e != 0) {
        if (e->data != 0) {
            fn_82E4FE40(e->data);
        }
        e->data = 0;
        fn_82E4FE40(e);
    }
done:
    return hr;
}
