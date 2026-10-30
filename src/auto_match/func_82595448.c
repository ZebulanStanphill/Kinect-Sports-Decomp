typedef struct Node Node;
struct Node {
    Node *left;
    Node *parent;
    Node *right;
    unsigned char value[0x8];
    unsigned char color;
    unsigned char isnil;
};

typedef struct Tree {
    int comp;
    Node *head;
    unsigned int size;
} Tree;

extern Tree lbl_83297004;

void fn_82595448(Node *where)
{
    Node *p = where->right;
    where->right = p->left;
    if (!p->left->isnil) {
        p->left->parent = where;
    }
    p->parent = where->parent;
    if (where == lbl_83297004.head->parent) {
        lbl_83297004.head->parent = p;
    } else if (where == where->parent->left) {
        where->parent->left = p;
    } else {
        where->parent->right = p;
    }
    p->left = where;
    where->parent = p;
}
