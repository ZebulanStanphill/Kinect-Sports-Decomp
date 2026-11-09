/* fn_82872B68: std::set<Element_82828828>::_Linsert(node, leftish) (insert unique,
   node already built). Returns pair<iterator,bool> through the hidden result pointer. */

struct Node_82872B68 {
    struct Node_82872B68 *left;    /* 0x00 */
    struct Node_82872B68 *parent;  /* 0x04 */
    struct Node_82872B68 *right;   /* 0x08 */
    unsigned int key;              /* 0x0C */
    char color;                    /* 0x10 */
    char isnil;                    /* 0x11 */
};

struct Element_82828828;

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
    _Tree_const_iterator(::Node_82872B68 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_82872B68 *_Ptr;
};
}

typedef std::_Tset_traits<Element_82828828, std::less<Element_82828828>,
                          std::allocator<Element_82828828>, false> Traits_82872B68;
typedef std::_Tree<Traits_82872B68> Tree_82872B68;
typedef std::_Tree_nod<Traits_82872B68>::_Node TNode_82872B68;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_82872B68> > Iter_82872B68;

struct Pair_82872B68 {
    Iter_82872B68 first;
    bool second;
    Pair_82872B68(const Iter_82872B68 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_82872B68 fn_82872B68(Tree_82872B68 *t, Node_82872B68 *node, bool leftish);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_82872B68 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_82872B68 (::fn_82872B68)(_Tree *, ::Node_82872B68 *, bool);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_82872898(Iter_82872B68 *it);
extern "C" void fn_8265CA20(void *p);

extern "C" Pair_82872B68 fn_82872B68(Tree_82872B68 *t, Node_82872B68 *node, bool leftish)
{
    Node_82872B68 *trynode = t->_Myhead->parent;
    Node_82872B68 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        if (leftish)
            addleft = !(trynode->key < node->key);
        else
            addleft = node->key < trynode->key;
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_82872B68 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_82872B68(t->_Insert(true, (TNode_82872B68 *)wherenode,
                                        (TNode_82872B68 *)node), true);
    else
        fn_82872898(&where);

    if (where._Ptr->key < node->key)
        return Pair_82872B68(t->_Insert(addleft, (TNode_82872B68 *)wherenode,
                                        (TNode_82872B68 *)node), true);

    fn_8265CA20(node);
    return Pair_82872B68(where, false);
}
