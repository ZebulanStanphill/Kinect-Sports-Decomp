typedef struct Node_827B5670 { unsigned key; int pad[3]; struct Node_827B5670 *child, *next; } Node_827B5670;

Node_827B5670 *fn_827B5670(Node_827B5670 *node, unsigned key)
{
    while (node) {
        Node_827B5670 *found;
        if (node->key == key) return node;
        found = fn_827B5670(node->child, key);
        if (found) return found;
        node = node->next;
    }
    return 0;
}
