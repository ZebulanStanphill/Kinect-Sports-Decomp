// Assigns a vector of placeholder 80-byte records using the system allocator.
// Copy construction and library helpers retain their existing function names.
#include <vector>
#include "game/Allocator_825089A0.h"
struct Element_828D3A40;
extern "C" void fn_828D36C8(Element_828D3A40 *, const Element_828D3A40 *);
struct Element_828D3A40 {
    int data[20];
    Element_828D3A40(const Element_828D3A40 &other) { fn_828D36C8(this,&other); }
    ~Element_828D3A40();
    Element_828D3A40 &operator=(const Element_828D3A40 &);
};
typedef Element_828D3A40 T;
typedef Allocator_825089A0<T,1> Allocator;
typedef std::vector<T,Allocator> Vector;
extern "C" {
bool fn_828D3430(Vector *,unsigned int);
T *fn_828D3770(T *,T *,T *,std::_Nonscalar_ptr_iterator_tag);
void fn_828D3860(T *,T *,Allocator *,std::_Nonscalar_ptr_iterator_tag);
void fn_828D38C0(Vector *);
}
template <> __forceinline T *std::_Copy_impl<T *,T *>(T *first,T *last,T *dest,std::_Nonscalar_ptr_iterator_tag tag) { return fn_828D3770(first,last,dest,tag); }
template <> __forceinline void std::_Destroy_range(T *first,T *last,Allocator &al,std::_Nonscalar_ptr_iterator_tag tag) { fn_828D3860(first,last,&al,tag); }
template <> __forceinline bool Vector::_Buy(size_type count) { return fn_828D3430(this,count); }
template <> __forceinline void Vector::clear() { fn_828D38C0(this); }
extern "C" Vector *fn_828D3A40(Vector *self,const Vector *other) { *self=*other; return self; }
