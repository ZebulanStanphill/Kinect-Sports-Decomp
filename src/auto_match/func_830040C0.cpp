// Grows the array by extra entries: new block, entries constructed in place and copied, old block freed.
// It matches only as a member function (the array base is the second operand of the indexed add).

struct Entry_830040C0 {
    unsigned int value;    // 0x0
    unsigned short first;  // 0x4
    unsigned short second; // 0x6

    Entry_830040C0()
    {
        first = 0;
        second = 0;
    }
};

extern "C" unsigned int lbl_831BC768;
extern "C" void *fn_82FA5060(unsigned int heap, unsigned int size);
extern "C" void fn_82FA5190(unsigned int heap, void *data);

inline void *operator new(unsigned int size, void *where)
{
    return where;
}

struct Array_830040C0 {
    Entry_830040C0 *begin; // 0x0
    Entry_830040C0 *end;   // 0x4
    unsigned int capacity; // 0x8

    unsigned int Grow(unsigned int extra);
};

unsigned int Array_830040C0::Grow(unsigned int extra)
{
    unsigned int newCapacity = capacity + extra;
    Entry_830040C0 *data = (Entry_830040C0 *)fn_82FA5060(lbl_831BC768, newCapacity * 8);
    unsigned int count;
    unsigned int i;

    if (data == 0) {
        return 0;
    }
    count = end - begin;
    if (begin != 0) {
        for (i = 0; i < count; i++) {
            new (&data[i]) Entry_830040C0;
            data[i] = begin[i];
        }
        fn_82FA5190(lbl_831BC768, begin);
    }
    begin = data;
    capacity = newCapacity;
    end = data + count;
    return 1;
}
