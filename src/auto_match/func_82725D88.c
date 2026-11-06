typedef struct Entry_82725D88 {
    int a;
    unsigned int key;
    int b;
    int c;
} Entry_82725D88;
typedef struct Array_82725D88 {
    Entry_82725D88 *data;
    unsigned int count;
} Array_82725D88;
typedef struct Obj_82725D88 {
    int pad[3];
    Array_82725D88 items;
} Obj_82725D88;
extern void fn_82722760(void);
extern unsigned int fn_827227E8(Array_82725D88 *arr, unsigned int lo, unsigned int hi, unsigned int *key, void *cmp);

static __forceinline unsigned int find_82725D88(Array_82725D88 *arr, unsigned int *key)
{
    return fn_827227E8(arr, 0, arr->count, key, (void *)fn_82722760);
}

Entry_82725D88 *fn_82725D88(Obj_82725D88 *o, unsigned int key)
{
    unsigned int i;
    Entry_82725D88 *e;
    unsigned int k;

    k = key;
    i = find_82725D88(&o->items, &key);
    if (i < o->items.count) {
        e = &o->items.data[i];
        if (e->key == k) {
            return e;
        }
    }
    return 0;
}
