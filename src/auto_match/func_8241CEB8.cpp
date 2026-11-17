#include <algorithm>
#include <vector>
#include <utility>

extern "C" char lbl_821B9BC8[];

struct Value_8241CEB8 {
    void *vtable; /* +0x0 */
    int first;    /* +0x4 */
    int second;   /* +0x8 */
    int third;    /* +0xc */
    float value;  /* +0x10 */

    __forceinline Value_8241CEB8 &operator=(const Value_8241CEB8 &source)
    {
        first = source.first;
        second = source.second;
        third = source.third;
        value = source.value;
        return *this;
    }

    __forceinline ~Value_8241CEB8()
    {
        vtable = lbl_821B9BC8;
    }
};

typedef std::pair<void *, Value_8241CEB8> Entry_8241CEB8;

struct Owner_8241CEB8 {
    char pad0[0x3f8];                    /* +0x0 */
    std::vector<Entry_8241CEB8> entries; /* +0x3f8 */
};

struct Predicate_8241CEB8 {
    void *key;
    int value;

    bool operator()(const Entry_8241CEB8 &entry) const
    {
        return entry.first == key && entry.second.second == value;
    }
};

extern "C" void *fn_8241CEB8(Owner_8241CEB8 *self, void *key, int value)
{
    Predicate_8241CEB8 predicate;
    std::vector<Entry_8241CEB8>::iterator entry;

    predicate.key = key;
    predicate.value = value;
    entry = std::find_if(self->entries.begin(), self->entries.end(), predicate);
    if (entry != self->entries.end()) {
        void *result = &entry->second;
        self->entries.erase(entry);
        return result;
    }
    return 0;
}
