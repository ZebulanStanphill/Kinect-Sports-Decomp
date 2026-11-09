struct Element_828256C0;

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

typedef std::_Tree<std::_Tset_traits<Element_828256C0, std::less<Element_828256C0>,
    std::allocator<Element_828256C0>, false> > Tree_82825FC8;

struct Node_82825FC8 {
    Node_82825FC8 *_Left;
    Node_82825FC8 *_Parent;
    Node_82825FC8 *_Right;
};

struct TreeObj_82825FC8 {
    int _Alnod;
    Node_82825FC8 *_Myhead;
    unsigned int _Mysize;
};

extern "C" void fn_82825E80(TreeObj_82825FC8 *t);
extern "C" __declspec(noalias) void *fn_82518FF0(Node_82825FC8 **it);

extern "C" Node_82825FC8 **fn_82825FC8(Node_82825FC8 **ret, TreeObj_82825FC8 *t,
                                        Node_82825FC8 *first, Node_82825FC8 *last)
{
    if (first == t->_Myhead->_Left && last == t->_Myhead) {
        fn_82825E80(t);
        *ret = t->_Myhead->_Left;
    } else {
        while (first != last) {
            Node_82825FC8 *old = first;
            fn_82518FF0(&first);
            ((Tree_82825FC8 *)t)->erase(Tree_82825FC8::const_iterator(old));
        }
        *ret = first;
    }
    return ret;
}
