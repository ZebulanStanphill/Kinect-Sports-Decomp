typedef struct Node_827E0438 Node_827E0438;
struct Node_827E0438 {
    Node_827E0438 *next;
    Node_827E0438 *prev;
};
typedef struct Bucket_827E0438 {
    Node_827E0438 *first;
    Node_827E0438 *last;
} Bucket_827E0438;
typedef struct Hash_827E0438 {
    int pad0;
    Node_827E0438 *end;             /* 0x04 */
    char pad8[0x3c];
    Bucket_827E0438 *buckets;       /* 0x44 */
} Hash_827E0438;

void fn_827E0438(Hash_827E0438 *self, Node_827E0438 *node, unsigned int index)
{
    Bucket_827E0438 *b = &self->buckets[index];

    if (b->last == node) {
        if (b->first == node) {
            b->first = self->end;
            self->buckets[index].last = self->end;
        } else {
            b->last = node->prev;
        }
    } else if (b->first == node) {
        b->first = node->next;
    }
}
