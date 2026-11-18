typedef struct Node_8302CF58 Node_8302CF58;

typedef struct NodeVt_8302CF58 {
    void *slot0;
    void (*destroy)(Node_8302CF58 *node); /* 0x4 */
} NodeVt_8302CF58;

struct Node_8302CF58 {
    NodeVt_8302CF58 *vt; /* 0x0 */
    unsigned int key;    /* 0x4 */
    Node_8302CF58 *next; /* 0x8 */
};

typedef struct Table_8302CF58 {
    Node_8302CF58 *buckets[31]; /* 0x00 */
    unsigned int count;         /* 0x7c */
} Table_8302CF58;

typedef struct Self_8302CF58 {
    char pad0[0x8c];
    Table_8302CF58 table;  /* 0x08c */
    Node_8302CF58 *shared; /* 0x10c */
    char pad110[0xf];
    unsigned char flags; /* 0x11f */
} Self_8302CF58;

extern Node_8302CF58 *fn_8302B6E0(Table_8302CF58 *table, unsigned int key);
extern Node_8302CF58 *fn_8302C9C8(Self_8302CF58 *self, int arg);
extern int fn_83034DB0(unsigned int key, Self_8302CF58 *self);

static __forceinline Node_8302CF58 *Insert(Table_8302CF58 *table, unsigned int key, Node_8302CF58 *node)
{
    unsigned int bucket;

    node->key = key;
    bucket = key % 31;
    node->next = table->buckets[bucket];
    table->buckets[bucket] = node;
    table->count++;
    return node;
}

Node_8302CF58 *fn_8302CF58(Self_8302CF58 *self, int arg, unsigned int key)
{
    Node_8302CF58 *result = 0;
    Table_8302CF58 *table;

    if ((self->flags & 1) != 0) {
        if (self->shared == 0) {
            self->shared = fn_8302C9C8(self, arg);
        }
        if (self->shared != 0) {
            result = self->shared;
        }
    } else {
        Node_8302CF58 *found;

        table = &self->table;
        found = fn_8302B6E0(table, key);
        if (found == 0) {
            result = fn_8302C9C8(self, arg);
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
