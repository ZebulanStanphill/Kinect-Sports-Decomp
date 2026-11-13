// Look an object up in the map of game/Value_8225E360.h and return it unless the
// entry is missing or the object's flag at 0xd8 is set. The find is the
// out-of-line member, func_8225E360.cpp; it is left to the library's own
// declaration because declaring it as a specialization here makes the compiler
// load the found node before the end node.
#include "game/Value_8225E360.h"

extern "C" Value_8225E360 *fn_8225D9B8(Map_8225E360 *map, unsigned int key)
{
    Map_8225E360::iterator it = map->find(key);
    if (it == map->end() || it->second.object->flag) return 0;
    return it->second.object;
}
