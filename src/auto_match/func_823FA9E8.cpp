/* fn_823FA9E8: std::set<Element_823FAB00>::_Linsert (insert unique, node already built).
   Returns pair<iterator,bool> through the hidden result pointer. */

/* 0x18-byte member whose destructor is the folded fn_82359C18
   (a tr1::function-style _Tidy: deletes the impl pointer at 0x10). */
struct Func_823FA9E8 { unsigned int w[6]; };
extern "C" void fn_82359C18(Func_823FA9E8 *f);
struct Funcs_823FA9E8 { Func_823FA9E8 a; Func_823FA9E8 b; };

struct Node_823FA9E8 {
    struct Node_823FA9E8 *left;    /* 0x00 */
    struct Node_823FA9E8 *parent;  /* 0x04 */
    struct Node_823FA9E8 *right;   /* 0x08 */
    unsigned int pad0c;            /* 0x0C */
    int key;                       /* 0x10 */
    unsigned int pad14;            /* 0x14 */
    Funcs_823FA9E8 fs;             /* 0x18 */
    char color;                    /* 0x48 */
    char isnil;                    /* 0x49 */
};

struct Element_823FAB00;

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
    _Tree_const_iterator(::Node_823FA9E8 *p) : _Ptr(p) {}
    bool operator==(const _Tree_const_iterator &r) const { return _Ptr == r._Ptr; }
    ::Node_823FA9E8 *_Ptr;
};
}

typedef std::_Tset_traits<Element_823FAB00, std::less<Element_823FAB00>,
                          std::allocator<Element_823FAB00>, false> Traits_823FA9E8;
typedef std::_Tree<Traits_823FA9E8> Tree_823FA9E8;
typedef std::_Tree_nod<Traits_823FA9E8>::_Node TNode_823FA9E8;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_823FA9E8> > Iter_823FA9E8;

struct Pair_823FA9E8 {
    Iter_823FA9E8 first;
    bool second;
    Pair_823FA9E8(const Iter_823FA9E8 &a, const bool &b) : first(a), second(b) {}
};

extern "C" Pair_823FA9E8 fn_823FA9E8(Tree_823FA9E8 *t, Node_823FA9E8 *node);

namespace std {
template<class Tr> class _Tree {
public:
    int _Pad0;
    ::Node_823FA9E8 *_Myhead;
    unsigned int _Mysize;
    _Tree_const_iterator<_Tree_val<Tr> > begin()
    {
        return _Tree_const_iterator<_Tree_val<Tr> >(_Myhead->left);
    }
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool _Addleft,
                                                 typename _Tree_nod<Tr>::_Node *_Wherenode,
                                                 typename _Tree_nod<Tr>::_Node *_Newnode);
    friend ::Pair_823FA9E8 (::fn_823FA9E8)(_Tree *, ::Node_823FA9E8 *);
};
}

/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
extern "C" __declspec(noalias) void fn_823FACD8(Iter_823FA9E8 *it);
extern "C" void fn_8265CA20(void *p);

/* the set's key compare, std::less on the int key */
struct Less_823FA9E8 {
    bool operator()(const int &a, const int &b) const { return a < b; }
};

extern "C" Pair_823FA9E8 fn_823FA9E8(Tree_823FA9E8 *t, Node_823FA9E8 *node)
{
    Node_823FA9E8 *trynode = t->_Myhead->parent;
    Node_823FA9E8 *wherenode = t->_Myhead;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        addleft = Less_823FA9E8()(node->key, trynode->key);
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_823FA9E8 where(wherenode);
    if (!addleft)
        ;
    else if (where == t->begin())
        return Pair_823FA9E8(t->_Insert(true, (TNode_823FA9E8 *)wherenode,
                                        (TNode_823FA9E8 *)node), true);
    else
        fn_823FACD8(&where);

    if (Less_823FA9E8()(where._Ptr->key, node->key))
        return Pair_823FA9E8(t->_Insert(addleft, (TNode_823FA9E8 *)wherenode,
                                        (TNode_823FA9E8 *)node), true);

    {
        Funcs_823FA9E8 *fs = &node->fs;
        fn_82359C18(&fs->b);
        fn_82359C18(&fs->a);
    }
    fn_8265CA20(node);
    return Pair_823FA9E8(where, false);
}
