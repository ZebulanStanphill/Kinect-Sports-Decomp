typedef struct Node_8302CE08 Node_8302CE08;

typedef struct NodeVt_8302CE08 {
    void *slot0;
    void (*destroy)(Node_8302CE08 *node); /* 0x4 */
} NodeVt_8302CE08;

struct Node_8302CE08 {
    NodeVt_8302CE08 *vt; /* 0x0 */
    unsigned int key;    /* 0x4 */
    Node_8302CE08 *next; /* 0x8 */
};

typedef struct Table_8302CE08 {
    Node_8302CE08 *buckets[31]; /* 0x00 */
    unsigned int count;         /* 0x7c */
} Table_8302CE08;

typedef struct Self_8302CE08 {
    char pad0[0x8c];
    Table_8302CE08 table;  /* 0x08c */
    Node_8302CE08 *shared; /* 0x10c */
    char pad110[0xf];
    unsigned char flags; /* 0x11f */
} Self_8302CE08;

extern unsigned int lbl_831BC768;

extern void *fn_82FA5060(unsigned int heap, unsigned int size);
extern Node_8302CE08 *fn_8300CE88(void *memory);
extern Node_8302CE08 *fn_8302B6E0(Table_8302CE08 *table, unsigned int key);
extern int fn_83034DB0(unsigned int key, Self_8302CE08 *self);

static __forceinline Node_8302CE08 *CreateNode(void)
{
    void *memory = fn_82FA5060(lbl_831BC768, 0x10);

    if (memory != 0) {
        return fn_8300CE88(memory);
    }
    return 0;
}

static __forceinline Node_8302CE08 *Insert(Table_8302CE08 *table, unsigned int key, Node_8302CE08 *node)
{
    unsigned int bucket;

    node->key = key;
    bucket = key % 31;
    node->next = table->buckets[bucket];
    table->buckets[bucket] = node;
    table->count++;
    return node;
}

Node_8302CE08 *fn_8302CE08(Self_8302CE08 *self, unsigned int key)
{
    Node_8302CE08 *result = 0;
    Table_8302CE08 *table;

    if ((self->flags & 1) != 0) {
        if (self->shared == 0) {
            self->shared = CreateNode();
        }
        if (self->shared != 0) {
            result = self->shared;
        }
    } else {
        Node_8302CE08 *found;

        table = &self->table;
        found = fn_8302B6E0(table, key);
        if (found == 0) {
            result = CreateNode();
            if (result == 0) {
                return 0;
            }
            if (fn_83034DB0(key, self) != 1) {
                result->vt->destroy(result);
                return 0;
            }
            Insert(table, key, result);
        } else {
            result = found;
        }
    }
    return result;
}
