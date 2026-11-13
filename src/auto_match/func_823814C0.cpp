#include <map>

typedef struct Obj_823814C0 {
    char pad[0x8];
    std::map<int, int> map;
} Obj_823814C0;

extern "C" int fn_823814C0(Obj_823814C0 *o, int key)
{
    std::map<int, int>::iterator it = o->map.find(key);
    if (it != o->map.end())
        return it->second;
    return 0x16;
}
