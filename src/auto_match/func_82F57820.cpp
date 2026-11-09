/* fn_82F57820: std::set<Element_82F56FC0>::_Linsert(node, leftish) (insert unique, node already built).
   Returns pair<iterator,bool> through the hidden result pointer. On failure the node's value is
   destroyed (two members, destructor fn_82359C18) and the node freed with fn_824B4280. */

struct Node_82F57820 {
    struct Node_82F57820 *left;    /* 0x00 */
    struct Node_82F57820 *parent;  /* 0x04 */
    struct Node_82F57820 *right;   /* 0x08 */
    unsigned int pad0c;            /* 0x0C */
    unsigned int key;              /* 0x10 */
    unsigned int pad14;            /* 0x14 */
    struct Unk18 {
        int unk0[6];               /* 0x18 */
        int unk18[6];              /* 0x30 */
    } unk18;
    char color;                    /* 0x48 */
    char isnil;                    /* 0x49 */
};

struct Element_82F56FC0;

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
    _Tree_const_iterator(::Node_82F57820 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_82F57820 *_Ptr;
};
}

typedef std::_Tset_traits<Element_82F56FC0, std::less<Element_82F56FC0>,
                          std::allocator<Element_82F56FC0>, false> Traits_82F57820;
typedef std::_Tree<Traits_82F57820> Tree_82F57820;
typedef std::_Tree_nod<Traits_82F57820>::_Node TNode_82F57820;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_82F57820> > Iter_82F57820;

struct Pair_82F57820 {
    Iter_82F57820 first;
    bool second;
    Pair_82F57820(const Iter_82F57820 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_82F57820 fn_82F57820(Tree_82F57820 *t, Node_82F57820 *node, bool leftish);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_82F57820 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_82F57820 (::fn_82F57820)(_Tree *, ::Node_82F57820 *, bool);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_823FACD8(Iter_82F57820 *it);
extern "C" void fn_82359C18(void *p);
extern "C" void fn_824B4280(void *p);

extern "C" Pair_82F57820 fn_82F57820(Tree_82F57820 *t, Node_82F57820 *node, bool leftish)
{
    Node_82F57820 *trynode = t->_Myhead->parent;
    Node_82F57820 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        if (leftish)
            addleft = !(trynode->key < node->key);
        else
            addleft = node->key < trynode->key;
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_82F57820 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_82F57820(t->_Insert(true, (TNode_82F57820 *)wherenode,
                                        (TNode_82F57820 *)node), true);
    else
        fn_823FACD8(&where);

    if (where._Ptr->key < node->key)
        return Pair_82F57820(t->_Insert(addleft, (TNode_82F57820 *)wherenode,
                                        (TNode_82F57820 *)node), true);

    Node_82F57820::Unk18 *v = &node->unk18;
    fn_82359C18(v->unk18);
    fn_82359C18(v->unk0);
    fn_824B4280(node);
    return Pair_82F57820(where, false);
}
