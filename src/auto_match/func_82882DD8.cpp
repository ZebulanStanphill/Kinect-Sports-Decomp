struct Node_82882DD8 {
    Node_82882DD8 *next;
    Node_82882DD8 *prev;
};

struct List_82882DD8 {
    int pad0[2];
    Node_82882DD8 head;
};

struct Iter_82882DD8 {
    Node_82882DD8 *node;
};

struct Tag_82882DD8 {
};

extern "C" void fn_82881290(Iter_82882DD8 *first, Iter_82882DD8 *last, Tag_82882DD8 tag);

extern "C" void fn_82882DD8(List_82882DD8 *self)
{
    Node_82882DD8 *head = &self->head;
    Node_82882DD8 *node;
    Iter_82882DD8 last;
    Iter_82882DD8 first;

    last.node = head;
    first.node = head->next;
    fn_82881290(&first, &last, Tag_82882DD8());
    node = head->next;
    while (node != head) {
        Node_82882DD8 *cur = node;
        node = node->next;
        cur->next = 0;
        cur->prev = 0;
    }
    head->next = head;
    head->prev = head;
}
