struct Element_82828D18;

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

typedef std::_Tree<std::_Tset_traits<Element_82828D18, std::less<Element_82828D18>,
    std::allocator<Element_82828D18>, false> > Tree_82829218;

struct Node_82829218 {
    Node_82829218 *_Left;
    Node_82829218 *_Parent;
    Node_82829218 *_Right;
};

struct TreeObj_82829218 {
    int _Alnod;
    Node_82829218 *_Myhead;
    unsigned int _Mysize;
};

extern "C" void fn_828290C8(TreeObj_82829218 *t);
extern "C" __declspec(noalias) void *fn_823E2D30(Node_82829218 **it);

extern "C" Node_82829218 **fn_82829218(Node_82829218 **ret, TreeObj_82829218 *t,
                                        Node_82829218 *first, Node_82829218 *last)
{
    if (first == t->_Myhead->_Left && last == t->_Myhead) {
        fn_828290C8(t);
        *ret = t->_Myhead->_Left;
    } else {
        while (first != last) {
            Node_82829218 *old = first;
            fn_823E2D30(&first);
            ((Tree_82829218 *)t)->erase(Tree_82829218::const_iterator(old));
        }
        *ret = first;
    }
    return ret;
}
