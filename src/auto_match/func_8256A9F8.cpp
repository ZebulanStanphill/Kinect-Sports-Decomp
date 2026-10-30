struct Entry_8256A9F8 {
    char pad[0x1c];
    int index;
};

struct PtrVec_8256A9F8 {
    Entry_8256A9F8 **_Myfirst;
    Entry_8256A9F8 **_Mylast;
    Entry_8256A9F8 *&operator[](unsigned int i) { return _Myfirst[i]; }
    Entry_8256A9F8 *&back() { return _Mylast[-1]; }
    void pop_back() { if (_Myfirst != _Mylast) --_Mylast; }
};

struct Mgr_8256A9F8 {
    char pad[0x54];
    PtrVec_8256A9F8 vec;
};

struct Child_8256A9F8 {
    char pad[0x14];
    void *e14;
};

struct Owner_8256A9F8 {
    char pad[0xc];
    Child_8256A9F8 *child;
    char pad2[0xc];
    int index;
};

extern "C" void fn_82837D98(void *a, int b, void *c);
extern "C" void fn_8251FA58(void *child);
extern "C" Mgr_8256A9F8 *fn_82569B10(void);

extern "C" void fn_8256A9F8(Owner_8256A9F8 *p)
{
    char buf[16];
    fn_82837D98(p->child->e14, 0, buf);
    fn_8251FA58(p->child);
    if (p->index >= 0) {
        Entry_8256A9F8 **end = fn_82569B10()->vec._Mylast;
        int idx = p->index;
        fn_82569B10()->vec[idx] = end[-1];
        fn_82569B10()->vec.back()->index = p->index;
        fn_82569B10()->vec.pop_back();
        p->index = -1;
    }
}
