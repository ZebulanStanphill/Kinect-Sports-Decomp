#include <map>

extern "C" unsigned int fn_822ABA88(std::map<unsigned int, unsigned int> *map, unsigned int key)
{
    return map->find(key)->second;
}
