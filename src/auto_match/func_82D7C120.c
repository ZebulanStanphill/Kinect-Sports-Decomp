typedef struct Node_82D7C120 Node_82D7C120;
typedef struct {
    void *value;
    Node_82D7C120 *other;
} Link_82D7C120;
struct Node_82D7C120 {
    char pad[0x50];
    Link_82D7C120 *links;
    int count;
};

void *fn_82D7C120(Node_82D7C120 *a, Node_82D7C120 *b)
{
    Node_82D7C120 *s;
    int i;

    if (a->count <= b->count) {
        s = a;
    } else {
        s = b;
        b = a;
    }
    i = 0;
    if (0 < s->count) {
        Node_82D7C120 **p = &s->links->other;
        do {
            if (*p == b) {
                return s->links[i].value;
            }
            i++;
            p += 2;
        } while (i < s->count);
    }
    return 0;
}
