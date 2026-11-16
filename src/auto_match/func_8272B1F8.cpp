#include <new>
#include "game/String_8268C510.h"

struct Reference_8272B1F8 {
    void *vtable;   /* 0x0 */
    int references; /* 0x4 */
};

extern "C" void fn_8267C498(Reference_8272B1F8 *reference);

struct Pointer_8272B1F8 {
    Reference_8272B1F8 *value;

    Pointer_8272B1F8(Reference_8272B1F8 *reference)
    {
        if (reference != 0) {
            reference->references++;
        }
        value = reference;
    }

    ~Pointer_8272B1F8()
    {
        if (value != 0) {
            fn_8267C498(value);
        }
    }
};

struct Range_8272B1F8 {
    String_8268C510 *key;
    Pointer_8272B1F8 *value;
};

struct Table_8272B1F8 {
    int count;

    Table_8272B1F8() : count(0)
    {
    }
};

struct Owner_8272B1F8 {
    char pad000[0xec];
    Table_8272B1F8 *table; /* 0xec */
};

extern "C" void *fn_8267BED0(void *owner, unsigned int size, int *category);
extern "C" void fn_8272AE80(Table_8272B1F8 *table, Table_8272B1F8 *owner, Range_8272B1F8 *range);

extern "C" void fn_8272B1F8(Owner_8272B1F8 *self, const char *key, Reference_8272B1F8 *value)
{
    if (self->table == 0) {
        int category = 2;
        void *memory = fn_8267BED0(self, 4, &category);
        Table_8272B1F8 *table = memory ? new (memory) Table_8272B1F8 : 0;
        self->table = table;
    }
    Pointer_8272B1F8 reference(value);
    String_8268C510 text(key);
    Range_8272B1F8 range;
    range.key = &text;
    range.value = &reference;
    fn_8272AE80(self->table, self->table, &range);
}
