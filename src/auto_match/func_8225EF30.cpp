/* fn_823E1980: std::set<Element_823E1A78>::_Linsert (insert unique, node already built).
   Returns pair<iterator,bool> through the hidden result pointer. */

struct Node_8225EF30 {
    struct Node_8225EF30 *left;    /* 0x00 */
    struct Node_8225EF30 *parent;  /* 0x04 */
    struct Node_8225EF30 *right;   /* 0x08 */
                /* 0x0C */
    unsigned int key;              /* 0x10 */
    unsigned char pad14[0x4];     /* 0x14 */
    char color;                    /* 0x50 */
    char isnil;                    /* 0x51 */
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
    _Tree_const_iterator(::Node_8225EF30 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_8225EF30 *_Ptr;
};
}

typedef std::_Tset_traits<Element_822AC640, std::less<Element_822AC640>,
                          std::allocator<Element_822AC640>, false> Traits_8225EF30;
typedef std::_Tree<Traits_8225EF30> Tree_8225EF30;
typedef std::_Tree_nod<Traits_8225EF30>::_Node TNode_8225EF30;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_8225EF30> > Iter_8225EF30;

struct Pair_8225EF30 {
    Iter_8225EF30 first;
    bool second;
    Pair_8225EF30(const Iter_8225EF30 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_8225EF30 fn_8225EF30(Tree_8225EF30 *t, Node_8225EF30 *node);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_8225EF30 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_8225EF30 (::fn_8225EF30)(_Tree *, ::Node_8225EF30 *);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_82829C48(Iter_8225EF30 *it);
extern "C" void fn_8265CA20(void *p);

extern "C" Pair_8225EF30 fn_8225EF30(Tree_8225EF30 *t, Node_8225EF30 *node)
{
    Node_8225EF30 *trynode = t->_Myhead->parent;
    Node_8225EF30 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        addleft = node->key < trynode->key;
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_8225EF30 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_8225EF30(t->_Insert(true, (TNode_8225EF30 *)wherenode,
                                        (TNode_8225EF30 *)node), true);
    else
        fn_82829C48(&where);

    if (where._Ptr->key < node->key)
        return Pair_8225EF30(t->_Insert(addleft, (TNode_8225EF30 *)wherenode,
                                        (TNode_8225EF30 *)node), true);

    fn_8265CA20(node);
    return Pair_8225EF30(where, false);
}
