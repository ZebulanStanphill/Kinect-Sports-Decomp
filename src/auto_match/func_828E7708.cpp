// std::_Tree<...>::_Linsert(_Nodeptr, bool) of std::set<Element_828E6F48> (see func_828E6F48.cpp,
// which defines its _Insert), Visual C++ 2010's <xtree>. operator< is inlined in the search loop,
// while the final check calls std::less<Element_828E6F48>::operator() out of line (fn_828E6160).
// fn_828E7708 keeps its fn_ name: the specialisation is forced inline into an extern "C" function.
// Iterator operator-- is fn_8289DD28.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" {
void fn_828B55B0(void *self);
unsigned char fn_828B5650(const void *a, const void *b);
}

struct Element_828E6F48 {
    unsigned int unk0;
    struct Unk4 {
        ~Unk4() { fn_828B55B0(this); }
        int data[3];
    } unk4;
};

inline bool operator<(const Element_828E6F48 &a, const Element_828E6F48 &b)
{
    return a.unk0 < b.unk0 || (!(b.unk0 < a.unk0) && fn_828B5650(&a.unk4, &b.unk4) != 0);
}

typedef std::set<Element_828E6F48> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8289DD28(Unchecked *it);
unsigned char fn_828E6160(const std::less<Element_828E6F48> *comp, const Element_828E6F48 *a,
    const Element_828E6F48 *b);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
template <> __forceinline Unchecked &Unchecked::operator--()
{
    fn_8289DD28(this);
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

    if (fn_828E6160(&this->comp, &this->_Key(previous), &val)) {
        where.~iterator();
        return _Pairib(*::new ((void *)&where)
            iterator(_Insert(left, parent, node)), true);
    }
    _Dest_val(this->_Alval, &this->_Myval(node));
    this->_Alnod.deallocate(node, 1);
    return _Pairib(iterator(previous, this), false);
}

extern "C" Tree::_Pairib fn_828E7708(Tree *self, Node *node, bool leftish)
{
    return self->_Linsert(node, leftish);
}
