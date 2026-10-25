// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82457070 is a placeholder for the game's 24-byte element type, whose
// copy constructor is fn_822C5B18.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_82457208) by the names that C units use.

#include <vector>

struct Element_82457070 {
    Element_82457070();
    Element_82457070(const Element_82457070 &other);
    ~Element_82457070();
    Element_82457070 &operator=(const Element_82457070 &other);
    int data[6];
};

extern "C" void fn_822C5B18(Element_82457070 *self, const Element_82457070 *other);

inline Element_82457070::Element_82457070(const Element_82457070 &other)
{
    fn_822C5B18(this, &other);
}

typedef Element_82457070 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82457208(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82457208(this, count);
}

template void std::vector<T>::push_back(const T &);
