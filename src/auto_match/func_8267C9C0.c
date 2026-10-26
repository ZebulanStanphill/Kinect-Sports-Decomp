typedef struct Link Link;
struct Link {
    void *data;
    Link *next;
    Link *prev;
};

typedef struct {
    char pad[0x20];
    Link *head;
    Link *tail;
} List;

void fn_8267C9C0(List *l, Link *n)
{
    if (n->prev != 0) {
        n->prev->next = n->next;
    } else {
        l->head = n->next;
    }
    if (n->next != 0) {
        n->next->prev = n->prev;
    } else {
        l->tail = n->prev;
    }
}
