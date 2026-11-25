typedef struct Node_82CF0BD0 Node_82CF0BD0;

struct Node_82CF0BD0 {
    char pad0[0x30];
    Node_82CF0BD0 **children; /* 0x30 */
    int numChildren;          /* 0x34 */
    char pad38[0x48 - 0x38];
    Node_82CF0BD0 *parent; /* 0x48 */
    char pad4c[0x50 - 0x4c];
    unsigned int flags; /* 0x50: bit 0 = expanded */
};

typedef struct Moves_82CF0BD0 {
    unsigned char previous; /* 0x0 */
    unsigned char next;     /* 0x1 */
    unsigned char collapse; /* 0x2 */
    unsigned char expand;   /* 0x3 */
} Moves_82CF0BD0;

Node_82CF0BD0 *fn_82CF0BD0(Moves_82CF0BD0 *moves, Node_82CF0BD0 *node)
{
    Node_82CF0BD0 *parent;
    Node_82CF0BD0 *current;
    Node_82CF0BD0 **children;
    unsigned char found;
    int count;
    int i;

    if (node == 0) {
        return 0;
    }
    if (moves->previous) {
        parent = node->parent;
        children = parent->children;
        current = children[0];
        if (current != node) {
            count = parent->numChildren;
            for (i = 0; i < count; i++) {
                if (children[i] == node) {
                    current = children[i - 1];
                    break;
                }
            }
            while (current->numChildren > 0 && (current->flags & 1) != 0) {
                current = current->children[current->numChildren - 1];
            }
            node = current;
        } else if (parent->parent != 0) {
            node = parent;
        }
    }
    if (moves->next) {
        current = node;
        if (node->numChildren > 0 && (node->flags & 1) != 0) {
            node = node->children[0];
        } else {
            found = 0;
            do {
                parent = current->parent;
                i = 0;
                count = parent->numChildren;
                if (i < count) {
                    children = parent->children;
                    for (; i < count; i++) {
                        if (children[i] == current && i < count - 1) {
                            found = 1;
                            node = children[i + 1];
                            break;
                        }
                    }
                }
                if (found || parent->parent == 0) {
                    break;
                }
                current = parent;
            } while (1);
        }
    }
    if (moves->collapse) {
        if ((node->flags & 1) != 0) {
            node->flags &= ~1;
        } else {
            parent = node->parent;
            if (parent->parent != 0) {
                parent->flags &= ~1;
                node = parent;
            }
        }
    }
    if (moves->expand) {
        if ((node->flags & 1) == 0) {
            node->flags |= 1;
        }
        node->flags |= 1;
    }
    return node;
}
