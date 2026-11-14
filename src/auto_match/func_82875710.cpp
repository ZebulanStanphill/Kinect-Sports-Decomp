// std::vector<T>::resize(size_type) from Visual C++ 2010's <vector>, for the
// vector of 112-byte elements (Element_82875698). _Reserve is the out-of-line
// member; erase is inlined, with std::_Move (fn_828754A8) and
// std::_Destroy_range (fn_82875118) out of line, and the default fill loop is
// fn_82875500, all reached by their fn_ names.
#include <vector>

struct Element_82875698 {
    int data[28];
};

typedef Element_82875698 T;
typedef std::vector<T> V;

extern "C" {
T *fn_828754A8(T *first, T *last, T *dest);
void fn_82875118(T *first, T *last, std::allocator<T> *al);
void fn_82875500(T *first, unsigned int count, const T *pval, std::allocator<T> *al, T *valty,
                 std::_Nonscalar_ptr_iterator_tag tag);
}

template <> void V::_Reserve(size_type count);

template <> __forceinline T *std::_Move(T *first, T *last, T *dest)
{
    return fn_828754A8(first, last, dest);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al)
{
    fn_82875118(first, last, &al);
}

template <> __forceinline void std::_Uninit_def_fill_n<T *, unsigned int, T, std::allocator<T>, T>(
    T *first, unsigned int count, const T *pval, std::allocator<T> &al, T *valty,
    std::_Nonscalar_ptr_iterator_tag tag)
{
    fn_82875500(first, count, pval, &al, valty, tag);
}

extern "C" void fn_82875710(V *self, V::size_type count)
{
    self->resize(count);
}
