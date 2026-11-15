struct ConstIter_8266A628 {
    void *ptr;
};

struct Iter_8266A628 : ConstIter_8266A628 {
    Iter_8266A628 operator++(int);
};

struct Vector_8266A628 {
    Iter_8266A628 begin();
    Iter_8266A628 end();
};

struct Settings_8266A628 {
    int unused;
    Vector_8266A628 values;
    char pad[12];
};

extern "C" Settings_8266A628 lbl_831E7AF4;
extern "C" void fn_8266C340(const wchar_t *, ...);
extern "C" unsigned char fn_82668EA0(const ConstIter_8266A628 *, const ConstIter_8266A628 *);
extern "C" const wchar_t **fn_82663BE8(const ConstIter_8266A628 *);
extern "C" int fn_8265F598(const wchar_t *, const wchar_t *);
extern "C" void fn_8266AAC8(Iter_8266A628 *, Iter_8266A628 *, int);

extern "C" int fn_8266A628(const wchar_t *language)
{
    if (!language) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipSettings.cpp", 305,
                    L"pcszLanguage");
    }
    Iter_8266A628 it = lbl_831E7AF4.values.begin();
    for (; fn_82668EA0(&it, &lbl_831E7AF4.values.end()); it++) {
        if (fn_8265F598(*fn_82663BE8(&it), language) == 0) {
            return 1;
        }
    }
    return 0;
}
