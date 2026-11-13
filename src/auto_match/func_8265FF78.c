/* std::_Tree<Traits>::_Erase(_Nodeptr) from Visual C++ 2010's <xtree>, built
   without optimisation: frees a subtree recursively. The node accessors are
   out-of-line calls: fn_82F953A8 is _Isnil, fn_82F953B8 _Right, fn_8265D5A8
   _Left (folded with addressof, both return their argument), fn_82F92218
   _Myval; fn_82661A88 destroys a value and fn_82660558 frees a node. */
typedef struct Node_8265FF78 Node_8265FF78;

typedef struct Tree_8265FF78 {
    char pad0[0xc];
    char alnod;
    char alval;
} Tree_8265FF78;

extern char *fn_82F953A8(Node_8265FF78 *node);
extern Node_8265FF78 **fn_82F953B8(Node_8265FF78 *node);
extern Node_8265FF78 **fn_8265D5A8(void *node);
extern void *fn_82F92218(Node_8265FF78 *node);
extern void fn_82661A88(char *alval, void *value);
extern void fn_82660558(char *alnod, Node_8265FF78 *node, unsigned int count);

void fn_8265FF78(Tree_8265FF78 *self, Node_8265FF78 *root)
{
    Node_8265FF78 *p;

    for (p = root; !*fn_82F953A8(p); root = p) {
        fn_8265FF78(self, *fn_82F953B8(p));
        p = *fn_8265D5A8(p);
        fn_82661A88(&self->alval, fn_8265D5A8(fn_82F92218(root)));
        fn_82660558(&self->alnod, root, 1);
    }
}
