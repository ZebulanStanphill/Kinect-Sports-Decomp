typedef struct Node_8301A9D8 {
    struct Node_8301A9D8 *next;
    unsigned int key;
    int value;
} Node_8301A9D8;

typedef struct Table_8301A9D8 {
    int header[10];
    Node_8301A9D8 *buckets[193];
} Table_8301A9D8;

extern int fn_83034AC0(int a, int b, int c, int d, int e);

static __forceinline int *Find_8301A9D8(Table_8301A9D8 *t, unsigned int key)
{
    Node_8301A9D8 *n = t->buckets[key % 193];
    while (n != 0) {
        if (n->key == key)
            return &n->value;
        n = n->next;
    }
    return 0;
}

int fn_8301A9D8(Table_8301A9D8 *t, unsigned int key, int a, int b, int c, int d)
{
    int *v = Find_8301A9D8(t, key);
    if (v == 0)
        return 2;
    fn_83034AC0(*v, a, b, c, d);
    return 1;
}
