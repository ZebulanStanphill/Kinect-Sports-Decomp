/* fn_824A0AD8: std::set<Element_822AC640>::_Linsert (insert unique, node already built).
   Returns pair<iterator,bool> through the hidden result pointer. */

struct Node_824A0AD8 {
    struct Node_824A0AD8 *left;    /* 0x00 */
    struct Node_824A0AD8 *parent;  /* 0x04 */
    struct Node_824A0AD8 *right;   /* 0x08 */
    int key;                       /* 0x0C */
    unsigned char pad10[0x4];      /* 0x10 */
    char color;                    /* 0x14 */
    char isnil;                    /* 0x15 */
};

struct Element_822AC640;

namespace std {
template<class T> struct less;
template<class T> class allocator;
template<class K, class P, class A, bool M> class _Tset_traits;
template<class Tr> class _Tree_val;
template<class Tr> class _Tree;
template<class Tr> class _Tree_nod {
public:
    struct _Node;
};
template<class Tv> class _Tree_const_iterator {
public:
    _Tree_const_iterator(::Node_824A0AD8 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_824A0AD8 *_Ptr;
};
}

typedef std::_Tset_traits<Element_822AC640, std::less<Element_822AC640>,
                          std::allocator<Element_822AC640>, false> Traits_824A0AD8;
typedef std::_Tree<Traits_824A0AD8> Tree_824A0AD8;
typedef std::_Tree_nod<Traits_824A0AD8>::_Node TNode_824A0AD8;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_824A0AD8> > Iter_824A0AD8;

struct Pair_824A0AD8 {
    Iter_824A0AD8 first;
    bool second;
    Pair_824A0AD8(const Iter_824A0AD8 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_824A0AD8 fn_824A0AD8(Tree_824A0AD8 *t, Node_824A0AD8 *node);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_824A0AD8 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_824A0AD8 (::fn_824A0AD8)(_Tree *, ::Node_824A0AD8 *);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_82829C48(Iter_824A0AD8 *it);
extern "C" void fn_8265CA20(void *p);

/* std::less<Element_822AC640>::operator() on the element key */
static __forceinline bool KeyLess_824A0AD8(int a, int b)
{
    return a < b;
}

extern "C" Pair_824A0AD8 fn_824A0AD8(Tree_824A0AD8 *t, Node_824A0AD8 *node)
{
    Node_824A0AD8 *trynode = t->_Myhead->parent;
    Node_824A0AD8 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        addleft = KeyLess_824A0AD8(node->key, trynode->key);
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_824A0AD8 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_824A0AD8(t->_Insert(true, (TNode_824A0AD8 *)wherenode,
                                        (TNode_824A0AD8 *)node), true);
    else
        fn_82829C48(&where);

    if (where._Ptr->key < node->key)
        return Pair_824A0AD8(t->_Insert(addleft, (TNode_824A0AD8 *)wherenode,
                                        (TNode_824A0AD8 *)node), true);

    fn_8265CA20(node);
    return Pair_824A0AD8(where, false);
}
