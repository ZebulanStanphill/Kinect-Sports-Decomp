#include <map>

struct Owner_82364DF0 {
    unsigned char field_0[0x178];
    std::map<unsigned int, unsigned int> map;
};

extern "C" unsigned int fn_82364DF0(Owner_82364DF0 *self, unsigned int key)
{
    return self->map.find(key)->second;
}
