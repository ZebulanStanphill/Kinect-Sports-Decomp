// Grows the array by extra 52-byte entries: new block, entries copied, old block freed.
// It matches only as a member function (the array base is the second operand of the indexed add).

struct Entry_82FB6C88 {
    unsigned char bytes[52];
};

extern "C" unsigned int lbl_831BC768;
extern "C" void *fn_82FA5060(unsigned int heap, unsigned int size);
extern "C" void fn_82FA5190(unsigned int heap, void *data);

struct Array_82FB6C88 {
    Entry_82FB6C88 *begin; // 0x0
    Entry_82FB6C88 *end;   // 0x4
    unsigned int capacity; // 0x8

    unsigned int Grow(unsigned int extra);
};

unsigned int Array_82FB6C88::Grow(unsigned int extra)
{
    unsigned int newCapacity = capacity + extra;
    Entry_82FB6C88 *data = (Entry_82FB6C88 *)fn_82FA5060(lbl_831BC768, newCapacity * sizeof(Entry_82FB6C88));
    unsigned int count;
    unsigned int i;

    if (data == 0) {
        return 0;
    }
    count = end - begin;
    if (begin != 0) {
        for (i = 0; i < count; i++) {
            data[i] = begin[i];
        }
        fn_82FA5190(lbl_831BC768, begin);
    }
    begin = data;
    capacity = newCapacity;
    end = data + count;
    return 1;
}
