struct Entry { char pad[0x6c]; int kind; char rest[8]; };
struct S { char pad[0x18]; unsigned int size; Entry *data; unsigned __int64 get(); };
unsigned __int64 S::get() { for (unsigned int i = 0; i < size; ++i) if (data[i].kind == 2) return 1; return 0; }
