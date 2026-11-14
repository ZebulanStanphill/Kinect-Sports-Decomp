#include <vector>

struct Element_82512E18 {
    int data[3];
};

template <> void std::vector<Element_82512E18>::push_back(const Element_82512E18 &value);

struct Registry_82512B08 {
    int pad0[3];
    unsigned int nextId;                        /* 0x0c */
    int pad10;
    std::vector<Element_82512E18> entries;      /* 0x14 */
};

extern "C" Registry_82512B08 *fn_82512C30(void);
extern "C" void fn_82512CC8(Registry_82512B08 *registry);

extern "C" unsigned int fn_82512B08(int callback, int context)
{
    Registry_82512B08 *registry = fn_82512C30();
    Element_82512E18 e;
    unsigned int id;
    id = registry->nextId + 1;
    e.data[1] = callback;
    e.data[2] = context;
    registry->nextId = id;
    e.data[0] = id;
    if (id <= 0) {
        id++;
        registry->nextId = id;
        e.data[0] = id;
    }
    registry->entries.push_back(e);
    fn_82512CC8(registry);
    return e.data[0];
}
