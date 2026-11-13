// std::set<Element_82550B38>::insert(const_iterator where, const value_type &) from Visual C++ 2010's
// <xtree>: the hinted insert (_Insert with a hint, the node already allocated). Same shape as
// func_822B4718.cpp; the element's operator< compares the float key at the start of the value.
struct Element_82550B38;

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

typedef std::_Tset_traits<Element_82550B38, std::less<Element_82550B38>,
                          std::allocator<Element_82550B38>, false> Traits_825505D0;

namespace std {
template<> class _Tree_nod<Traits_825505D0> {
public:
    struct _Node {
        _Node *_Left;
        _Node *_Parent;
        _Node *_Right;
        float _Key;
        int _Rest[6];
        char _Color;
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

typedef std::_Tree<Traits_825505D0> Tree_825505D0;
typedef std::_Tree_nod<Traits_825505D0>::_Node Node_825505D0;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_825505D0> > Iter_825505D0;

struct TreeAccess_825505D0 : Tree_825505D0 {
    using Tree_825505D0::_Insert;
};

struct Pair_825505D0 {
    Iter_825505D0 first;
    bool second;
    Pair_825505D0() {}
};

static bool Less_825505D0(float a, float b) { return a < b; }

extern "C" Node_825505D0 **fn_82551020(Node_825505D0 **it);
extern "C" Node_825505D0 **fn_825500E8(Node_825505D0 **it);
extern "C" Pair_825505D0 fn_82550A28(Tree_825505D0 *t, Node_825505D0 *newnode);

extern "C" Iter_825505D0 fn_825505D0(Tree_825505D0 *t, Node_825505D0 *where, Node_825505D0 *newnode)
{
    TreeAccess_825505D0 *a = (TreeAccess_825505D0 *)t;
    Node_825505D0 *it = 0;
    Node_825505D0 *head;
    float nk;
    float wk;

    if (t->_Mysize == 0)
        return a->_Insert(true, t->_Myhead, newnode);
    head = t->_Myhead;
    if (where == head->_Left) {
        if (Less_825505D0(newnode->_Key, where->_Key))
            return a->_Insert(true, where, newnode);
    } else if (where == head) {
        Node_825505D0 *r = head->_Right;
        if (Less_825505D0(r->_Key, newnode->_Key))
            return a->_Insert(false, r, newnode);
    } else {
        nk = newnode->_Key;
        wk = where->_Key;
        if (Less_825505D0(nk, wk) && (it = where, Less_825505D0((*fn_82551020(&it))->_Key, nk))) {
            if (it->_Right->_Isnil != 0)
                return a->_Insert(false, it, newnode);
            return a->_Insert(true, where, newnode);
        } else if (Less_825505D0(wk, nk) && (it = where, *fn_825500E8(&it) == head || Less_825505D0(nk, it->_Key))) {
            if (where->_Right->_Isnil == 0)
                return a->_Insert(true, it, newnode);
            return a->_Insert(false, where, newnode);
        }
    }
    return fn_82550A28(t, newnode).first;
}
