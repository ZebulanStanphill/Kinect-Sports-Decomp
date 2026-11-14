typedef struct Key_830196F8 {
    unsigned int a;
    unsigned int b;
} Key_830196F8;

typedef struct Node_830196F8 {
    struct Node_830196F8 *next;
    Key_830196F8 key;
} Node_830196F8;

typedef struct Table_830196F8 {
    void *allocator;
    Node_830196F8 *buckets[193];  /* 0x4 */
    int count;                    /* 0x308 */
} Table_830196F8;

extern void fn_82FA5190(void *allocator, void *p);

static __forceinline unsigned char KeyEqual(const Key_830196F8 *x, const Key_830196F8 *y)
{
    return x->a == y->a && x->b == y->b;
}

void fn_830196F8(Table_830196F8 *t, Key_830196F8 key)
{
    unsigned int i = (key.a + key.b) % 193;
    Node_830196F8 *n = t->buckets[i];
    Node_830196F8 *prev = 0;
    while (n != 0) {
        if (KeyEqual(&n->key, &key))
            break;
        prev = n;
        n = n->next;
    }
    if (n != 0) {
        if (prev != 0)
            prev->next = n->next;
        else
            t->buckets[i] = n->next;
        fn_82FA5190(t->allocator, n);
        t->count--;
    }
}
