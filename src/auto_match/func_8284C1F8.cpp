// VC10 std::map-style red-black tree (std::_Tree) whose iterators keep the _Adopt call out of line
// (fn_82BA02A8 is the shared empty function).
struct Node_8284C020 {
    Node_8284C020 *left;
    Node_8284C020 *parent;
    Node_8284C020 *right;
};

struct Tree_8284C020;

extern "C" void fn_82BA02A8(const void *it, const void *tree);
extern "C" void fn_8284A128(void *it);
extern "C" void fn_8284B810(Tree_8284C020 *tree);

struct IterBase_8284C020 {
    __forceinline void Adopt(const void *tree) { fn_82BA02A8(this, tree); }
};

struct ConstIter_8284C020 : IterBase_8284C020 {
    Node_8284C020 *ptr;
    __forceinline ConstIter_8284C020(Node_8284C020 *node, const Tree_8284C020 *tree) : ptr(node) { this->Adopt(tree); }
    __forceinline ConstIter_8284C020 &operator++()
    {
        fn_8284A128(this);
        return *this;
    }
    __forceinline ConstIter_8284C020 operator++(int)
    {
        ConstIter_8284C020 tmp = *this;
        ++*this;
        return tmp;
    }
    __forceinline bool operator==(const ConstIter_8284C020 &r) const { return ptr == r.ptr; }
    __forceinline bool operator!=(const ConstIter_8284C020 &r) const { return !(*this == r); }
};

struct Iter_8284C020 : ConstIter_8284C020 {
    __forceinline Iter_8284C020(Node_8284C020 *node, const Tree_8284C020 *tree) : ConstIter_8284C020(node, tree) {}
};

struct Tree_8284C020 {
    int alloc;
    Node_8284C020 *head;
    unsigned int size;
    static __forceinline Node_8284C020 *&Left(Node_8284C020 *node) { return node->left; }
    __forceinline Node_8284C020 *&Lmost() const { return Left(head); }
    __forceinline Iter_8284C020 begin() { return Iter_8284C020(Lmost(), this); }
    __forceinline Iter_8284C020 end() { return Iter_8284C020(head, this); }
    __forceinline void clear() { fn_8284B810(this); }
    Iter_8284C020 Erase(ConstIter_8284C020 where);
    Iter_8284C020 Erase(ConstIter_8284C020 first, ConstIter_8284C020 last);
};

// VC10 std::_Tree::_Tidy(): erase(begin(), end())
extern "C" void fn_8284C1F8(Tree_8284C020 *tree)
{
    tree->Erase(tree->begin(), tree->end());
}
