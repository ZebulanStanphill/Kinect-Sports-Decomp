// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82284FD0 is a placeholder for the game's 1088-byte element type,
// whose copy constructor is fn_82285290.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_82285168) by the names that C units use.

#include <vector>

struct Element_82284FD0 {
    Element_82284FD0();
    Element_82284FD0(const Element_82284FD0 &other);
    ~Element_82284FD0();
    Element_82284FD0 &operator=(const Element_82284FD0 &other);
    int data[272];
};

extern "C" void fn_82285290(Element_82284FD0 *self, const Element_82284FD0 *other);

inline Element_82284FD0::Element_82284FD0(const Element_82284FD0 &other)
{
    fn_82285290(this, &other);
}

typedef Element_82284FD0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82285168(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82285168(this, count);
}

template void std::vector<T>::push_back(const T &);
