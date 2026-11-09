struct Element_8286A758;

namespace std {
template<class _Ty> struct less;
template<class _Ty> class allocator;
template<class _Kty, class _Pr, class _Alloc, bool _Mfl> class _Tset_traits;
template<class _Traits> class _Tree_val;
template<class _Mytree> class _Tree_const_iterator {
public:
    _Tree_const_iterator(void *_Pnode) : _Ptr(_Pnode) {}
    void *_Ptr;
};
template<class _Traits> class _Tree {
public:
    typedef _Tree_const_iterator<_Tree_val<_Traits> > const_iterator;
    const_iterator erase(const_iterator _Where);
};
}

typedef std::_Tree<std::_Tset_traits<Element_8286A758, std::less<Element_8286A758>,
    std::allocator<Element_8286A758>, false> > Tree_8286B108;

struct Node_8286B108 {
    Node_8286B108 *_Left;
    Node_8286B108 *_Parent;
    Node_8286B108 *_Right;
};

struct TreeObj_8286B108 {
    int _Alnod;
    Node_8286B108 *_Myhead;
    unsigned int _Mysize;
};

extern "C" void fn_8286AC88(TreeObj_8286B108 *t);
extern "C" __declspec(noalias) void *fn_82250928(Node_8286B108 **it);

extern "C" Node_8286B108 **fn_8286B108(Node_8286B108 **ret, TreeObj_8286B108 *t,
                                        Node_8286B108 *first, Node_8286B108 *last)
{
    if (first == t->_Myhead->_Left && last == t->_Myhead) {
        fn_8286AC88(t);
        *ret = t->_Myhead->_Left;
    } else {
        while (first != last) {
            Node_8286B108 *old = first;
            fn_82250928(&first);
            ((Tree_8286B108 *)t)->erase(Tree_8286B108::const_iterator(old));
        }
        *ret = first;
    }
    return ret;
}
