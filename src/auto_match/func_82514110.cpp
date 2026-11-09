struct Element_825143C8 {
    unsigned int key;
    unsigned int rest[2];
};

namespace std {
template<class T> struct less;
template<class T> class allocator;
template<class K, class Pr, class Al, bool Mfl> class _Tset_traits;
template<class Tr> class _Tree_nod;
template<class Tr> class _Tree_val;
template<class Tv> class _Tree_const_iterator {
public:
    _Tree_const_iterator() {}
    void *_Ptr;
};
}

typedef std::_Tset_traits<Element_825143C8, std::less<Element_825143C8>,
                          std::allocator<Element_825143C8>, false> Traits_82514110;

namespace std {
template<> class _Tree_nod<Traits_82514110> {
public:
    struct _Node {
        _Node *_Left;
        _Node *_Parent;
        _Node *_Right;
        Element_825143C8 _Myval;
        unsigned char _Color;
        unsigned char _Isnil;
    };
};

template<class Tr> class _Tree {
public:
    typedef typename _Tree_nod<Tr>::_Node _Node;
    int _Pad0;
    _Node *_Myhead;
    unsigned int _Mysize;
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft, _Node *_Wherenode, _Node *_Newnode);
};
}

typedef std::_Tree<Traits_82514110> Tree_82514110;
typedef std::_Tree_nod<Traits_82514110>::_Node Node_82514110;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_82514110> > Iter_82514110;

struct TreeAccess_82514110 : Tree_82514110 {
    using Tree_82514110::_Insert;
};

struct Pair_82514110 {
    Iter_82514110 first;
    bool second;
    Pair_82514110() {}
};

extern "C" Node_82514110 **fn_8225F028(Node_82514110 **it);
extern "C" Node_82514110 **fn_82248B90(Node_82514110 **it);
extern "C" Pair_82514110 fn_82514288(Tree_82514110 *t, Node_82514110 *newnode);

extern "C" Iter_82514110 fn_82514110(Tree_82514110 *t, Node_82514110 *where, Node_82514110 *newnode)
{
    TreeAccess_82514110 *a = (TreeAccess_82514110 *)t;
    Node_82514110 *it = 0;
    Node_82514110 *head;
    unsigned int nk;
    unsigned int wk;

    if (t->_Mysize == 0)
        return a->_Insert(true, t->_Myhead, newnode);
    head = t->_Myhead;
    if (where == head->_Left) {
        if (newnode->_Myval.key < where->_Myval.key)
            return a->_Insert(true, where, newnode);
    } else if (where == head) {
        Node_82514110 *r = head->_Right;
        if (r->_Myval.key < newnode->_Myval.key)
            return a->_Insert(false, r, newnode);
    } else {
        nk = newnode->_Myval.key;
        wk = where->_Myval.key;
        if (nk < wk && (it = where, (*fn_8225F028(&it))->_Myval.key < nk)) {
            if (it->_Right->_Isnil != 0)
                return a->_Insert(false, it, newnode);
            return a->_Insert(true, where, newnode);
        } else if (wk < nk && (it = where, *fn_82248B90(&it) == head || nk < it->_Myval.key)) {
            if (where->_Right->_Isnil == 0)
                return a->_Insert(true, it, newnode);
            return a->_Insert(false, where, newnode);
        }
    }
    return fn_82514288(t, newnode).first;
}
