namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <map>
#undef _Xlength_error

struct V8_82513F78 { int a; int b; };
typedef std::map<unsigned int, V8_82513F78> Map;
typedef Map::_Mybase Tree;

extern "C" {
void fn_82511CB0(Tree::_Nodeptr *result, Tree *self, Tree::const_iterator where);
void fn_825120A0(Tree *self);
void fn_82248B90(Tree::const_iterator *it);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    Tree::_Nodeptr r;
    fn_82511CB0(&r, this, where);
    return iterator(r, this);
}

template <> __forceinline Tree::const_iterator &Tree::const_iterator::operator++()
{
    fn_82248B90(this);
    return *this;
}

template <> __forceinline void Tree::clear()
{
    fn_825120A0(this);
}

extern "C" unsigned int fn_82513F78(Tree *t, const unsigned int &key)
{
    std::pair<Tree::iterator, Tree::iterator> w = t->equal_range(key);
    unsigned int n = 0;
    std::_Distance(w.first, w.second, n);
    t->erase(w.first, w.second);
    return n;
}
