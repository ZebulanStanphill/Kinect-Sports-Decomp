// Looks an entry up by key in the manager's std::map and, when it exists, overwrites its placement.
#include <map>
#include "xdk/vectorintrinsics.h"

struct Entry_822708D8 {
    char padding00[0x10];
    __vector4 position;  /* 0x10 */
    __vector4 direction; /* 0x20 */
    float margin;        /* 0x30 */
    unsigned int flags;  /* 0x34 */
};

typedef std::map<unsigned int, Entry_822708D8> EntryMap_822708D8;

struct Manager_822708D8 {
    char padding00[0xe4];
    EntryMap_822708D8 entries; /* 0xe4 */
};

extern "C" Manager_822708D8 *fn_82270B70(void);

extern "C" void fn_822708D8(unsigned int key, __vector4 position, __vector4 direction, float margin,
                            unsigned int flags)
{
    Manager_822708D8 *manager = fn_82270B70();
    EntryMap_822708D8::iterator it = manager->entries.find(key);

    if (it != manager->entries.end()) {
        it->second.margin = margin;
        it->second.flags = flags;
        it->second.position = position;
        it->second.direction = direction;
    }
}
