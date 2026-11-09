// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>, with
// Element_82816778 the game's 32-byte element type (placeholder name shared with
// reserve/_Reserve in func_82816778.cpp). _Reserve is called out of line by its
// mangled name; push_back needs the rename map in km/agents/renames/func_82816A58.txt.

#include <vector>

struct Element_82816778 {
    int data[8];
};

typedef Element_82816778 T;

template <> void std::vector<T>::_Reserve(size_type);

template void std::vector<T>::push_back(const T &);
