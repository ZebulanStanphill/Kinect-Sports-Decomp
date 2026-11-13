typedef struct Node_82520360 {
    struct Node_82520360 *prev;
    struct Node_82520360 *next;
    unsigned int count;
    void *data;
} Node_82520360;

typedef struct List_82520360 {
    Node_82520360 *head;
    long pending;
} List_82520360;

typedef struct Self_82520360 {
    void *source;
    void *f4;
} Self_82520360;

long _InterlockedDecrement(long volatile *p);

extern void *fn_827D5070(void *source);
extern unsigned int fn_8251FBA8(void *data);
extern Node_82520360 *fn_82522D98(unsigned int size);
extern void fn_822315A0(void *p);

void fn_82520360(Self_82520360 *self, List_82520360 *list)
{
    void *data;
    unsigned int size;
    Node_82520360 *node;
    Node_82520360 *head;
    Node_82520360 *next;

    data = fn_827D5070(self->source);
    if (data != 0) {
        size = fn_8251FBA8(data);
        node = fn_82522D98(0x10);
        node->prev = 0;
        node->next = 0;
        node->count = size / 0x44;
        node->data = data;
        head = list->head;
        if (head != 0) {
            next = head->next;
            head->next = node;
            node->prev = head;
            node->next = next;
            if (next != 0) {
                next->prev = node;
            }
        } else {
            list->head = node;
        }
    }
    _InterlockedDecrement(&list->pending);
    if (self->f4 != 0) {
        fn_822315A0(self->f4);
    }
}
