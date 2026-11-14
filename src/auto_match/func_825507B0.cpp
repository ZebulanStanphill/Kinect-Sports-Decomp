// std::_Tree<Traits>::_Insert(const_iterator, _Nodeptr) from Visual C++ 2010's
// <xtree>, for the std::set<Element_82550E48> of func_82550E48.cpp (really a
// std::map<std::string, int>; func_8254FD18.cpp and func_8258E568.cpp are its
// operator[]): links an allocated node in next to the hint _Where if it
// belongs there, and otherwise through _Linsert.
//
// The binary holds this function twice. func_82675040.cpp is the other copy,
// compiled without link-time code generation (its _Linsert still takes
// _Leftish), and symbols.txt gives the member's name to that one. This copy
// therefore keeps the placeholder fn_825507B0: objects.json renames the symbol
// the instantiation below defines ("pool_aliases"), and its callers go on
// calling fn_825507B0.
//
// _Insert(bool, _Nodeptr, _Nodeptr) is func_82550E48.cpp. _Linsert
// (fn_82550D00, whose _Leftish argument link-time code generation removed),
// the iterator's decrement (fn_8251F2B0) and increment (fn_825503E0, which the
// linker folded with other trees' ones) and the string comparison stay calls.
// Link-time code generation knew that the increment only changes the iterator
// it is given; __declspec(noalias) tells the compiler the same.
#include <set>
#include <string>

struct Element_82550E48 {
    std::string unk0;
    int unk1C;
};

inline bool operator<(const Element_82550E48 &a, const Element_82550E48 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_82550E48> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef Tree::const_iterator ConstIter;

// The pair _Linsert returns, as fn_82550D00 fills it in.
struct Linserted_825507B0 {
    Node *node;
    bool inserted;
};

extern "C" {
int fn_8260D428(const std::string *self, unsigned int off, unsigned int n0, const char *ptr,
                unsigned int count);
ConstIter *fn_8251F2B0(ConstIter *it);
__declspec(noalias) ConstIter *fn_825503E0(ConstIter *it);
Linserted_825507B0 *fn_82550D00(Linserted_825507B0 *result, Tree *self, Node *node);
}

template <> __forceinline int std::string::compare(std::string::size_type off, std::string::size_type n0,
                                                   const char *ptr, std::string::size_type count) const
{
    return fn_8260D428(this, off, n0, ptr, count);
}

template <> __forceinline ConstIter &ConstIter::operator--()
{
    return *fn_8251F2B0(this);
}

template <> __forceinline ConstIter &ConstIter::operator++()
{
    return *fn_825503E0(this);
}

template <> __forceinline Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool)
{
    Linserted_825507B0 result;
    return _Pairib(iterator(fn_82550D00(&result, this, node)->node, this), false);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template Tree::iterator Tree::_Insert(Tree::const_iterator, Tree::_Nodeptr);
