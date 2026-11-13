// std::_Tree<...>::_Linsert(_Nodeptr, bool) of std::set<Element_828E7D48> (see func_828E7D48.cpp,
// which defines its _Insert), Visual C++ 2010's <xtree>. operator< (two unsigned keys) is inlined
// everywhere. fn_828E8548 keeps its fn_ name: the specialisation is forced inline into an
// extern "C" function. Iterator operator-- is fn_8289DD28.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <memory>
#include <set>
#undef _Xlength_error

extern "C" {
void fn_822315A0(std::tr1::_Ref_count_base *rep);
}

struct Element_828E7D48 {
    struct Object;
    unsigned int unk0[2];
    std::tr1::shared_ptr<Object> unk8;
};

inline bool operator<(const Element_828E7D48 &a, const Element_828E7D48 &b)
{
    return a.unk0[0] < b.unk0[0] || (!(b.unk0[0] < a.unk0[0]) && a.unk0[1] < b.unk0[1]);
}

template <> __forceinline void std::tr1::_Ptr_base<Element_828E7D48::Object>::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

typedef std::set<Element_828E7D48> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8289DD28(Unchecked *it);
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

    if (this->comp(this->_Key(previous), val)) {
        where.~iterator();
        return _Pairib(*::new ((void *)&where)
            iterator(_Insert(left, parent, node)), true);
    }
    _Dest_val(this->_Alval, &this->_Myval(node));
    this->_Alnod.deallocate(node, 1);
    return _Pairib(iterator(previous, this), false);
}

extern "C" Tree::_Pairib fn_828E8548(Tree *self, Node *node, bool leftish)
{
    return self->_Linsert(node, leftish);
}
