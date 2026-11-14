// std::_Tree<Traits>::insert(const_iterator, _Valty&&) from Visual C++ 2010's
// <xtree>, for the tree of game/Element_8251C118.h: builds a node holding the
// moved value (the key is const and is copied) and links it in next to the
// hint through _Insert(const_iterator, _Nodeptr), func_8251BD48.cpp.
//
// The game was built with link-time code generation, which inlined _Buynode
// and the allocator; /d2inlS1000 (in objects.json) lets the compiler inline as
// much. That limit would also inline stdext::exception::_Raise, which the
// original calls, so it is marked noinline while <exception> is read.
// std::string's copy constructor and operator new keep the names that C units
// use.
#define _Raise __declspec(noinline) _Raise
#include <exception>
#undef _Raise
#include "game/Element_8251C118.h"

typedef Set_8251C118::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8223B688(std::string *self, const std::string *right);
}

template <> __forceinline std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
    const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &right)
{
    fn_8223B688(this, &right);
}

template <> __forceinline Node *std::_Allocate(size_t count, Node *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((size_t)-1 / sizeof(Node) < count || (ptr = fn_8265C9E0(count * sizeof(Node))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (Node *)ptr;
}

template <> Tree::iterator Tree::_Insert(Tree::const_iterator, Tree::_Nodeptr);

template Tree::iterator Tree::insert<Element_8251C118>(Tree::const_iterator, Element_8251C118 &&);
