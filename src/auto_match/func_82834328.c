typedef struct Node { struct Node *left; struct Node *parent; struct Node *right; int key[5]; char color; char isnil; } Node;
typedef struct Tree { int comp; Node *head; } Tree;
extern unsigned char fn_828301D0(Tree *t, int *a, int b);

Node *fn_82834328(Tree *t, int key)
{
    Node *where = t->head;
    Node *p = t->head->parent;
    while (!p->isnil) {
        if (fn_828301D0(t, p->key, key)) {
            p = p->right;
        } else {
            where = p;
            p = p->left;
        }
    }
    return where;
}
