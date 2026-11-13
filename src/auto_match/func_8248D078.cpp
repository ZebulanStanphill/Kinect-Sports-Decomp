// std::vector<T>::operator= (VC10 <vector>) for an 8-byte reference-counting
// pointer (a std::tr1::shared_ptr), whose copy constructor is fn_82365BD8,
// move assignment fn_823F2E20 and release fn_822315A0. Unlike fn_82488DB8,
// clear() is inlined here (erase(begin(), end()) with the _Move loop); _Buy
// and _Destroy_range stay calls (fn_82248AE8, fn_82231540; link-time code
// generation dropped the allocator argument of the last).
#include <vector>
#include <utility>

struct Rep_8248D078;

struct PointerBase_8248D078 {
    void swap(PointerBase_8248D078 &other)
    {
        std::swap(rep, other.rep);
        std::swap(ptr, other.ptr);
    }
    void release();
    void *ptr;
    Rep_8248D078 *rep;
};

// Uninitialised temporary filled by the out-of-line copy constructor.
struct PointerTemp_8248D078 : PointerBase_8248D078 {
    ~PointerTemp_8248D078() { release(); }
};

struct Pointer_8248D078 : PointerBase_8248D078 {
    Pointer_8248D078(const Pointer_8248D078 &other);
    ~Pointer_8248D078() { release(); }
    Pointer_8248D078 &operator=(const Pointer_8248D078 &other);
    Pointer_8248D078 &operator=(Pointer_8248D078 &&other);
};

typedef Pointer_8248D078 T;
typedef std::vector<T> Vector;

extern "C" {
PointerBase_8248D078 *fn_82365BD8(PointerBase_8248D078 *self, const PointerBase_8248D078 *other);
void fn_822315A0(Rep_8248D078 *rep);
Pointer_8248D078 *fn_823F2E20(Pointer_8248D078 *self, Pointer_8248D078 *other);
bool fn_82248AE8(Vector *self, unsigned int count);
void fn_82231540(T *first, T *last);
void fn_8265CA20(void *ptr);
}

inline Pointer_8248D078::Pointer_8248D078(const Pointer_8248D078 &other)
{
    fn_82365BD8(this, &other);
}

inline Pointer_8248D078 &Pointer_8248D078::operator=(Pointer_8248D078 &&other)
{
    return *fn_823F2E20(this, &other);
}

inline void PointerBase_8248D078::release()
{
    if (rep != 0)
        fn_822315A0(rep);
}

inline Pointer_8248D078 &Pointer_8248D078::operator=(const Pointer_8248D078 &other)
{
    PointerTemp_8248D078 tmp;
    fn_82365BD8(&tmp, &other)->swap(*this);
    return *this;
}

template <> __forceinline bool Vector::_Buy(size_type n) { return fn_82248AE8(this, n); }
template <> __forceinline void std::allocator<T>::deallocate(pointer ptr, size_type) { fn_8265CA20(ptr); }
template <> __forceinline void std::_Destroy_range<std::allocator<T> >(T *first, T *last, std::allocator<T> &)
{
    fn_82231540(first, last);
}

extern "C" Vector *fn_8248D078(Vector *self, const Vector *other)
{
    *self = *other;
    return self;
}
