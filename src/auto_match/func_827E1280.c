typedef struct Node { struct Node *next; } Node;
typedef struct { Node *first; Node *second; } Pair;
typedef struct { Node *ptr; } Iter;
extern void fn_827E0580(Pair *out, void *tree, void *key);
extern void fn_827E1118(Iter *out, void *tree, Node *first, Node *last);

unsigned int fn_827E1280(void *tree, void *key)
{
    Pair where;
    unsigned int n;
    Node *p;
    fn_827E0580(&where, tree, key);
    n = 0;
    for (p = where.first; p != where.second; p = p->next) {
        n++;
    }
    fn_827E1118((Iter *)&where, tree, where.first, where.second);
    return n;
}
