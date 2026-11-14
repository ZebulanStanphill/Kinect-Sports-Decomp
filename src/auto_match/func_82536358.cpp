#include <vector>
#include <algorithm>

struct Group_82536358 {
    char pad[0x24];
    std::vector<void *> items;
};

struct Registry_82536358 {
    Group_82536358 **begin;
    Group_82536358 **end;
};

extern "C" Registry_82536358 *lbl_8327F874;

/* Is `item` listed in any group of the registry? */
extern "C" bool fn_82536358(void *item)
{
    Group_82536358 **group;

    for (group = lbl_8327F874->begin; group != lbl_8327F874->end; group++) {
        if (std::find((*group)->items.begin(), (*group)->items.end(), item) != (*group)->items.end()) {
            return true;
        }
    }
    return false;
}
