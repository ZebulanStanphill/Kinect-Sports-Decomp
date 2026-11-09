/* fn_823E1980: std::set<Element_823E1A78>::_Linsert (insert unique, node already built).
   Returns pair<iterator,bool> through the hidden result pointer. */

struct Node_823E3098 {
    struct Node_823E3098 *left;    /* 0x00 */
    struct Node_823E3098 *parent;  /* 0x04 */
    struct Node_823E3098 *right;   /* 0x08 */
                /* 0x0C */
    unsigned int key;              /* 0x10 */
    unsigned char pad14[0xc];     /* 0x14 */
    char color;                    /* 0x50 */
    char isnil;                    /* 0x51 */
};

struct Element_82832FC0;

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
    _Tree_const_iterator(::Node_823E3098 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_823E3098 *_Ptr;
};
}

typedef std::_Tset_traits<Element_82832FC0, std::less<Element_82832FC0>,
                          std::allocator<Element_82832FC0>, false> Traits_823E3098;
typedef std::_Tree<Traits_823E3098> Tree_823E3098;
typedef std::_Tree_nod<Traits_823E3098>::_Node TNode_823E3098;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_823E3098> > Iter_823E3098;

struct Pair_823E3098 {
    Iter_823E3098 first;
    bool second;
    Pair_823E3098(const Iter_823E3098 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_823E3098 fn_823E3098(Tree_823E3098 *t, Node_823E3098 *node);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_823E3098 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_823E3098 (::fn_823E3098)(_Tree *, ::Node_823E3098 *);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_82832430(Iter_823E3098 *it);
extern "C" void fn_8265CA20(void *p);

extern "C" Pair_823E3098 fn_823E3098(Tree_823E3098 *t, Node_823E3098 *node)
{
    Node_823E3098 *trynode = t->_Myhead->parent;
    Node_823E3098 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        addleft = node->key < trynode->key;
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_823E3098 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_823E3098(t->_Insert(true, (TNode_823E3098 *)wherenode,
                                        (TNode_823E3098 *)node), true);
    else
        fn_82832430(&where);

    if (where._Ptr->key < node->key)
        return Pair_823E3098(t->_Insert(addleft, (TNode_823E3098 *)wherenode,
                                        (TNode_823E3098 *)node), true);

    fn_8265CA20(node);
    return Pair_823E3098(where, false);
}
