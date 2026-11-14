typedef struct Link_82AF7548 {
    unsigned int prev;
    unsigned int next;
} Link_82AF7548;

typedef struct List_82AF7548 {
    int unk0;
    unsigned int head;
    void *begin;
    void *end;
} List_82AF7548;

unsigned char fn_82AF7548(List_82AF7548 *self)
{
    unsigned int head = self->head;
    Link_82AF7548 *first = (Link_82AF7548 *)(((head & 1) == 0 ? head : 0) & ~1u);
    unsigned int next = first->next;
    return ((next & 1) != 0 || next == 0) && self->begin == self->end;
}
