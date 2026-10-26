typedef struct Node Node;
struct Node { char pad[0x70]; Node *prev; Node *next; };
typedef struct { Node *head; } Sub;
typedef struct { char pad[0xaf4]; Sub s; char pad2[8]; unsigned int flags; } List;

void fn_8269AD40(Node *n, List *l)
{
    Sub *s = &l->s;
    if (s->head) {
        s->head->next = n;
        n->prev = s->head;
    }
    s->head = n;
    l->flags |= 0x400;
}
