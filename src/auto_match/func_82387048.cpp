/* fn_823E1980: std::set<Element_823E1A78>::_Linsert (insert unique, node already built).
   Returns pair<iterator,bool> through the hidden result pointer. */

struct Node_82387048 {
    struct Node_82387048 *left;    /* 0x00 */
    struct Node_82387048 *parent;  /* 0x04 */
    struct Node_82387048 *right;   /* 0x08 */
    unsigned int pad0c;            /* 0x0C */
    unsigned int key;              /* 0x10 */
    unsigned char pad14[0x1c];     /* 0x14 */
    char color;                    /* 0x50 */
    char isnil;                    /* 0x51 */
};

struct Element_82387140;

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
    _Tree_const_iterator(::Node_82387048 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_82387048 *_Ptr;
};
}

typedef std::_Tset_traits<Element_82387140, std::less<Element_82387140>,
                          std::allocator<Element_82387140>, false> Traits_82387048;
typedef std::_Tree<Traits_82387048> Tree_82387048;
typedef std::_Tree_nod<Traits_82387048>::_Node TNode_82387048;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_82387048> > Iter_82387048;

struct Pair_82387048 {
    Iter_82387048 first;
    bool second;
    Pair_82387048(const Iter_82387048 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_82387048 fn_82387048(Tree_82387048 *t, Node_82387048 *node);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_82387048 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_82387048 (::fn_82387048)(_Tree *, ::Node_82387048 *);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_82387308(Iter_82387048 *it);
extern "C" void fn_8265CA20(void *p);

extern "C" Pair_82387048 fn_82387048(Tree_82387048 *t, Node_82387048 *node)
{
    Node_82387048 *trynode = t->_Myhead->parent;
    Node_82387048 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        addleft = node->key < trynode->key;
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_82387048 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_82387048(t->_Insert(true, (TNode_82387048 *)wherenode,
                                        (TNode_82387048 *)node), true);
    else
        fn_82387308(&where);

    if (where._Ptr->key < node->key)
        return Pair_82387048(t->_Insert(addleft, (TNode_82387048 *)wherenode,
                                        (TNode_82387048 *)node), true);

    fn_8265CA20(node);
    return Pair_82387048(where, false);
}
