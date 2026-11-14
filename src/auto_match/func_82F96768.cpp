// _Tidy of a red-black tree in the library at 0x82F8E8D0 (an older standard
// library, built without optimization): erase(begin(), end()), then destroy
// the head node's three links and free it. Called by the tree's destructor,
// func_82F96740.c.
//
// begin() and end() return an iterator through a hidden pointer, which the
// original loads before `this`: only a member call does that. The linker
// folded both with another tree's (func_82F92030.c is that tree's _Tidy and
// calls the same two addresses), so they keep the names fn_82F91650 and
// fn_82F94750: objects.json renames this unit's two references
// ("pool_aliases"). erase(first, last) is this tree's own (func_82F96848).
// The class and its iterator are placeholders named after this function.
struct Node_82F96768;
struct Tree_82F96768;

struct Iter_82F96768 {
    Node_82F96768 *node;
    const Tree_82F96768 *cont;
};

struct Tree_82F96768 {
    char comp;
    char alnod;
    char alptr;
    Node_82F96768 *head;
    unsigned int size;

    Iter_82F96768 begin();
    Iter_82F96768 end();
    Iter_82F96768 erase(Iter_82F96768 first, Iter_82F96768 last);
};

extern "C" {
// The head node's left, parent and right links.
Node_82F96768 **fn_8265D5A8(Node_82F96768 *node);
Node_82F96768 **fn_82F92208(Node_82F96768 *node);
Node_82F96768 **fn_82F953B8(Node_82F96768 *node);
// The pointer allocator's destroy and the node allocator's deallocate.
void fn_82F95C50(char *alptr, Node_82F96768 **link);
void fn_82F95C18(char *alnod, Node_82F96768 *node, unsigned int count);
}

extern "C" void fn_82F96768(Tree_82F96768 *self)
{
    self->erase(self->begin(), self->end());
    fn_82F95C50(&self->alptr, fn_8265D5A8(self->head));
    fn_82F95C50(&self->alptr, fn_82F92208(self->head));
    fn_82F95C50(&self->alptr, fn_82F953B8(self->head));
    fn_82F95C18(&self->alnod, self->head, 1);
    self->head = 0;
    self->size = 0;
}
