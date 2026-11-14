// clear() of a red-black tree in the XLip library (Visual C++ 2010's standard
// library built without inlining): erase(begin(), end()).
//
// begin() and end() return an iterator through a hidden pointer, which the
// original loads before `this`: only a member call does that. The linker
// folded both with another tree's (func_82668AF0 is that tree's clear and
// calls the same two addresses), so they keep the names fn_8265F888 and
// fn_8265F8D8: objects.json renames this unit's two references
// ("pool_aliases"). erase(first, last) is this tree's own (func_826602D8).
// The class and its iterators are placeholders named after this function.
struct Node_82660020;

struct ConstIter_82660020 {
    Node_82660020 *node;
};

struct Iter_82660020 : ConstIter_82660020 {
};

struct Tree_82660020 {
    Iter_82660020 begin();
    Iter_82660020 end();
    Iter_82660020 erase(ConstIter_82660020 first, ConstIter_82660020 last);
};

extern "C" void fn_82660020(Tree_82660020 *self)
{
    self->erase(self->begin(), self->end());
}
