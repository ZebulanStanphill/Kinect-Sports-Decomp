typedef struct Node {
    struct Node *next;
    struct Node *prev;
    unsigned int key;
} Node;
typedef struct { Node *head; } List;
typedef struct {
    int pad0;
    List list;
    char pad8[0x44 - 8];
    Node **vec;
} Hash;
typedef struct { Node *it; unsigned char ok; } Pairib;
extern void fn_827DC9B8(Hash *h, Node *plist, Node *where, int bucket);
extern int fn_827E0250(Hash *h, unsigned int *key);
extern void fn_827E0320(List *list, Node *where, List *right, Node *first, Node *last, int n);
extern void fn_827E0D30(Hash *h);

Pairib *fn_827E0FF0(Pairib *ret, Hash *h, unsigned int *key, Node *plist)
{
    Node **vec;
    Node *where;
    int bucket = fn_827E0250(h, key);
    vec = h->vec;
    if (vec[2 * bucket] == h->list.head)
        where = h->list.head;
    else
        where = vec[2 * bucket + 1]->next;
    while (where != vec[2 * bucket]) {
        where = where->prev;
        if (!(*key < where->key)) {
            where = where->next;
            break;
        }
    }
    if (where != plist->next)
        fn_827E0320(&h->list, where, &h->list, plist, plist->next, 1);
    fn_827DC9B8(h, plist, where, bucket);
    fn_827E0D30(h);
    ret->it = plist;
    ret->ok = 1;
    return ret;
}
