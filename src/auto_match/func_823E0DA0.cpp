#include <map>

struct Value_823E0DA0 {
    unsigned char data[0x94];
};

struct Owner_823E0DA0 {
    int field_0;
    std::map<unsigned int, Value_823E0DA0> map;
};

extern "C" Value_823E0DA0 *fn_823E0DA0(Owner_823E0DA0 *self, unsigned int key)
{
    std::map<unsigned int, Value_823E0DA0>::iterator it = self->map.find(key);
    if (it != self->map.end())
        return &it->second;
    return 0;
}
