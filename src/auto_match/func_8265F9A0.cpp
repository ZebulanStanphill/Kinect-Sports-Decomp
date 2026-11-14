// find() of a red-black tree keyed by unsigned int in the XLip library (Visual
// C++ 2010's standard library built without inlining): lower_bound(key), then
// end() unless the node found has a key not greater than the one searched for.
//
// lower_bound() and end() return an iterator through a hidden pointer, which
// the original loads before `this`: only a member call does that. end() is
// folded with other trees' (see func_82660020.cpp), so both keep their fn_
// names: score with --alias for the two member names (as func_82660020's
// "pool_aliases" do). The class and its iterator are placeholders named after
// this function.
struct Iter_8265F9A0 {
    void *node;

    Iter_8265F9A0() {}
};

struct Tree_8265F9A0 {
    int comp;
    void *head;
    unsigned int size;

    Iter_8265F9A0 lower_bound(const unsigned int *key);
    Iter_8265F9A0 end();
};

extern "C" {
unsigned char fn_82669808(const Iter_8265F9A0 *a, const Iter_8265F9A0 &b);
void *fn_826689B8(const Iter_8265F9A0 *it);
const unsigned int *fn_82F919C8(void *node);
unsigned char fn_8225E7A0(void *comp, const unsigned int *a, const unsigned int *b);
}

extern "C" Iter_8265F9A0 fn_8265F9A0(Tree_8265F9A0 *self, const unsigned int *key)
{
    Iter_8265F9A0 where = self->lower_bound(key);
    return fn_82669808(&where, self->end())
               || fn_8225E7A0(self, key, fn_82F919C8(fn_826689B8(&where)))
           ? self->end() : where;
}
