// std::map<int, T>::operator[] in the XLip library (Visual C++ 2010's standard
// library built without inlining): lower_bound(key); insert a pair (key, 0)
// when the node found is end() or has a greater key; return its mapped value.
//
// lower_bound(), end(), insert() and the pair constructor are out-of-line
// calls. The first three return an iterator through a hidden pointer, which
// the original loads before `this`: only a member call does that. All keep
// their fn_ names (end() is folded with other trees'): score with --alias for
// the member names, as func_8265F9A0.cpp does. insert() takes a
// const_iterator by value, so the iterator is copied (sliced) into a
// temporary first. The classes are placeholders named after this function.
struct ConstIter_8265F798 {
    void *node;

    ConstIter_8265F798() {}
};

struct Iter_8265F798 : ConstIter_8265F798 {
    Iter_8265F798() {}
};

struct Pair_8265F798 {
    int first;
    int second;

    Pair_8265F798(const int &key, const int &value);
};

struct Tree_8265F798 {
    int comp;
    void *head;
    unsigned int size;

    Iter_8265F798 lower_bound(const int *key);
    Iter_8265F798 end();
    Iter_8265F798 insert(ConstIter_8265F798 where, const Pair_8265F798 &value);
};

extern "C" {
unsigned char fn_82669808(const Iter_8265F798 *a, const Iter_8265F798 &b);
void *fn_826689B8(const Iter_8265F798 *it);
const int *fn_82F919C8(void *node);
unsigned char fn_8225E7A0(void *comp, const int *a, const int *b);
Pair_8265F798 *fn_826666A0(const Iter_8265F798 *it);
}

extern "C" int *fn_8265F798(Tree_8265F798 *self, const int *key)
{
    Iter_8265F798 where = self->lower_bound(key);
    if (fn_82669808(&where, self->end())
        || fn_8225E7A0(self, key, fn_82F919C8(fn_826689B8(&where)))) {
        where = self->insert(where, Pair_8265F798(*key, 0));
    }
    return &fn_826666A0(&where)->second;
}
