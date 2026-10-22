typedef struct Item { int pad[5]; int key; } Item;
typedef struct Vec { Item **data; unsigned int count; } Vec;
extern int fn_82698C28();
extern unsigned int fn_82698C48(Vec *v, int lo, unsigned int hi, int *key, int (*cmp)());

unsigned int fn_826994A8(Vec *v, int key)
{
    unsigned int i;
    int k = key;

    i = fn_82698C48(v, 0, v->count, &k, fn_82698C28);
    if (i >= v->count || v->data[i]->key != key) {
        i = 0xffffffff;
    }
    return i;
}
