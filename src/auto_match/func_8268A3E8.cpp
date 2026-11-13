// Looks a name up in the object's table and copies the entry found to out.
// Returns 1 when the name is there.
#include "game/String_8268C510.h"

struct Entry_8268A3E8 {
    String_8268C510 name;
    float value;
    int extra;
};

struct Owner_8268A3E8 {
    char pad[0xc];
    void *table;
};

extern "C" {
Entry_8268A3E8 *fn_8268A388(void *table, const String_8268C510 **key);
void fn_8268BA10(Entry_8268A3E8 *dst, Entry_8268A3E8 *src);
}

static __forceinline Entry_8268A3E8 *Find(void *table, const String_8268C510 &name)
{
    const String_8268C510 *key = &name;
    return fn_8268A388(table, &key);
}

extern "C" int fn_8268A3E8(Owner_8268A3E8 *self, Entry_8268A3E8 *out, const char *text)
{
    if (self->table != 0) {
        Entry_8268A3E8 *entry = Find(self->table, text);
        if (entry != 0) {
            fn_8268BA10(out, entry);
            out->value = entry->value;
            out->extra = entry->extra;
            return 1;
        }
    }
    return 0;
}
