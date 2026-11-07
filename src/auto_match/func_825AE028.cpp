struct Element_825AE310 {
    unsigned int key;
    unsigned int rest[4];
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

typedef std::_Tset_traits<Element_825AE310, std::less<Element_825AE310>,
                          std::allocator<Element_825AE310>, false> Traits_825AE028;

namespace std {
template<> class _Tree_nod<Traits_825AE028> {
public:
    struct _Node {
        _Node *_Left;
        _Node *_Parent;
        _Node *_Right;
        Element_825AE310 _Myval;
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

typedef std::_Tree<Traits_825AE028> Tree_825AE028;
typedef std::_Tree_nod<Traits_825AE028>::_Node Node_825AE028;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_825AE028> > Iter_825AE028;

struct TreeAccess_825AE028 : Tree_825AE028 {
    using Tree_825AE028::_Insert;
};

struct Pair_825AE028 {
    Iter_825AE028 first;
    bool second;
    Pair_825AE028() {}
};

extern "C" Node_825AE028 **fn_82830D60(Node_825AE028 **it);
extern "C" Node_825AE028 **fn_82518FF0(Node_825AE028 **it);
extern "C" Pair_825AE028 fn_825ADF18(Tree_825AE028 *t, Node_825AE028 *newnode);

extern "C" Iter_825AE028 fn_825AE028(Tree_825AE028 *t, Node_825AE028 *where, Node_825AE028 *newnode)
{
    TreeAccess_825AE028 *a = (TreeAccess_825AE028 *)t;
    Node_825AE028 *it = 0;
    Node_825AE028 *head;
    unsigned int nk;
    unsigned int wk;

    if (t->_Mysize == 0)
        return a->_Insert(true, t->_Myhead, newnode);
    head = t->_Myhead;
    if (where == head->_Left) {
        if (newnode->_Myval.key < where->_Myval.key)
            return a->_Insert(true, where, newnode);
    } else if (where == head) {
        Node_825AE028 *r = head->_Right;
        if (r->_Myval.key < newnode->_Myval.key)
            return a->_Insert(false, r, newnode);
    } else {
        nk = newnode->_Myval.key;
        wk = where->_Myval.key;
        if (nk < wk && (it = where, (*fn_82830D60(&it))->_Myval.key < nk)) {
            if (it->_Right->_Isnil != 0)
                return a->_Insert(false, it, newnode);
            return a->_Insert(true, where, newnode);
        } else if (wk < nk && (it = where, *fn_82518FF0(&it) == head || nk < it->_Myval.key)) {
            if (where->_Right->_Isnil == 0)
                return a->_Insert(true, it, newnode);
            return a->_Insert(false, where, newnode);
        }
    }
    return fn_825ADF18(t, newnode).first;
}
