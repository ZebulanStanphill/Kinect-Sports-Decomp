#include <vector>

struct Element_82512E18 {
    int data[3];
};

template <> void std::vector<Element_82512E18>::push_back(const Element_82512E18 &value);

struct Entry_82508078 {
    int pad00;
    unsigned char name[0x8c]; /* 0x04 */
    float delay;              /* 0x90 */
    int pad94;
};

struct Pending_82508078 {
    Entry_82508078 *entry; /* 0x0 */
    float delay;           /* 0x4 */
    int argument;          /* 0x8 */
};

// The 12-byte element vectors share one folded push_back.
template <> __forceinline void std::vector<Pending_82508078>::push_back(const Pending_82508078 &value)
{
    reinterpret_cast<std::vector<Element_82512E18> *>(this)->push_back(
        reinterpret_cast<const Element_82512E18 &>(value));
}

struct Player_82508078 {
    Entry_82508078 *entries; /* 0x00 */
    char pad04[0x24];
    int busy;                              /* 0x28 */
    std::vector<Pending_82508078> pending; /* 0x2c */
};

extern "C" {
unsigned int fn_8251FBA8(void *block);
int fn_82526A20(unsigned char *name, int key);
void fn_82508160(Player_82508078 *self, Entry_82508078 *entry, int argument, int flag);
}

static __forceinline Entry_82508078 *Find(Entry_82508078 *entries, int key)
{
    Entry_82508078 *entry = entries;
    unsigned int index;

    for (index = 0; index < fn_8251FBA8(entries) / sizeof(Entry_82508078); index++, entry++) {
        if (fn_82526A20(entry->name, key) == 0) {
            return entry;
        }
    }
    return 0;
}

extern "C" int fn_82508078(Player_82508078 *self, int key, int argument)
{
    Entry_82508078 *entries = self->entries;

    if (entries != 0 && self->busy == 0) {
        Entry_82508078 *entry = Find(entries, key);

        if (entry != 0) {
            float delay = entry->delay;

            if (delay > 0.0f) {
                Pending_82508078 pending;

                pending.entry = entry;
                pending.delay = delay;
                pending.argument = argument;
                self->pending.push_back(pending);
            } else {
                fn_82508160(self, entry, argument, 1);
            }
            return 1;
        }
    }
    return 0;
}
