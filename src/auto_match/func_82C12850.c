typedef struct Owner Owner;
typedef struct Link {
    Owner *owner;
    struct Node *next;
} Link;
typedef struct Node {
    void *buf;
    int f4, f8, fc, f10;
    Link *link;
} Node;
struct Owner {
    char pad[0x34];
    int size;
    int p38, p3c;
    int heap;
    Node *head;
    int count;
};
extern int fn_82C10AD0(int heap, int tag, int size, void *out);
extern void fn_82C10B28(int heap, int tag, void *pp);

int fn_82C12850(Owner *o)
{
    int hr;
    Node *node = 0;
    Link *link = 0;

    hr = fn_82C10AD0(o->heap, 3, 0x18, &node);
    if (hr >= 0) {
        hr = fn_82C10AD0(o->heap, 3, o->size, node);
        if (hr >= 0) {
            hr = fn_82C10AD0(o->heap, 3, 8, &link);
            if (hr >= 0) {
                node->link = link;
                link->owner = o;
                link->next = o->head;
                o->head = node;
                o->count++;
                return hr;
            }
        }
    }
    if (node != 0) {
        if (node->buf != 0)
            fn_82C10B28(o->heap, 3, &node->buf);
        fn_82C10B28(o->heap, 3, &node);
    }
    if (link != 0)
        fn_82C10B28(o->heap, 3, &link);
    return hr;
}
