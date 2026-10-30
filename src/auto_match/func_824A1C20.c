typedef struct Node { struct Node *left; struct Node *parent; struct Node *right; char pad[0x19 - 12]; char isnil; } Node;
typedef struct Tree { int al; Node *head; } Tree;
extern Tree lbl_83292C80;

void fn_824A1C20(Node *where)
{
    Node *p = where->left;
    where->left = p->right;
    if (!p->right->isnil) {
        p->right->parent = where;
    }
    p->parent = where->parent;
    if (where == lbl_83292C80.head->parent) {
        lbl_83292C80.head->parent = p;
    } else if (where == where->parent->right) {
        where->parent->right = p;
    } else {
        where->parent->left = p;
    }
    p->right = where;
    where->parent = p;
}
