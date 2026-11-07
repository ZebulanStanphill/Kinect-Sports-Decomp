typedef struct Node_8302B6E0 {
    int unk0;
    unsigned int key;
    struct Node_8302B6E0 *next;
} Node_8302B6E0;

Node_8302B6E0 *fn_8302B6E0(Node_8302B6E0 **buckets, unsigned int key)
{
    Node_8302B6E0 *n = buckets[key % 31];
    while (n != 0) {
        if (n->key == key) {
            return n;
        }
        n = n->next;
    }
    return 0;
}
