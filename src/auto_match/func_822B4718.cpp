struct Element_822B4990 {
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

typedef std::_Tset_traits<Element_822B4990, std::less<Element_822B4990>,
                          std::allocator<Element_822B4990>, false> Traits_822B4718;

namespace std {
template<> class _Tree_nod<Traits_822B4718> {
public:
    struct _Node {
        _Node *_Left;
        _Node *_Parent;
        _Node *_Right;
        char pad_c[0x4]; Element_822B4990 _Myval;
        char pad_24[0x2d];
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

typedef std::_Tree<Traits_822B4718> Tree_822B4718;
typedef std::_Tree_nod<Traits_822B4718>::_Node Node_822B4718;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_822B4718> > Iter_822B4718;

struct TreeAccess_822B4718 : Tree_822B4718 {
    using Tree_822B4718::_Insert;
};

struct Pair_822B4718 {
    Iter_822B4718 first;
    bool second;
    Pair_822B4718() {}
};

extern "C" Node_822B4718 **fn_824CC480(Node_822B4718 **it);
extern "C" Node_822B4718 **fn_823E1618(Node_822B4718 **it);
extern "C" Pair_822B4718 fn_822B4890(Tree_822B4718 *t, Node_822B4718 *newnode);

extern "C" Iter_822B4718 fn_822B4718(Tree_822B4718 *t, Node_822B4718 *where, Node_822B4718 *newnode)
{
    TreeAccess_822B4718 *a = (TreeAccess_822B4718 *)t;
    Node_822B4718 *it = 0;
    Node_822B4718 *head;
    unsigned int nk;
    unsigned int wk;

    if (t->_Mysize == 0)
        return a->_Insert(true, t->_Myhead, newnode);
    head = t->_Myhead;
    if (where == head->_Left) {
        if (newnode->_Myval.key < where->_Myval.key)
            return a->_Insert(true, where, newnode);
    } else if (where == head) {
        Node_822B4718 *r = head->_Right;
        if (r->_Myval.key < newnode->_Myval.key)
            return a->_Insert(false, r, newnode);
    } else {
        nk = newnode->_Myval.key;
        wk = where->_Myval.key;
        if (nk < wk && (it = where, (*fn_824CC480(&it))->_Myval.key < nk)) {
            if (it->_Right->_Isnil != 0)
                return a->_Insert(false, it, newnode);
            return a->_Insert(true, where, newnode);
        } else if (wk < nk && (it = where, *fn_823E1618(&it) == head || nk < it->_Myval.key)) {
            if (where->_Right->_Isnil == 0)
                return a->_Insert(true, it, newnode);
            return a->_Insert(false, where, newnode);
        }
    }
    return fn_822B4890(t, newnode).first;
}
