#include <memory>
#include <new>
#include <string.h>
#include <utility>
#include <vector>

struct Pointee_823B4030 {
    char name[0x80]; /* 0x00 */
    int first;       /* 0x80 */
    int second;      /* 0x84 */
    int state;       /* 0x88 */
    int extra;       /* 0x8c */

    __forceinline Pointee_823B4030(const char *source, int firstValue, int secondValue)
    {
        char *dst;
        char *end;

        memset(name, 0, sizeof(name));
        first = firstValue;
        second = secondValue;
        state = 0;
        extra = 0;
        dst = name;
        end = name + sizeof(name);
        while (dst < end && (*dst++ = *source++) != 0) {
        }
        if (dst == end) {
            dst[-1] = 0;
        }
    }
};

typedef std::pair<int, std::tr1::shared_ptr<Pointee_823B4030>> Entry_823B3EF0;

struct Block_823B3EF0 {
    void **vtable;           /* 0x00 */
    long uses;               /* 0x04 */
    long weaks;              /* 0x08 */
    Pointee_823B4030 object; /* 0x0c */
};

struct Shared_823B3EF0 {
    Pointee_823B4030 *object; /* 0x00 */
    Block_823B3EF0 *rep;      /* 0x04 */
};

struct SharedEntry_823B3EF0 {
    int key;                  /* 0x00 */
    Pointee_823B4030 *object; /* 0x04 */
    Block_823B3EF0 *rep;      /* 0x08 */

    __forceinline SharedEntry_823B3EF0(int keyValue, Shared_823B3EF0 &&shared)
        : key(keyValue), object(shared.object), rep(shared.rep)
    {
        shared.object = 0;
        shared.rep = 0;
    }
};

extern "C" {
extern void *lbl_821AE598[];
void fn_822315A0(Block_823B3EF0 *rep);
void *fn_8265C9E0(unsigned int size);
}

extern "C" void fn_823B3EF0(std::vector<Entry_823B3EF0> *list, const int *key, const char *name, int first,
                            int second)
{
    Block_823B3EF0 *memory;
    Block_823B3EF0 *block;

    memory = (Block_823B3EF0 *)fn_8265C9E0(sizeof(Block_823B3EF0));
    if (memory != 0) {
        memory->uses = 1;
        memory->vtable = lbl_821AE598;
        memory->weaks = 1;
        new (&memory->object) Pointee_823B4030(name, first, second);
        block = memory;
    } else {
        block = 0;
    }
    Shared_823B3EF0 shared;
    shared.object = &block->object;
    shared.rep = block;
    SharedEntry_823B3EF0 entry(*key, static_cast<Shared_823B3EF0 &&>(shared));
    list->push_back(reinterpret_cast<Entry_823B3EF0 &&>(entry));
    if (entry.rep != 0) {
        fn_822315A0(entry.rep);
    }
}
