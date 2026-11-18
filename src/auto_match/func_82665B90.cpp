struct ConstIter_82665B90 {
    void *ptr;
};

struct Iter_82665B90 : ConstIter_82665B90 {
    Iter_82665B90 operator++(int);
};

struct Vector_82665B90 {
    Iter_82665B90 begin();
    Iter_82665B90 end();
};

struct Entry_82665B90 {
    int iLanguage; /* 0x00 */
    int iRoot;     /* 0x04 */
};

struct Component_82665B90 {
    char pad0[0x38];
    Vector_82665B90 entries; /* 0x38 */
};

struct RootVector_82665B90 {
    void *data;
    void *end;
    void *capacity;
};

struct Globals_82665B90 {
    int unused;
    RootVector_82665B90 roots; /* g_vecRoots */
};

extern "C" Globals_82665B90 lbl_831E7A5C;
extern "C" void fn_8266C340(const wchar_t *, ...);
extern "C" int fn_82665A98(const wchar_t *language);
extern "C" unsigned char fn_82668EA0(const ConstIter_82665B90 *, const ConstIter_82665B90 *);
extern "C" Entry_82665B90 *fn_82666768(const ConstIter_82665B90 *, int);
extern "C" unsigned int fn_8265CF70(RootVector_82665B90 *self);
extern "C" void **fn_8265CF50(RootVector_82665B90 *self, unsigned int index);

extern "C" void *fn_82665B90(Component_82665B90 *pComponent, const wchar_t *pcszLanguage)
{
    if (!pComponent) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 970,
                    L"pComponent");
    }
    if (!pcszLanguage) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 971,
                    L"pcszLanguage");
    }
    int iLanguage = fn_82665A98(pcszLanguage);
    Iter_82665B90 iter;
    iter = pComponent->entries.begin();
    for (; fn_82668EA0(&iter, &pComponent->entries.end()); iter++) {
        if (fn_82666768(&iter, 0)->iLanguage == iLanguage) {
            if (!((long)fn_8265CF70(&lbl_831E7A5C.roots) > fn_82666768(&iter, 0)->iRoot)) {
                fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 980,
                            L"LONG(g_vecRoots.size()) > iter[0].iRoot");
            }
            return *fn_8265CF50(&lbl_831E7A5C.roots, fn_82666768(&iter, 0)->iRoot);
        }
    }
    return 0;
}
