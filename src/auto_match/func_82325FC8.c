typedef struct Node_82325FC8 Node_82325FC8;
struct Node_82325FC8 {
    Node_82325FC8 *left;
};

typedef struct Iter_82325FC8 {
    Node_82325FC8 *ptr;
} Iter_82325FC8;

typedef struct Tree_82325FC8 {
    int unk0;
    Node_82325FC8 *head;
} Tree_82325FC8;

typedef struct Obj_82325FC8 {
    void *vtable;
    int unk4[0x32];
    Tree_82325FC8 tree;
} Obj_82325FC8;

extern char lbl_821B02E8[];
extern Iter_82325FC8 *fn_82290718(Iter_82325FC8 *result, Tree_82325FC8 *tree, Iter_82325FC8 first, Iter_82325FC8 last);
extern void fn_8265CA20(void *p);
extern void fn_822C87C8(Obj_82325FC8 *self);

static __forceinline void Tree_destroy_82325FC8(Tree_82325FC8 *tree)
{
    Iter_82325FC8 result;
    Iter_82325FC8 first;
    Iter_82325FC8 last;

    last.ptr = tree->head;
    first.ptr = tree->head->left;
    fn_82290718(&result, tree, first, last);
    fn_8265CA20(tree->head);
}

void fn_82325FC8(Obj_82325FC8 *self)
{
    self->vtable = lbl_821B02E8;
    Tree_destroy_82325FC8(&self->tree);
    fn_822C87C8(self);
}
