/* fn_823E1980: std::set<Element_823E1A78>::_Linsert (insert unique, node already built).
   Returns pair<iterator,bool> through the hidden result pointer. */

struct Node_82319800 {
    struct Node_82319800 *left;    /* 0x00 */
    struct Node_82319800 *parent;  /* 0x04 */
    struct Node_82319800 *right;   /* 0x08 */
                /* 0x0C */
    unsigned int key;              /* 0x10 */
    unsigned char pad14[0x14];     /* 0x14 */
    char color;                    /* 0x50 */
    char isnil;                    /* 0x51 */
};

struct Element_823198F8;

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
    _Tree_const_iterator(::Node_82319800 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_82319800 *_Ptr;
};
}

typedef std::_Tset_traits<Element_823198F8, std::less<Element_823198F8>,
                          std::allocator<Element_823198F8>, false> Traits_82319800;
typedef std::_Tree<Traits_82319800> Tree_82319800;
typedef std::_Tree_nod<Traits_82319800>::_Node TNode_82319800;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_82319800> > Iter_82319800;

struct Pair_82319800 {
    Iter_82319800 first;
    bool second;
    Pair_82319800(const Iter_82319800 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_82319800 fn_82319800(Tree_82319800 *t, Node_82319800 *node);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_82319800 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_82319800 (::fn_82319800)(_Tree *, ::Node_82319800 *);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_82319AC0(Iter_82319800 *it);
extern "C" void fn_8265CA20(void *p);

extern "C" Pair_82319800 fn_82319800(Tree_82319800 *t, Node_82319800 *node)
{
    Node_82319800 *trynode = t->_Myhead->parent;
    Node_82319800 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        addleft = node->key < trynode->key;
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_82319800 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_82319800(t->_Insert(true, (TNode_82319800 *)wherenode,
                                        (TNode_82319800 *)node), true);
    else
        fn_82319AC0(&where);

    if (where._Ptr->key < node->key)
        return Pair_82319800(t->_Insert(addleft, (TNode_82319800 *)wherenode,
                                        (TNode_82319800 *)node), true);

    fn_8265CA20(node);
    return Pair_82319800(where, false);
}
