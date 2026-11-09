// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_827D8FB8 is the placeholder for the game's 8-byte element type
// (shared with _Reserve in func_827D8FB8.cpp). C units call this function,
// _Reserve and the allocator's construct, so all keep their fn_ names; the
// specializations below reach them from the standard library code.

#include <vector>

struct Element_827D8FB8 {
    int data[2];
};

typedef Element_827D8FB8 T;

extern "C" {
void fn_827D8FB8(std::vector<T> *self, unsigned int count);
void fn_827D8A28(std::allocator<T> *self, T *ptr, T &val);
void fn_827D8AB8(T *ptr, const T &val);
}

template <> __forceinline void std::vector<T>::_Reserve(size_type count)
{
    fn_827D8FB8(this, count);
}

template <> template <> __forceinline void std::allocator<T>::construct<T &>(pointer ptr, T &val)
{
    fn_827D8A28(this, ptr, val);
}

template <> __forceinline void std::_Construct<T, const T &>(T *ptr, const T &val)
{
    fn_827D8AB8(ptr, val);
}

extern "C" void fn_827D9138(std::vector<T> *self, const T *val)
{
    self->push_back(*val);
}
