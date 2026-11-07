struct Element_82F573F8;

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

typedef std::_Tree<std::_Tset_traits<Element_82F573F8, std::less<Element_82F573F8>,
    std::allocator<Element_82F573F8>, false> > Tree_82F57B10;

struct Node_82F57B10 {
    Node_82F57B10 *_Left;
    Node_82F57B10 *_Parent;
    Node_82F57B10 *_Right;
};

struct TreeObj_82F57B10 {
    int _Alnod;
    Node_82F57B10 *_Myhead;
    unsigned int _Mysize;
};

extern "C" void fn_82F57950(TreeObj_82F57B10 *t);
extern "C" __declspec(noalias) void *fn_822509A0(Node_82F57B10 **it);

extern "C" Node_82F57B10 **fn_82F57B10(Node_82F57B10 **ret, TreeObj_82F57B10 *t,
                                        Node_82F57B10 *first, Node_82F57B10 *last)
{
    if (first == t->_Myhead->_Left && last == t->_Myhead) {
        fn_82F57950(t);
        *ret = t->_Myhead->_Left;
    } else {
        while (first != last) {
            Node_82F57B10 *old = first;
            fn_822509A0(&first);
            ((Tree_82F57B10 *)t)->erase(Tree_82F57B10::const_iterator(old));
        }
        *ret = first;
    }
    return ret;
}
