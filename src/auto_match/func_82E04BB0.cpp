struct Entry { unsigned a, b; };
struct Object { int pad[2]; Entry *entries; unsigned get(int index); };
unsigned Object::get(int index) { return entries[index].b & 0xfffffffe; }
