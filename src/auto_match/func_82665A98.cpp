struct ConstIter_82665A98 {
    void *ptr;
};

struct Iter_82665A98 : ConstIter_82665A98 {
    Iter_82665A98 operator++(int);
};

struct Vector_82665A98 {
    Iter_82665A98 begin();
    Iter_82665A98 end();
};

struct Component_82665A98 {
    int unused;
    Vector_82665A98 values;
    char pad[12];
};

extern "C" Component_82665A98 lbl_831E7A70;
extern "C" void fn_8266C340(const wchar_t *, ...);
extern "C" unsigned char fn_82668EA0(const ConstIter_82665A98 *, const ConstIter_82665A98 *);
extern "C" char **fn_8265FA58(const ConstIter_82665A98 *, int);
extern "C" int fn_8265F598(const wchar_t *, const wchar_t *);

extern "C" int fn_82665A98(const wchar_t *text)
{
    if (!text) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 952,
                    L"pcszLanguage");
    }
    int index = 0;
    Iter_82665A98 it;
    it = lbl_831E7A70.values.begin();
    for (; fn_82668EA0(&it, &lbl_831E7A70.values.end()); it++, index++) {
        if (fn_8265F598((const wchar_t *)(*fn_8265FA58(&it, 0)), text) == 0) {
            return index;
        }
    }
    return -1;
}
