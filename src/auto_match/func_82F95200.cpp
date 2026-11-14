// find() of a red-black tree in the library at 0x82F8E8D0 (an older standard
// library, built without optimization): lower_bound(key), then end() unless
// the node found has a key not greater than the one searched for. The same
// shape as func_8265F9A0.cpp, with this library's two-word iterator.
//
// lower_bound() and end() return an iterator through a hidden pointer, which
// the original loads before `this`: only a member call does that. end() is
// folded with other trees' (see func_82F96768.cpp), so both keep their fn_
// names: score with --alias for the two member names. The class and its
// iterator are placeholders named after this function.
struct Node_82F95200;
struct Tree_82F95200;

struct Iter_82F95200 {
    Node_82F95200 *node;
    const Tree_82F95200 *cont;

    Iter_82F95200() {}
};

struct Tree_82F95200 {
    char comp;
    char alnod;
    char alptr;
    Node_82F95200 *head;
    unsigned int size;

    Iter_82F95200 lower_bound(const unsigned int *key);
    Iter_82F95200 end();
};

extern "C" {
unsigned char fn_82F921A0(const Iter_82F95200 *a, const Iter_82F95200 &b);
void *fn_82F93A00(const Iter_82F95200 *it);
const unsigned int *fn_82F919C8(void *node);
unsigned char fn_8225E7A0(void *comp, const unsigned int *a, const unsigned int *b);
}

extern "C" Iter_82F95200 fn_82F95200(Tree_82F95200 *self, const unsigned int *key)
{
    Iter_82F95200 where = self->lower_bound(key);
    return fn_82F921A0(&where, self->end())
               || fn_8225E7A0(self, key, fn_82F919C8(fn_82F93A00(&where)))
           ? self->end() : where;
}
