// std::_Tree<Traits>::erase(const key_type&) from Visual C++ 2010's <xtree>,
// written out for the std::map<unsigned int, std::tr1::weak_ptr<T>> whose
// erase(const_iterator) is func_82511CB0.cpp: finds the equal range of the
// key, counts it, erases it and returns the count. Object_82511CB0 is a
// placeholder for the type the pointer refers to.
//
// erase(const_iterator, const_iterator) is inlined; its clear() stays a call to
// fn_825120A0 and the iterator increment a call to fn_82248B90 (folded with
// other trees'). erase(const_iterator) is the real member.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <memory>
#include <map>
#undef _Xlength_error

struct Object_82511CB0;
typedef std::map<unsigned int, std::tr1::weak_ptr<Object_82511CB0> > Map;
typedef Map::_Mybase Tree;

extern "C" {
void fn_825120A0(Tree *self);
void fn_82248B90(Tree::const_iterator *it);
}

template <> Tree::iterator Tree::erase(const_iterator where);

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
