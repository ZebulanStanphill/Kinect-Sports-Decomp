// The allocated copy is built with the copy constructor (placement new), the existing one
// is assigned; the two copy loops differ in their induction pointers.
#include <new>

struct Entry_82726250 {
    int a;           /* 0x0 */
    int b;           /* 0x4 */
    int c;           /* 0x8 */
    unsigned char d; /* 0xc */

    Entry_82726250()
    {
    }

    Entry_82726250(const Entry_82726250 &other) : a(other.a), b(other.b), c(other.c), d(other.d)
    {
    }

    Entry_82726250 &operator=(const Entry_82726250 &other)
    {
        a = other.a;
        b = other.b;
        c = other.c;
        d = other.d;
        return *this;
    }
};

struct Data_82726250 {
    Entry_82726250 entries[5]; /* 0x0 */
    unsigned char flag;        /* 0x50 */
};

struct Owner_82726250 {
    char pad[0x34];
    Data_82726250 *data; /* 0x34 */
};

extern "C" void *fn_8267BED0(void *, int, int *);

extern "C" void fn_82726250(Owner_82726250 *self, const Data_82726250 *src)
{
    if (self->data == 0) {
        int tag = 0x146;
        void *mem = fn_8267BED0(self, 0x54, &tag);
        self->data = mem ? new (mem) Data_82726250(*src) : 0;
    } else {
        *self->data = *src;
    }
}
