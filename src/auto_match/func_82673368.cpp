// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>, with
// Element_826717F8 the game's 64-byte element type (placeholder name shared with
// reserve/_Reserve in func_826717F8.cpp). _Reserve is called out of line by its
// mangled name; push_back needs the rename map in km/agents/renames/func_82673368.txt.

#include <vector>

struct Element_826717F8 {
    int data[16];
};

typedef Element_826717F8 T;

template <> void std::vector<T>::_Reserve(size_type);

template void std::vector<T>::push_back(const T &);
