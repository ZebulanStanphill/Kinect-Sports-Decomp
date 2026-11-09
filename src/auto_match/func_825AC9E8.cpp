// std::deque<T>::push_back(const T&) from Visual C++ 2010's <deque>, written
// out, for a deque of a 4-byte element (four per block). Element_825AD308 is a
// placeholder for the game's element type. Unrelated functions call this one,
// so the linker probably folded several deques' push_back here, and it keeps
// its fn_ name. The map grows through the real _Growmap member,
// func_825AD308.cpp; block allocation is std::_Allocate with the game's
// operator new, fn_8265C9E0.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#undef _Xlength_error

struct Element_825AD308 {
    int data;
};

typedef Element_825AD308 T;

extern "C" void *fn_8265C9E0(unsigned int size);

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

// _Growmap is func_825AD308.cpp.
template <> void std::deque<T>::_Growmap(size_type);

// Gives the out-of-line push functions access to the protected _Growmap.
struct Deque : std::deque<T> {
    using std::deque<T>::_Growmap;
};

extern "C" void fn_825AC9E8(Deque *self, const T *val)
{
    if ((self->_Myoff + self->_Mysize) % 4 == 0
        && self->_Mapsize <= (self->_Mysize + 4) / 4)
        self->_Growmap(1);
    unsigned int newoff = self->_Myoff + self->_Mysize;
    unsigned int block = newoff / 4;
    if (self->_Mapsize <= block)
        block -= self->_Mapsize;
    if (self->_Map[block] == 0)
        self->_Map[block] = std::_Allocate(4, (T *)0);
    new ((void *)(self->_Map[block] + newoff % 4)) T(*val);
    ++self->_Mysize;
}
