#include <vector>

struct Entry_8249C848 {
    unsigned int mask;
    int pad4;
};

struct Stack_8249C848 {
    char pad0[0x10];
    std::vector<Entry_8249C848> entries;
};

struct Obj_8249C848 {
    char pad0[8];
    int m8;
    char padC[0x50 - 0xc];
    unsigned int supported;
    char pad54[0xc];
    unsigned int m60;
    unsigned int m64;
    unsigned int m68;
    char pad6C[0x88 - 0x6c];
    int m88;
    char pad8C[0x110 - 0x8c];
    Stack_8249C848 *stack;
};

extern "C" unsigned int fn_8249D878(int a);

extern "C" unsigned int fn_8249C848(Obj_8249C848 *self, int flag, unsigned int *out)
{
    unsigned int result = 0;
    unsigned int extra = 0;

    if ((self->supported & flag) != 0) {
        if (self->m88 == 0) {
            result = self->m60 & flag;
            extra = result;
        } else if ((self->m64 & flag) != 0) {
            result = 1;
            extra = 0;
        } else if (self->m8 == 0) {
            result = (self->m68 & flag) != 0;
            extra = 0;
        }
    }
    if (flag == 8) {
        Stack_8249C848 *st = self->stack;
        unsigned int top = fn_8249D878(0);
        if (!st->entries.empty()) {
            top = st->entries.back().mask;
        }
        result &= top;
    }
    extra = flag == 0x20 ? 0 : extra;
    if (out != 0) {
        *out = extra;
    }
    return result;
}
