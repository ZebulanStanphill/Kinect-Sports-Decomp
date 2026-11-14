#include <new>
struct Data_826EC578 {
    int v[5];
    Data_826EC578() { v[0] = 0; v[1] = 0; v[2] = 0; v[3] = 0; v[4] = 0; }
};
struct Entry_826EC578 {
    int id;
    int a;
    int b;
    int c;
    int count;
    Data_826EC578 data;
    Entry_826EC578() : data() { id = 0; a = -1; b = -1; c = -1; count = 0; }
};

extern "C" void fn_826EC578(Entry_826EC578 *entries, unsigned int count)
{
    for (; count != 0; count--, entries++)
        new (entries) Entry_826EC578();
}
