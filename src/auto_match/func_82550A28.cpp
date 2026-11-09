struct Node_82550A28 {
    struct Node_82550A28 *left;
    struct Node_82550A28 *parent;
    struct Node_82550A28 *right;
    float key;
    unsigned char pad14[0x18];
    char color;
    char isnil;
};

struct Element_82550B38;

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
    _Tree_const_iterator(::Node_82550A28 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_82550A28 *_Ptr;
};
}

typedef std::_Tset_traits<Element_82550B38, std::less<Element_82550B38>,
                          std::allocator<Element_82550B38>, false> Traits_82550A28;
typedef std::_Tree<Traits_82550A28> Tree_82550A28;
typedef std::_Tree_nod<Traits_82550A28>::_Node TNode_82550A28;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_82550A28> > Iter_82550A28;

struct Pair_82550A28 {
    Iter_82550A28 first;
    bool second;
    Pair_82550A28(const Iter_82550A28 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_82550A28 fn_82550A28(Tree_82550A28 *t, Node_82550A28 *node);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_82550A28 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_82550A28 (::fn_82550A28)(_Tree *, ::Node_82550A28 *);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_82551020(Iter_82550A28 *it);
extern "C" void fn_8265CA20(void *p);

static bool Less_82550A28(float a, float b) { return a < b; }

extern "C" Pair_82550A28 fn_82550A28(Tree_82550A28 *t, Node_82550A28 *node)
{
    Node_82550A28 *trynode = t->_Myhead->parent;
    Node_82550A28 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        addleft = node->key < trynode->key;
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_82550A28 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_82550A28(t->_Insert(true, (TNode_82550A28 *)wherenode,
                                        (TNode_82550A28 *)node), true);
    else
        fn_82551020(&where);

    if (Less_82550A28(where._Ptr->key, node->key))
        return Pair_82550A28(t->_Insert(addleft, (TNode_82550A28 *)wherenode,
                                        (TNode_82550A28 *)node), true);

    fn_8265CA20(node);
    return Pair_82550A28(where, false);
}
