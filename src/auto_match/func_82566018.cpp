// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>. T is
// std::tr1::shared_ptr<Pointee_82566018>; Pointee_82566018 is a placeholder for
// the type the pointer owns.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::tr1::_Ref_count_base::_Incref_nz stays a call to fn_8223AAC0,
// std::tr1::_Ref_count_base::_Decref a call to fn_822315A0 and this vector's
// reserve a call to fn_8232CA90. _Ref_count_base is not a template, so the
// std::tr1::_Ptr_base<T> members that call the first two, _Reset(T *,
// _Ref_count_base *, bool) and _Reset0, are specialized instead. The
// specializations call these, operator delete and std::_Xlength_error by the
// names that C units use.

#include <memory>
#include <vector>

struct Pointee_82566018;

typedef std::tr1::_Ptr_base<Pointee_82566018> PtrBase;
typedef std::tr1::shared_ptr<Pointee_82566018> T;

extern "C" {
void fn_822315A0(std::tr1::_Ref_count_base *rep);
bool fn_8223AAC0(std::tr1::_Ref_count_base *rep);
void fn_8232CA90(std::vector<T> *self, unsigned int count);
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> __forceinline void PtrBase::_Reset0(Pointee_82566018 *other_ptr,
                                                std::tr1::_Ref_count_base *other_rep)
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
    _Rep = other_rep;
    _Ptr = other_ptr;
}

template <> __forceinline void PtrBase::_Reset(Pointee_82566018 *other_ptr,
                                               std::tr1::_Ref_count_base *other_rep, bool)
{
    if (other_rep && fn_8223AAC0(other_rep))
        _Reset0(other_ptr, other_rep);
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
    fn_8232CA90(this, count);
}

template void std::vector<T>::push_back(const T &);
