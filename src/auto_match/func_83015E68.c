extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct Node_83015E68 { int pad[2]; struct Node_83015E68 *next; unsigned int key; } Node_83015E68;
typedef struct Table_83015E68 { int cs[7]; Node_83015E68 *buckets[0xc1]; int count; } Table_83015E68;

void fn_83015E68(Table_83015E68 *t, Node_83015E68 *n)
{
    Node_83015E68 **b;
    unsigned int i;
    RtlEnterCriticalSection(t);
    b = t->buckets;
    i = n->key % 0xc1;
    n->next = b[i];
    b[i] = n;
    t->count++;
    RtlLeaveCriticalSection(t);
}
