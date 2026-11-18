/* link[0]: root of a tree head, link[5]: parent, link[6] and link[7]: children
   chosen by the key bits of the node's own address, most significant first */
typedef struct TrieNode_8268E320 {
    struct TrieNode_8268E320 *link[8];
} TrieNode_8268E320;

TrieNode_8268E320 *fn_8268E320(TrieNode_8268E320 *parent, TrieNode_8268E320 *node)
{
    unsigned int key;
    int slot;
    TrieNode_8268E320 *next;
    TrieNode_8268E320 *first;

    node->link[7] = 0;
    node->link[6] = 0;
    node->link[5] = 0;
    first = parent->link[0];
    if (first == 0) {
        parent->link[0] = node;
    } else {
        key = (unsigned int)node;
        next = first;
        for (;;) {
            parent = next;
            if (parent == node) {
                return parent;
            }
            slot = (key >> 31) + 6;
            key <<= 1;
            next = parent->link[slot];
            if (next == 0) {
                break;
            }
        }
        parent->link[slot] = node;
    }
    node->link[5] = parent;
    return 0;
}
