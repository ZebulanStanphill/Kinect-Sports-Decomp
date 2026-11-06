#include <set>
struct Element_82468470 { int data[1]; };
inline bool operator<(const Element_82468470 &a,const Element_82468470 &b) { return a.data[0]<b.data[0]; }
typedef std::set<Element_82468470> Set_824669A8;
typedef Set_824669A8::_Mybase Tree_824669A8;
typedef std::_Tree_unchecked_const_iterator<Tree_824669A8::_Mybase> Unchecked_824669A8;
extern "C" {
void fn_82467D80(Tree_824669A8 *);
void fn_8265CA20(void *);
__declspec(noalias) void fn_8259BDA8(Unchecked_824669A8 *);
}
template <> __forceinline Unchecked_824669A8 &Unchecked_824669A8::operator++() {
 fn_8259BDA8(this); return *this;
}
template <> __forceinline void std::allocator<Tree_824669A8::_Node>::deallocate(pointer p,size_type) { fn_8265CA20(p); }
template <> __forceinline void Tree_824669A8::clear() { fn_82467D80(this); }
template <> Tree_824669A8::iterator Tree_824669A8::erase(Tree_824669A8::const_iterator);
extern "C" void fn_824669A8(Tree_824669A8 *self) { self->erase(self->begin(),self->end()); fn_8265CA20(*(void **)((char *)self+4)); }
