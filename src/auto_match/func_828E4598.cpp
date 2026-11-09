// Tree insertion for the same value type as the matched fn_828E3F60.
#include <memory>
#include <set>
extern "C" void fn_822315A0(std::tr1::_Ref_count_base *rep);
struct Element_828E3F60 {
    struct Object;
    int unk0[2];
    std::tr1::shared_ptr<Object> unk8;
    int unk10[2];
    bool operator<(const Element_828E3F60 &other) const;
};
extern "C" bool fn_828E0270(const Element_828E3F60 *, const Element_828E3F60 *);
inline bool Element_828E3F60::operator<(const Element_828E3F60 &other) const {
    return fn_828E0270(this, &other);
}
template <> __forceinline void std::tr1::_Ptr_base<Element_828E3F60::Object>::_Decref() {
    if (_Rep != 0) fn_822315A0(_Rep);
}
typedef std::set<Element_828E3F60> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
extern "C" {
void fn_8265CA20(void *);
__declspec(noalias) void fn_828E2780(Tree::iterator *);
}
template <> void std::allocator<Node>::deallocate(pointer ptr, size_type) {
    fn_8265CA20(ptr);
}
template <> Tree::iterator Tree::_Insert(bool, _Nodeptr, _Nodeptr);
template <> __forceinline Tree::iterator &Tree::iterator::operator--() {
    fn_828E2780(this);
    return *this;
}
template Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);
