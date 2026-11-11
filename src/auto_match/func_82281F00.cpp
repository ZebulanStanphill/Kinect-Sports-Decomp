#include <vector>
#include <memory>
extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_822821C0(void *self, unsigned int count);
unsigned char fn_8223AAC0(std::tr1::_Ref_count_base *rep); // _Ref_count_base::_Incref_nz
void fn_822315A0(std::tr1::_Ref_count_base *rep);          // _Ref_count_base::_Decref
}
struct Pointee_82281F00;
struct Element_82281F00 {
    int value;
    std::tr1::shared_ptr<Pointee_82281F00> ptr;
};
typedef Element_82281F00 E;

template <> __forceinline void std::tr1::_Ptr_base<Pointee_82281F00>::_Reset0(
    Pointee_82281F00 *other_ptr, std::tr1::_Ref_count_base *other_rep)
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
    _Rep = other_rep;
    _Ptr = other_ptr;
}
template <> __forceinline void std::tr1::_Ptr_base<Pointee_82281F00>::_Reset(
    Pointee_82281F00 *other_ptr, std::tr1::_Ref_count_base *other_rep, bool _Throw)
{
    if (other_rep && fn_8223AAC0(other_rep))
        _Reset0(other_ptr, other_rep);
}

template <> void std::allocator<E>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}
template <> void std::vector<E>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline E *std::_Allocate(size_t count, E *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((size_t)-1 / sizeof(E) < count || (ptr = fn_8265C9E0(count * sizeof(E))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (E *)ptr;
}
template <> __forceinline E *std::allocator<E>::allocate(size_type count)
{
    return std::_Allocate(count, (E *)0);
}

template <> __forceinline void std::vector<E>::reserve(size_type count)
{
    fn_822821C0(this, count);
}
template void std::vector<E>::push_back(const E &);
