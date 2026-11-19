struct ConstIter_82665348 {
    int *ptr;
};

struct Iter_82665348 : ConstIter_82665348 {};

struct Vector_82665348 {
    Iter_82665348 begin();
    char pad[0x10];
};

struct Component_82665348 {
    int unused;
    char languages[0x10]; /* 0x4: vector of language strings */
};

extern "C" Component_82665348 lbl_831E7A70;
extern "C" Vector_82665348 lbl_831E7B08;
extern "C" void fn_8266C340(const wchar_t *format, ...);
extern "C" void fn_82A2A370(unsigned int error);
extern "C" unsigned int fn_8265CF70(void *self);
extern "C" void **fn_8265CF50(void *self, unsigned int index);
extern "C" int *fn_8265FA58(const ConstIter_82665348 *self, int offset);
extern "C" unsigned int fn_8265DED8(void *string);
extern "C" const wchar_t *fn_8265F570(void *string);
extern "C" int fn_82F664B0(wchar_t *destination, unsigned int size, const wchar_t *source);

extern "C" int fn_82665348(wchar_t *buffer, int size)
{
    if (fn_8265CF70(lbl_831E7A70.languages) == 0) {
        fn_82A2A370(0x15);
        return -1;
    }
    Iter_82665348 it;
    it = lbl_831E7B08.begin();
    void *language = *fn_8265CF50(lbl_831E7A70.languages, *fn_8265FA58(&it, 0));
    if (buffer != 0) {
        if (size <= (int)fn_8265DED8(language)) {
            fn_82A2A370(0x7a);
            return -1;
        }
        int ret = fn_82F664B0(buffer, size, fn_8265F570(language));
        if (ret != 0) {
            if (!((ret == 0) && "error copying language name")) {
                fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 782,
                            L"(ret==0) && \"error copying language name\"");
            }
            fn_82A2A370(0x54f);
            return -1;
        }
    }
    return fn_8265DED8(language) + 1;
}
