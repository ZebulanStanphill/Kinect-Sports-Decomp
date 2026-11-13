#include <map>

typedef struct Obj_82381548 {
    char pad[0x18];
    std::map<int, int> map;
} Obj_82381548;

extern "C" int fn_82381548(Obj_82381548 *o, int key)
{
    std::map<int, int>::iterator it = o->map.find(key);
    if (it != o->map.end())
        return it->second;
    return -1;
}
