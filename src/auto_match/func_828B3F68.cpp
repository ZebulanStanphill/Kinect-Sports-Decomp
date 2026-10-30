// std::_Tree<...>::_Linsert(_Nodeptr, bool) of an ordered set with an 8-byte key
// (Element_828B3758 is a placeholder for the game's value type).
#include <set>

struct __declspec(align(8)) Element_828B3758 {
    unsigned __int64 key;

    bool operator<(const Element_828B3758 &other) const
    {
        return key < other.key;
    }
};

typedef std::set<Element_828B3758> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_828CCA70(Tree::iterator *);
}

template <> void std::allocator<Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);

template <> __forceinline Tree::iterator &Tree::iterator::operator--()
{
    fn_828CCA70(this);
    return *this;
}

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr node, bool leftish)
{
    _Nodeptr parent = this->_Myhead;
    _Nodeptr cur = _Root();
    bool left = true;
    while (!this->_Isnil(cur)) {
        parent = cur;
        if (leftish)
            left = !this->comp(this->_Key(cur), this->_Myval(node));
        else
            left = this->comp(this->_Myval(node), this->_Key(cur));
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

    if (this->comp(this->_Key(previous), this->_Myval(node))) {
        where.~iterator();
        return _Pairib(*::new ((void *)&where)
            iterator(_Insert(left, parent, node)), true);
    }
    this->_Alnod.deallocate(node, 1);
    return _Pairib(iterator(previous, this), false);
}

Tree::_Pairib emit_828B3F68(Tree *self, Node *node, bool leftish)
{
    return self->_Linsert(node, leftish);
}
