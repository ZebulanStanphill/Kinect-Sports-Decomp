// Insert a preallocated node into an ordered set and free duplicate keys.
// Element_828C04A0 shares the placeholder type used by the existing _Insert
// helper. Its first 64-bit word is the key; the second word is not compared.
// The iterator decrement remains a call to fn_828C00A0. Reconstructing the
// consumed iterator in place shares its storage with the insertion result.

#include <set>
#include "game/Allocator_825089A0.h"

struct Element_828C04A0 {
    unsigned __int64 key, value;

    bool operator<(const Element_828C04A0 &other) const
    {
        return key < other.key;
    }
};

typedef std::set<Element_828C04A0, std::less<Element_828C04A0>,
    Allocator_825089A0<Element_828C04A0, 0> > Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
extern "C" void fn_828C00A0(Tree::iterator *);

template <> __forceinline Tree::iterator &Tree::iterator::operator--()
{
    fn_828C00A0(this);
    return *this;
}

struct Access_828C0B98 : Tree {
    using Tree::_Linsert;
};

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

Tree::_Pairib emit_828C0B98(Tree *self, Node *node, bool leftish)
{
    return self->_Linsert(node, leftish);
}
