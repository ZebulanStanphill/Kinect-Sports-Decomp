typedef struct { int a[6]; } Elem_823D5E08;
typedef struct {
    Elem_823D5E08 first;
    Elem_823D5E08 second;
} Val_823D5E08;
typedef struct Node_823D5E08 Node_823D5E08;
struct Node_823D5E08 {
    Node_823D5E08 *left;
    Node_823D5E08 *parent;
    Node_823D5E08 *right;
    int pad[3];
    Val_823D5E08 val;
    char color;
    char isnil;
};
typedef struct {
    int pad;
    Node_823D5E08 *head;
    int size;
} Tree_823D5E08;

extern void fn_823D6298(Tree_823D5E08 *, Node_823D5E08 *);
extern void fn_82359C18(Elem_823D5E08 *);
extern void fn_8265CA20(void *);

void fn_823D5E08(Tree_823D5E08 *t)
{
    Node_823D5E08 *root = t->head->parent;
    Node_823D5E08 *p = root;
    for (; p->isnil == 0; root = p) {
        Val_823D5E08 *v;
        fn_823D6298(t, p->right);
        p = p->left;
        v = &root->val;
        fn_82359C18(&v->second);
        fn_82359C18(&v->first);
        fn_8265CA20(root);
    }
    t->head->parent = t->head;
    t->head->left = t->head;
    t->head->right = t->head;
    t->size = 0;
    fn_8265CA20(t->head);
}
