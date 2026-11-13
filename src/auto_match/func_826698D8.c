/* std::_Tree<Traits>::_Erase(_Nodeptr) from Visual C++ 2010's <xtree>, built
   without optimisation: frees a subtree recursively. The node accessors are
   out-of-line calls: fn_82F953A8 is _Isnil, fn_82F953B8 _Right, fn_8265D5A8
   _Left (folded with addressof, both return their argument), fn_82F92218
   _Myval; fn_826686C8 destroys a value and fn_82668E40 frees a node. */
typedef struct Node_826698D8 Node_826698D8;

typedef struct Tree_826698D8 {
    char pad0[0xc];
    char alnod;
    char alval;
} Tree_826698D8;

extern char *fn_82F953A8(Node_826698D8 *node);
extern Node_826698D8 **fn_82F953B8(Node_826698D8 *node);
extern Node_826698D8 **fn_8265D5A8(void *node);
extern void *fn_82F92218(Node_826698D8 *node);
extern void fn_826686C8(char *alval, void *value);
extern void fn_82668E40(char *alnod, Node_826698D8 *node, unsigned int count);

void fn_826698D8(Tree_826698D8 *self, Node_826698D8 *root)
{
    Node_826698D8 *p;

    for (p = root; !*fn_82F953A8(p); root = p) {
        fn_826698D8(self, *fn_82F953B8(p));
        p = *fn_8265D5A8(p);
        fn_826686C8(&self->alval, fn_8265D5A8(fn_82F92218(root)));
        fn_82668E40(&self->alnod, root, 1);
    }
}
