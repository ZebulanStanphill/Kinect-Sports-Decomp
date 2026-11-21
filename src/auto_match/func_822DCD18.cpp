// std::_Unguarded_partition over chars in their natural order, from Visual C++ 2010's <algorithm>,
// instantiated out of line for std::_Sort; std::_Med3 stays a call to fn_822DD518.

#include <algorithm>

extern "C" void fn_822DD518(char *first, char *mid, char *last);

template <> __forceinline void std::_Med3(char *first, char *mid, char *last)
{
    fn_822DD518(first, mid, last);
}

template std::pair<char *, char *> std::_Unguarded_partition<char *>(char *first, char *last);
