#include <string>

// std::string::append(const string &, size_t, size_t) keeps its fn_ name (C units call it).
extern "C" std::string &fn_8223DEF8(std::string *self, const std::string &right, size_t roff, size_t count);

extern "C" std::string &fn_82336760(std::string &left, std::string &right)
{
    if (right.size() <= left.capacity() - left.size() || right.capacity() - right.size() < left.size())
        return fn_8223DEF8(&left, right, 0, std::string::npos);
    return right.insert(0, left);
}
