// Adds a name with its value to the object's table unless the name is already there.
// Returns 1 when the entry was added.
#include "game/String_8268C510.h"

struct Entry_8268AB00 {
    unsigned int name; /* 0x0, a String_8268C510 */
    float value;       /* 0x4 */
    int extra;         /* 0x8 */

    ~Entry_8268AB00()
    {
        StringData_8268C510 *data = (StringData_8268C510 *)(name & ~3u);
        if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
            fn_8267BE38(data);
        }
    }
};

struct Pair_8268AB00 {
    const String_8268C510 *key; /* 0x0 */
    Entry_8268AB00 *entry;      /* 0x4 */
};

struct Owner_8268AB00 {
    char pad[0xc];
    void *table; /* 0xc */
};

extern "C" {
Entry_8268AB00 *fn_8268A388(void *table, const String_8268C510 **key);
void fn_8268A970(void *table, void *heap, Pair_8268AB00 *pair);
void fn_8268C750(String_8268C510 *dst, const String_8268C510 *src);
}

static __forceinline Entry_8268AB00 *Find(void *table, const String_8268C510 &name)
{
    const String_8268C510 *key = &name;
    return fn_8268A388(table, &key);
}

static __forceinline void Add(void *table, const String_8268C510 &name, Entry_8268AB00 &entry)
{
    Pair_8268AB00 pair;

    pair.key = &name;
    pair.entry = &entry;
    fn_8268A970(table, table, &pair);
}

extern "C" int fn_8268AB00(Owner_8268AB00 *self, const char *key, const char *text, int extra, float value)
{
    if (self->table == 0 || key == 0) {
        return 0;
    }
    String_8268C510 name(key);
    if (Find(self->table, name) != 0) {
        return 0;
    }
    Entry_8268AB00 entry;
    {
        String_8268C510 copy(text);
        fn_8268C750((String_8268C510 *)&entry.name, &copy);
        entry.value = value;
        entry.extra = extra;
    }
    Add(self->table, name, entry);
    return 1;
}
