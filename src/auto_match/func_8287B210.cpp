// std::vector<T>::_Reserve from Visual C++ 2010's <vector>. It makes room for
// new elements, growing the capacity by half or to the size needed.
// Element_82872CE8 is a placeholder for the game's 24-byte element type (its
// reserve is func_82872CE8).
//
// /d2inlS1000 lets the compiler inline as much as the game's link-time code
// generation did. The specializations call std::_Xlength_error by the name C
// units use; reserve is only declared so the call goes to its own unit.

#include <vector>

struct Element_82872CE8 {
    int data[6];
};

typedef Element_82872CE8 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> void std::vector<T>::reserve(size_type count);

// _Reserve is protected
struct Access : std::vector<T> {
    using std::vector<T>::_Reserve;
};

extern "C" void fn_8287B210(std::vector<T> *self, unsigned int count)
{
    static_cast<Access *>(self)->_Reserve(count);
}
