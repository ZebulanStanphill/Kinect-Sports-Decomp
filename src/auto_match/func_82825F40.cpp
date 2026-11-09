struct Element_82825AD0;

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

typedef std::_Tree<std::_Tset_traits<Element_82825AD0, std::less<Element_82825AD0>,
    std::allocator<Element_82825AD0>, false> > Tree_82825F40;

struct Node_82825F40 {
    Node_82825F40 *_Left;
    Node_82825F40 *_Parent;
    Node_82825F40 *_Right;
};

struct TreeObj_82825F40 {
    int _Alnod;
    Node_82825F40 *_Myhead;
    unsigned int _Mysize;
};

extern "C" void fn_83062998(TreeObj_82825F40 *t);
extern "C" __declspec(noalias) void *fn_82381BC0(Node_82825F40 **it);

extern "C" Node_82825F40 **fn_82825F40(Node_82825F40 **ret, TreeObj_82825F40 *t,
                                        Node_82825F40 *first, Node_82825F40 *last)
{
    if (first == t->_Myhead->_Left && last == t->_Myhead) {
        fn_83062998(t);
        *ret = t->_Myhead->_Left;
    } else {
        while (first != last) {
            Node_82825F40 *old = first;
            fn_82381BC0(&first);
            ((Tree_82825F40 *)t)->erase(Tree_82825F40::const_iterator(old));
        }
        *ret = first;
    }
    return ret;
}
