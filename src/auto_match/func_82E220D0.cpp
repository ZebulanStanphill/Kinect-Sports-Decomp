// std::deque<T>::push_back(const T&) from Visual C++ 2010's <deque>, for the
// deque whose _Growmap is func_82E21E18.cpp. Element_82E21E18 is a placeholder
// for the game's 28-byte value type, which is copied by fn_8223B688 (the
// std::string copy constructor other units call); its only caller,
// func_82E22508, appends a string. Converted from the Matching extern "C"
// version so that fn_82E21E18 can take its member name; fn_82E220D0 takes the
// push_back name too.
//
// The block allocation is std::_Allocate with the game's operator new,
// fn_8265C9E0, which keeps the name that C units use.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#undef _Xlength_error

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8223B688(void *self, const void *other);
}

struct Element_82E21E18 {
    int data[7];

    Element_82E21E18(const Element_82E21E18 &other) { fn_8223B688(this, &other); }
};

typedef Element_82E21E18 T;
typedef std::deque<T> Deque;

// The game's global operator new is fn_8265C9E0.
template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((size_t)-1 / sizeof(T) < count
             || (ptr = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)ptr;
}

template <> void Deque::_Growmap(size_type);

template void Deque::push_back(const T &);
