struct ConstIter_82665868 {
    void *ptr;
};

struct Iter_82665868 : ConstIter_82665868 {
    Iter_82665868();
    Iter_82665868 operator++(int);
};

struct Vector_82665868 {
    Iter_82665868 begin();
    Iter_82665868 end();
};

struct Component_82665868 {
    int unused;
    Vector_82665868 values;
    char pad[12];
};

extern "C" Component_82665868 lbl_831E7A84;
extern "C" void fn_8266C340(const wchar_t *, ...);
extern "C" unsigned char fn_82668EA0(const ConstIter_82665868 *, const ConstIter_82665868 *);
extern "C" char **fn_8265FA58(const ConstIter_82665868 *, int);
extern "C" int fn_8265F598(const wchar_t *, const wchar_t *);

extern "C" void *fn_82665868(const wchar_t *text)
{
    if (!text) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 908,
                    L"pcszPath");
    }
    Iter_82665868 it;
    it = lbl_831E7A84.values.begin();
    for (; fn_82668EA0(&it, &lbl_831E7A84.values.end()); it++) {
        if (fn_8265F598((const wchar_t *)(*fn_8265FA58(&it, 0) + 0x1c), text) == 0) {
            return *fn_8265FA58(&it, 0);
        }
    }
    return 0;
}
