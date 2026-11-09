struct Element_826749B8;

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

typedef std::_Tree<std::_Tset_traits<Element_826749B8, std::less<Element_826749B8>,
    std::allocator<Element_826749B8>, false> > Tree_82674FB8;

struct Node_82674FB8 {
    Node_82674FB8 *_Left;
    Node_82674FB8 *_Parent;
    Node_82674FB8 *_Right;
};

struct TreeObj_82674FB8 {
    int _Alnod;
    Node_82674FB8 *_Myhead;
    unsigned int _Mysize;
};

extern "C" void fn_82674F60(TreeObj_82674FB8 *t);
extern "C" __declspec(noalias) void *fn_825503E0(Node_82674FB8 **it);

extern "C" Node_82674FB8 **fn_82674FB8(Node_82674FB8 **ret, TreeObj_82674FB8 *t,
                                        Node_82674FB8 *first, Node_82674FB8 *last)
{
    if (first == t->_Myhead->_Left && last == t->_Myhead) {
        fn_82674F60(t);
        *ret = t->_Myhead->_Left;
    } else {
        while (first != last) {
            Node_82674FB8 *old = first;
            fn_825503E0(&first);
            ((Tree_82674FB8 *)t)->erase(Tree_82674FB8::const_iterator(old));
        }
        *ret = first;
    }
    return ret;
}
