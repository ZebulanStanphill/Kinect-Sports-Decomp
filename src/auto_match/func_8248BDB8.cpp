// Adds a copy of the current element to the vector unless it already holds `capacity` entries;
// the copy's +0x20 field is cleared and its +0x2c field set to the id. Calls the real
// std::vector<Element_8248C448>::push_back (func_8248C448.cpp).
#include <vector>

struct Element_8248C448 {
    Element_8248C448();
    Element_8248C448(const Element_8248C448 &other);
    ~Element_8248C448();
    Element_8248C448 &operator=(const Element_8248C448 &other);
    int data[26];
};

struct Obj_8248BDB8 {
    char pad[0x14];
    Element_8248C448 *current;
    std::vector<Element_8248C448> entries;
    int pad28;
    unsigned int capacity;
};

extern "C" int fn_8248BDB8(Obj_8248BDB8 *self, int id)
{
    if (self->capacity - self->entries.size() == 0)
        return -1;
    self->entries.push_back(*self->current);
    Element_8248C448 &e = self->entries.back();
    e.data[8] = 0;
    e.data[11] = id;
    return id;
}
