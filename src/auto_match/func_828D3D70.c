#include <string.h>

typedef struct Entry_828D3D70 {
    int count;
    void *shared;
    unsigned int id;
    int status;
    float value;
    unsigned char data[36];
    unsigned __int64 tag;
    unsigned char extra[16];
} Entry_828D3D70;

typedef struct Entries_828D3D70 {
    Entry_828D3D70 *first;
    Entry_828D3D70 *last;
    Entry_828D3D70 *end;
    int reserved;
} Entries_828D3D70;

typedef struct Group_828D3D70 {
    unsigned int id;
    Entries_828D3D70 entries;
} Group_828D3D70;

typedef struct Table_828D3D70 {
    int reserved;
    Group_828D3D70 *first;
    Group_828D3D70 *last;
    char padding[8];
    Entries_828D3D70 entries;
} Table_828D3D70;

extern void fn_822315A0(void *shared);
extern void fn_828D3C88(Entries_828D3D70 *entries, const Entry_828D3D70 *entry);

int fn_828D3D70(Table_828D3D70 *self, unsigned int group, unsigned int op, unsigned int id, float value,
                const unsigned char *data, const unsigned __int64 *tag, const unsigned char *extra)
{
    switch (op) {
    case 1: {
        Group_828D3D70 *slot;
        for (slot = self->first; slot != self->last; ++slot) {
            if (slot->id == group) {
                Entry_828D3D70 *entry;
                for (entry = slot->entries.first; entry != slot->entries.last; ++entry) {
                    if (entry->id == id) {
                        if (value > 0.0f) {
                            entry->value = value;
                            entry->status = 2;
                        } else {
                            entry->status = 3;
                        }
                        return 1;
                    }
                }
                return 1;
            }
        }
        return 1;
    }
    case 0: {
        Entries_828D3D70 *entries = &self->entries;
        Entry_828D3D70 *end = entries->last;
        Entry_828D3D70 *entry;
        unsigned char found = 0;
        for (entry = entries->first; entry != end; ++entry) {
            if (entry->id == id) {
                found = 1;
            }
        }
        if (!found) {
            Entry_828D3D70 newEntry;
            newEntry.count = 0;
            newEntry.shared = 0;
            newEntry.id = id;
            newEntry.status = 0;
            newEntry.value = 0.0f;
            memcpy(newEntry.data, data, sizeof(newEntry.data));
            newEntry.tag = *tag;
            memcpy(newEntry.extra, extra, sizeof(newEntry.extra));
            fn_828D3C88(entries, &newEntry);
            if (newEntry.shared != 0) {
                fn_822315A0(newEntry.shared);
            }
        }
        break;
    }
    }
    return 1;
}
