// std::map<unsigned int, Value>::find, returning a pointer to the mapped value
// or null when the key is absent. Value_82318848 is a placeholder for the
// game's 20-byte mapped type.
#include <map>

struct Value_82318848 {
    int data[5];
};

typedef std::map<unsigned int, Value_82318848> Map_82318848;

extern "C" Value_82318848 *fn_82318848(Map_82318848 *map, unsigned int key)
{
    Map_82318848::iterator it = map->find(key);
    if (it != map->end())
        return &it->second;
    return 0;
}
