struct Element_824A2C00;

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

typedef std::_Tree<std::_Tset_traits<Element_824A2C00, std::less<Element_824A2C00>,
    std::allocator<Element_824A2C00>, false> > Tree_82F53090;

struct Node_82F53090 {
    Node_82F53090 *_Left;
    Node_82F53090 *_Parent;
    Node_82F53090 *_Right;
};

struct TreeObj_82F53090 {
    int _Alnod;
    Node_82F53090 *_Myhead;
    unsigned int _Mysize;
};

extern "C" void fn_82F53038(TreeObj_82F53090 *t);
extern "C" __declspec(noalias) void *fn_824A30C8(Node_82F53090 **it);

extern "C" Node_82F53090 **fn_82F53090(Node_82F53090 **ret, TreeObj_82F53090 *t,
                                        Node_82F53090 *first, Node_82F53090 *last)
{
    if (first == t->_Myhead->_Left && last == t->_Myhead) {
        fn_82F53038(t);
        *ret = t->_Myhead->_Left;
    } else {
        while (first != last) {
            Node_82F53090 *old = first;
            fn_824A30C8(&first);
            ((Tree_82F53090 *)t)->erase(Tree_82F53090::const_iterator(old));
        }
        *ret = first;
    }
    return ret;
}
