struct Element_82832FC0 {
    unsigned int key;
    unsigned int rest[3];
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

typedef std::_Tset_traits<Element_82832FC0, std::less<Element_82832FC0>,
                          std::allocator<Element_82832FC0>, false> Traits_823E2DA8;

namespace std {
template<> class _Tree_nod<Traits_823E2DA8> {
public:
    struct _Node {
        _Node *_Left;
        _Node *_Parent;
        _Node *_Right;
        Element_82832FC0 _Myval;
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

typedef std::_Tree<Traits_823E2DA8> Tree_823E2DA8;
typedef std::_Tree_nod<Traits_823E2DA8>::_Node Node_823E2DA8;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_823E2DA8> > Iter_823E2DA8;

struct TreeAccess_823E2DA8 : Tree_823E2DA8 {
    using Tree_823E2DA8::_Insert;
};

struct Pair_823E2DA8 {
    Iter_823E2DA8 first;
    bool second;
    Pair_823E2DA8() {}
};

extern "C" Node_823E2DA8 **fn_82832430(Node_823E2DA8 **it);
extern "C" Node_823E2DA8 **fn_823E2D30(Node_823E2DA8 **it);
extern "C" Pair_823E2DA8 fn_823E3098(Tree_823E2DA8 *t, Node_823E2DA8 *newnode);

extern "C" Iter_823E2DA8 fn_823E2DA8(Tree_823E2DA8 *t, Node_823E2DA8 *where, Node_823E2DA8 *newnode)
{
    TreeAccess_823E2DA8 *a = (TreeAccess_823E2DA8 *)t;
    Node_823E2DA8 *it = 0;
    Node_823E2DA8 *head;
    unsigned int nk;
    unsigned int wk;

    if (t->_Mysize == 0)
        return a->_Insert(true, t->_Myhead, newnode);
    head = t->_Myhead;
    if (where == head->_Left) {
        if (newnode->_Myval.key < where->_Myval.key)
            return a->_Insert(true, where, newnode);
    } else if (where == head) {
        Node_823E2DA8 *r = head->_Right;
        if (r->_Myval.key < newnode->_Myval.key)
            return a->_Insert(false, r, newnode);
    } else {
        nk = newnode->_Myval.key;
        wk = where->_Myval.key;
        if (nk < wk && (it = where, (*fn_82832430(&it))->_Myval.key < nk)) {
            if (it->_Right->_Isnil != 0)
                return a->_Insert(false, it, newnode);
            return a->_Insert(true, where, newnode);
        } else if (wk < nk && (it = where, *fn_823E2D30(&it) == head || nk < it->_Myval.key)) {
            if (where->_Right->_Isnil == 0)
                return a->_Insert(true, it, newnode);
            return a->_Insert(false, where, newnode);
        }
    }
    return fn_823E3098(t, newnode).first;
}
