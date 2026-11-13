#include <map>

struct Value_823BC468 {
    unsigned int a;
    unsigned int b;
};

struct Owner_823BC468 {
    int field_0[8];
    std::map<unsigned int, Value_823BC468> map;
};

extern "C" Value_823BC468 *fn_823BC468(Owner_823BC468 *self, unsigned int key)
{
    return &self->map.find(key)->second;
}
