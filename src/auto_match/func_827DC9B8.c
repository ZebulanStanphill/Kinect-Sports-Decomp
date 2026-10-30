typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct Iter { Node *p; } Iter;
typedef struct Hash { int a; Node *head; char pad[0x44 - 8]; Iter *vec; } Hash;

void fn_827DC9B8(Hash *h, Node *plist, Node *where, unsigned int b)
{
    Iter *v = &h->vec[2 * b];
    if (v->p == h->head) {
        v->p = plist;
        h->vec[2 * b + 1].p = plist;
    } else if (v->p == where) {
        v->p = plist;
    } else if ((v[1].p = v[1].p->next) != plist) {
        Iter *l = &h->vec[2 * b + 1];
        l->p = l->p->prev;
    }
}
