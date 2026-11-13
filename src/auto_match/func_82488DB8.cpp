// std::vector<T>::operator= (VC10 <vector>) for an 8-byte reference-counting
// pointer (a std::tr1::shared_ptr), whose copy constructor is fn_82365BD8 and
// whose release is fn_822315A0. clear, _Buy and _Destroy_range stay calls
// (fn_82488FB8, fn_82248AE8, fn_82231540; link-time code generation dropped
// the allocator argument of the last).
#include <vector>
#include <utility>

struct Rep_82488DB8;

struct PointerBase_82488DB8 {
    void swap(PointerBase_82488DB8 &other)
    {
        std::swap(rep, other.rep);
        std::swap(ptr, other.ptr);
    }
    void release();
    void *ptr;
    Rep_82488DB8 *rep;
};

// Uninitialised temporary filled by the out-of-line copy constructor.
struct PointerTemp_82488DB8 : PointerBase_82488DB8 {
    ~PointerTemp_82488DB8() { release(); }
};

struct Pointer_82488DB8 : PointerBase_82488DB8 {
    Pointer_82488DB8(const Pointer_82488DB8 &other);
    ~Pointer_82488DB8() { release(); }
    Pointer_82488DB8 &operator=(const Pointer_82488DB8 &other);
};

typedef Pointer_82488DB8 T;
typedef std::vector<T> Vector;

extern "C" {
PointerBase_82488DB8 *fn_82365BD8(PointerBase_82488DB8 *self, const PointerBase_82488DB8 *other);
void fn_822315A0(Rep_82488DB8 *rep);
void fn_82488FB8(Vector *self);
bool fn_82248AE8(Vector *self, unsigned int count);
void fn_82231540(T *first, T *last);
void fn_8265CA20(void *ptr);
}

inline Pointer_82488DB8::Pointer_82488DB8(const Pointer_82488DB8 &other)
{
    fn_82365BD8(this, &other);
}

inline void PointerBase_82488DB8::release()
{
    if (rep != 0)
        fn_822315A0(rep);
}

inline Pointer_82488DB8 &Pointer_82488DB8::operator=(const Pointer_82488DB8 &other)
{
    PointerTemp_82488DB8 tmp;
    fn_82365BD8(&tmp, &other)->swap(*this);
    return *this;
}

template <> __forceinline void Vector::clear() { fn_82488FB8(this); }
template <> __forceinline bool Vector::_Buy(size_type n) { return fn_82248AE8(this, n); }
template <> __forceinline void std::allocator<T>::deallocate(pointer ptr, size_type) { fn_8265CA20(ptr); }
template <> __forceinline void std::_Destroy_range<std::allocator<T> >(T *first, T *last, std::allocator<T> &)
{
    fn_82231540(first, last);
}

extern "C" Vector *fn_82488DB8(Vector *self, const Vector *other)
{
    *self = *other;
    return self;
}
