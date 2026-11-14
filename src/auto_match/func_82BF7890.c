typedef struct Entry_82BF7890 {
    char pad0[0xc];
    int value;
    struct Entry_82BF7890 *next;
    unsigned int hash;
} Entry_82BF7890;

typedef struct Table_82BF7890 {
    char pad0[8];
    Entry_82BF7890 **buckets;
    unsigned int size;
} Table_82BF7890;

extern Entry_82BF7890 *fn_82BF74D0(Table_82BF7890 *t, const void *key, unsigned int *bucket, unsigned int *hash);
extern int fn_82BF72C8(Table_82BF7890 *t, unsigned int size, int flag);
extern Entry_82BF7890 *fn_82BF77B8(Table_82BF7890 *t, const void *key);

int fn_82BF7890(Table_82BF7890 *t, const void *key, int value)
{
    unsigned int bucket;
    unsigned int hash;
    Entry_82BF7890 *e;
    if (t == 0)
        return 0;
    e = fn_82BF74D0(t, key, &bucket, &hash);
    if (e == 0) {
        if (t->buckets == 0 && fn_82BF72C8(t, t->size, 1) == 0)
            return 0;
        e = fn_82BF77B8(t, key);
        if (e == 0)
            return 0;
        {
            unsigned int i = bucket;
            e->hash = hash;
            e->next = t->buckets[i];
            t->buckets[i] = e;
        }
    }
    e->value = value;
    return 1;
}
