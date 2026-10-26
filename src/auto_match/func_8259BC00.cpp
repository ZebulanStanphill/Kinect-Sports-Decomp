// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8259BC00 is a placeholder for the game's 20-byte element type, which
// holds a 32-bit value, a std::tr1::shared_ptr and two more 32-bit values, and
// is copied with the implicit copy constructor. Pointee_8259BC00 is a
// placeholder for the type the shared_ptr points to.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The shared_ptr's copy constructor reaches
// std::tr1::_Ptr_base<T>::_Reset(T *, _Ref_count_base *, bool), which stays a
// call to fn_82517978. The specializations call fn_82517978, this vector's
// reserve (fn_8259BE20), operator delete and std::_Xlength_error by the names
// that C units use.

#include <memory>
#include <vector>

struct Pointee_8259BC00;

extern "C" void fn_82517978(std::tr1::_Ptr_base<Pointee_8259BC00> *self, Pointee_8259BC00 *ptr,
                            std::tr1::_Ref_count_base *rep, bool throwBadWeakPtr);

template <>
__forceinline void std::tr1::_Ptr_base<Pointee_8259BC00>::_Reset(Pointee_8259BC00 *ptr,
                                                               std::tr1::_Ref_count_base *rep,
                                                               bool throwBadWeakPtr)
{
    fn_82517978(this, ptr, rep, throwBadWeakPtr);
}

struct Element_8259BC00 {
    int unk0;
    std::tr1::shared_ptr<Pointee_8259BC00> ptr;
    int unkC;
    int unk10;
};

typedef Element_8259BC00 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8259BE20(std::vector<T> *self, unsigned int count);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8259BE20(this, count);
}

template void std::vector<T>::push_back(const T &);
