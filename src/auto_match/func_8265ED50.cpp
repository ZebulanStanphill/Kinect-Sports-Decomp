struct ConstIter_8265ED50 {
    void *ptr;
};

struct Iter_8265ED50 : ConstIter_8265ED50 {
    Iter_8265ED50();
    Iter_8265ED50 operator++(int);
};

struct Vector_8265ED50 {
    Iter_8265ED50 begin();
    Iter_8265ED50 end();
};

struct Component_8265ED50 {
    int unused;
    Vector_8265ED50 values;
    char pad[12];
};

extern "C" Component_8265ED50 lbl_831E7A48;
extern "C" void fn_8266C340(const wchar_t *, ...);
extern "C" unsigned char fn_82668EA0(const ConstIter_8265ED50 *, const ConstIter_8265ED50 *);
extern "C" char **fn_8265FA58(const ConstIter_8265ED50 *, int);
extern "C" void fn_8266C438(const wchar_t *, ...);
extern "C" int fn_8265F598(const wchar_t *, const wchar_t *);

extern "C" void *fn_8265ED50(const wchar_t *text)
{
    Iter_8265ED50 it;
    if (!text) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipCultures.cpp", 444,
                    L"pcszCulture");
    }
    it = lbl_831E7A48.values.begin();
    for (; fn_82668EA0(&it, &lbl_831E7A48.values.end()); it++) {
        if (fn_8265F598((const wchar_t *)(*fn_8265FA58(&it, 0) + 4), text) == 0) {
            return *fn_8265FA58(&it, 0);
        }
    }
    fn_8266C438(L"The culture %S could not be found on the culture vector", text);
    return 0;
}
