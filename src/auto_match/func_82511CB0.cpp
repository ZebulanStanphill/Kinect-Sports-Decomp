// std::_Tree<Traits>::erase(const_iterator) from Visual C++ 2010's <xtree>,
// instantiated for std::map<unsigned int, std::tr1::weak_ptr<T>>;
// Object_82511CB0 is a placeholder for the type the pointer refers to.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 lets it inline as much. The
// iterator increment and the tree's rotations stay calls to fn_82248B90,
// fn_822B5400 and fn_824C0808; they, operator delete and std::_Xout_of_range
// keep the names that C units use.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <memory>
#include <map>
#undef _Xlength_error
#undef _Xout_of_range

struct Object_82511CB0;

typedef std::map<unsigned int, std::tr1::weak_ptr<Object_82511CB0> > Map;
typedef Map::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_822B5400(Tree *self, Node *node);
void fn_824C0808(Tree *self, Node *node);
__declspec(noalias) void fn_82248B90(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82248B90(this);
    return *this;
}

template <> __forceinline void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void Tree::_Lrotate(_Nodeptr node)
{
    fn_822B5400(this, node);
}

template <> __forceinline void Tree::_Rrotate(_Nodeptr node)
{
    fn_824C0808(this, node);
}

template Tree::iterator Tree::erase(Tree::const_iterator);
