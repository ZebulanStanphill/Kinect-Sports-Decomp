typedef struct Node_8302B580 {
    int padding;
    unsigned int key;           // 0x04
    struct Node_8302B580 *next; // 0x08
} Node_8302B580;

typedef struct Table_8302B580 {
    Node_8302B580 *buckets[31]; // 0x00
    unsigned int count;         // 0x7c
} Table_8302B580;

extern char lbl_83264EA8[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern Node_8302B580 *fn_8302B6E0(Table_8302B580 *self, unsigned int key);

void fn_8302B580(Table_8302B580 *self, unsigned int key, Node_8302B580 *node)
{
    RtlEnterCriticalSection(lbl_83264EA8);
    if (!fn_8302B6E0(self, key)) {
        unsigned int bucket;
        node->key = key;
        bucket = key % 31;
        node->next = self->buckets[bucket];
        self->buckets[bucket] = node;
        self->count++;
        RtlLeaveCriticalSection(lbl_83264EA8);
        return;
    } else {
        RtlLeaveCriticalSection(lbl_83264EA8);
        return;
    }
}
