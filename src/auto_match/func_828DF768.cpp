// std::_Tree<...>::_Linsert(_Nodeptr, bool) of std::set<Element_828DF458> (insert a prepared node,
// on the left if leftish), Visual C++ 2010's <xtree>. operator< is the out-of-line fn_828E0270.
// fn_828DF768 keeps its fn_ name (the Matching C unit func_828E3958 calls it): the specialisation is
// forced inline into an extern "C" function. Iterator operator-- is fn_8288A4B0.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_828DF458 {
    int data[2];
};

extern "C" bool fn_828E0270(const Element_828DF458 &a, const Element_828DF458 &b);

inline bool operator<(const Element_828DF458 &a, const Element_828DF458 &b)
{
    return fn_828E0270(a, b);
}

typedef std::set<Element_828DF458> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8288A4B0(Unchecked *it);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8288A4B0(this);
    return *this;
}

template <> __forceinline Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool leftish)
{
    const value_type &val = this->_Myval(node);
    _Nodeptr parent = this->_Myhead;
    _Nodeptr cur = _Root();
    bool left = true;
    while (!this->_Isnil(cur)) {
        parent = cur;
        if (leftish)
            left = !this->comp(this->_Key(cur), val);
        else
            left = this->comp(val, this->_Key(cur));
        cur = left ? this->_Left(cur) : this->_Right(cur);
    }

    _Nodeptr previous = parent;
    iterator where(parent, this);
    if (left) {
        if (where == begin()) {
            where.~iterator();
            return _Pairib(*::new ((void *)&where)
                iterator(_Insert(true, parent, node)), true);
        }
        --where;
        previous = where._Mynode();
    }

    if (this->comp(this->_Key(previous), val)) {
        where.~iterator();
        return _Pairib(*::new ((void *)&where)
            iterator(_Insert(left, parent, node)), true);
    }
    this->_Alnod.deallocate(node, 1);
    return _Pairib(iterator(previous, this), false);
}

extern "C" Tree::_Pairib fn_828DF768(Tree *self, Node *node, bool leftish)
{
    return self->_Linsert(node, leftish);
}
