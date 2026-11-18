// Adds an entry for key to the manager's std::map unless one exists already.
#include <map>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Entry_822708D8 {
    unsigned int key; /* 0x00 */
    char padding04[0xc];
    __vector4 position;  /* 0x10 */
    __vector4 direction; /* 0x20 */
    float margin;        /* 0x30 */
    unsigned int flags;  /* 0x34 */
};

typedef std::map<unsigned int, Entry_822708D8> EntryMap_822708D8;
typedef EntryMap_822708D8::_Mybase EntryTree_822708D8;

// The tree's insert stays out of line (fn_822734A0).
template <>
template <>
EntryTree_822708D8::_Pairib
EntryTree_822708D8::insert<EntryMap_822708D8::value_type>(EntryMap_822708D8::value_type &&value);

struct Manager_822708D8 {
    char padding00[0xe4];
    EntryMap_822708D8 entries; /* 0xe4 */
};

extern "C" Manager_822708D8 *fn_82270B70(void);

extern "C" void fn_822707B0(unsigned int key, __vector4 position, __vector4 direction, float margin)
{
    Manager_822708D8 *manager = fn_82270B70();
    EntryMap_822708D8::iterator it = manager->entries.find(key);

    if (it == manager->entries.end()) {
        Entry_822708D8 entry;

        entry.key = key;
        entry.position = position;
        entry.direction = direction;
        entry.margin = margin;
        entry.flags = 0;
        manager->entries.insert(EntryMap_822708D8::value_type(key, entry));
    }
}
