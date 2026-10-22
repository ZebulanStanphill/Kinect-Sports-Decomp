typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
    char pad[0x10 - 0xC];
    char color;
    char isnil;
} Node;

typedef struct Tree {
    int pad0;
    Node *head;
    unsigned int size;
} Tree;

extern Node *fn_822B45E8(Tree *t, Node *root, Node *where);

static Node *Min(Node *p)
{
    while (!p->left->isnil)
        p = p->left;
    return p;
}

static Node *Max(Node *p)
{
    while (!p->right->isnil)
        p = p->right;
    return p;
}

void fn_822B4448(Tree *this_, Tree *right)
{
    Node *head = this_->head;
    head->parent = fn_822B45E8(this_, right->head->parent, head);
    this_->size = right->size;
    if (!this_->head->parent->isnil) {
        this_->head->left = Min(this_->head->parent);
        this_->head->right = Max(this_->head->parent);
    } else {
        this_->head->left = this_->head;
        this_->head->right = this_->head;
    }
}
