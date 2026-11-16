struct String_8265EFE0 {
    char data[28];
    String_8265EFE0(const char *);
    String_8265EFE0(const String_8265EFE0 &);
    ~String_8265EFE0();
};

struct Entry_8265EFE0 {
    unsigned short first;
    unsigned short second;
    String_8265EFE0 value;
};

struct Iter_8265EFE0 {
    Entry_8265EFE0 **item;
    Iter_8265EFE0();
};

struct Vector_8265EFE0 {
    Iter_8265EFE0 begin();
    Iter_8265EFE0 end();
};

struct Global_8265EFE0 {
    int unknown;
    Vector_8265EFE0 entries;
};

extern "C" Global_8265EFE0 lbl_831E7A48;
extern "C" void fn_8265D3D0(Iter_8265EFE0 *);
extern "C" unsigned char fn_82668EA0(Iter_8265EFE0 *, const Iter_8265EFE0 &);
extern "C" Entry_8265EFE0 **fn_8265FA58(Iter_8265EFE0 *, int);
extern "C" const char *fn_8265F570(const String_8265EFE0 *);
extern "C" void fn_8265F0B0(void *, unsigned int, unsigned int, String_8265EFE0);

extern "C" void fn_8265EFE0(void *self)
{
    Iter_8265EFE0 it;
    for (it = lbl_831E7A48.entries.begin(); fn_82668EA0(&it, lbl_831E7A48.entries.end()); fn_8265D3D0(&it)) {
        Entry_8265EFE0 *entry = *fn_8265FA58(&it, 0);
        fn_8265F0B0(self, entry->first, entry->second, String_8265EFE0(fn_8265F570(&entry->value)));
    }
}
