/* fn_823E1690: std::_Tree<_Tset_traits<Element_823E1A78,...> > hinted insert
   (VC10 _Insert(const_iterator, _Nodeptr) shape).  C++ is needed because the
   callee _Tree::_Insert(bool, _Node *, _Node *) is a mangled protected member. */

struct Element_823E1A78;

struct Node_823E1690 {
    Node_823E1690 *left;
    Node_823E1690 *parent;
    Node_823E1690 *right;
    unsigned int value0;
    unsigned int key;
    unsigned char pad[0x50 - 0x14];
    unsigned char color;
    unsigned char isnil;
};

namespace std {
template<class T> struct less;
template<class T> class allocator;
template<class K, class Pr, class Al, bool Mfl> class _Tset_traits;
template<class Tr> class _Tree_nod { public: struct _Node; };
template<class Tr> class _Tree_val;
template<class Mytree> class _Tree_const_iterator {
public:
    Node_823E1690 *_Ptr;
    _Tree_const_iterator() : _Ptr(0) {}
};
template<class Tr> class _Tree {
protected:
    _Tree_const_iterator<_Tree_val<Tr> > _Insert(bool,
        typename _Tree_nod<Tr>::_Node *, typename _Tree_nod<Tr>::_Node *);
};
}

typedef std::_Tset_traits<Element_823E1A78, std::less<Element_823E1A78>,
    std::allocator<Element_823E1A78>, false> Traits_823E1690;
typedef std::_Tree_const_iterator<std::_Tree_val<Traits_823E1690> > Iter_823E1690;
typedef std::_Tree_nod<Traits_823E1690>::_Node TNode_823E1690;

struct Tree_823E1690 {
    void *comp;
    Node_823E1690 *head;
    unsigned int size;
};

struct TreeAccess_823E1690 : std::_Tree<Traits_823E1690> {
    static __forceinline Iter_823E1690 Ins(Tree_823E1690 *t, bool addleft,
                                           Node_823E1690 *w, Node_823E1690 *n)
    {
        return ((TreeAccess_823E1690 *)t)->_Insert(addleft,
            (TNode_823E1690 *)w, (TNode_823E1690 *)n);
    }
};

struct Pair_823E1980 {
    Iter_823E1690 first;
    bool second;
    Pair_823E1980() {}
};

extern "C" Pair_823E1980 fn_823E1980(Tree_823E1690 *t, Node_823E1690 *n);
extern "C" Iter_823E1690 *fn_824CC480(Iter_823E1690 *it);
extern "C" Iter_823E1690 *fn_823E1618(Iter_823E1690 *it);

extern "C" Iter_823E1690 fn_823E1690(Tree_823E1690 *t, Node_823E1690 *where,
                                     Node_823E1690 *node)
{
    Iter_823E1690 next;

    if (t->size == 0)
        return TreeAccess_823E1690::Ins(t, true, t->head, node);

    Node_823E1690 *head = t->head;
    if (where == head->left) {
        if (node->key < where->key)
            return TreeAccess_823E1690::Ins(t, true, where, node);
    } else if (where == head) {
        Node_823E1690 *rmost = head->right;
        if (rmost->key < node->key)
            return TreeAccess_823E1690::Ins(t, false, rmost, node);
    } else {
        unsigned int nk = node->key;
        unsigned int wk = where->key;
        if (nk < wk
            && (next._Ptr = where, fn_824CC480(&next)->_Ptr->key < nk)) {
            if (next._Ptr->right->isnil)
                return TreeAccess_823E1690::Ins(t, false, next._Ptr, node);
            else
                return TreeAccess_823E1690::Ins(t, true, where, node);
        } else if (wk < nk
                   && ((next._Ptr = where, fn_823E1618(&next)->_Ptr == head)
                       || nk < next._Ptr->key)) {
            if (where->right->isnil)
                return TreeAccess_823E1690::Ins(t, false, where, node);
            else
                return TreeAccess_823E1690::Ins(t, true, next._Ptr, node);
        }
    }
    return fn_823E1980(t, node).first;
}
