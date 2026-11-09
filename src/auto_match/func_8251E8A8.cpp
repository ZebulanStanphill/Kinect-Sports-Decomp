struct Element_8251E930;

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

typedef std::_Tree<std::_Tset_traits<Element_8251E930, std::less<Element_8251E930>,
    std::allocator<Element_8251E930>, false> > Tree_8251E8A8;

struct Node_8251E8A8 {
    Node_8251E8A8 *_Left;
    Node_8251E8A8 *_Parent;
    Node_8251E8A8 *_Right;
};

struct TreeObj_8251E8A8 {
    int _Alnod;
    Node_8251E8A8 *_Myhead;
    unsigned int _Mysize;
};

extern "C" void fn_8251ECE0(TreeObj_8251E8A8 *t);
extern "C" __declspec(noalias) void *fn_825503E0(Node_8251E8A8 **it);

extern "C" Node_8251E8A8 **fn_8251E8A8(Node_8251E8A8 **ret, TreeObj_8251E8A8 *t,
                                        Node_8251E8A8 *first, Node_8251E8A8 *last)
{
    if (first == t->_Myhead->_Left && last == t->_Myhead) {
        fn_8251ECE0(t);
        *ret = t->_Myhead->_Left;
    } else {
        while (first != last) {
            Node_8251E8A8 *old = first;
            fn_825503E0(&first);
            ((Tree_8251E8A8 *)t)->erase(Tree_8251E8A8::const_iterator(old));
        }
        *ret = first;
    }
    return ret;
}
