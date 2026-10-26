// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>. T is
// std::tr1::weak_ptr<Pointee_82456688>; Pointee_82456688 is a placeholder for
// the type the pointer refers to.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The weak_ptr copy constructor's std::tr1::_Ptr_base<T>::_Resetw stays a
// call to fn_8228E658 and this vector's reserve a call to fn_82456810. The
// specializations call them, operator delete and std::_Xlength_error by the
// names that C units use.

#include <memory>
#include <vector>

struct Pointee_82456688;

typedef std::tr1::_Ptr_base<Pointee_82456688> PtrBase;
typedef std::tr1::weak_ptr<Pointee_82456688> T;

extern "C" {
void fn_8228E658(PtrBase *self, const PtrBase *other);
void fn_82456810(std::vector<T> *self, unsigned int count);
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> template <> __forceinline void PtrBase::_Resetw(const PtrBase &other)
{
    fn_8228E658(this, &other);
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
    fn_82456810(this, count);
}

template void std::vector<T>::push_back(const T &);
