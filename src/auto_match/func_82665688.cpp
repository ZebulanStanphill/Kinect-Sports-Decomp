struct ConstIter_82665688 {
    void *ptr;
};

struct Iter_82665688 : ConstIter_82665688 {};

struct Vector_82665688 {
    Iter_82665688 begin();
    Iter_82665688 end();
};

struct Settings_82665688 {
    int unused;
    Vector_82665688 roots;
};

extern "C" Settings_82665688 lbl_831E7A5C;
extern "C" void fn_8266C340(const wchar_t *, ...);
extern "C" void fn_82663C10(Iter_82665688 *);
extern "C" void fn_8265D3D0(Iter_82665688 *);
extern "C" void **fn_8265FA58(const ConstIter_82665688 *, int);
extern "C" unsigned char fn_82668EA0(const ConstIter_82665688 *, const ConstIter_82665688 *);

extern "C" int fn_82665688(void *root)
{
    if (!root) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 867,
                    L"pRoot");
    }
    int index = 0;
    Iter_82665688 it;
    fn_82663C10(&it);
    for (it = lbl_831E7A5C.roots.begin(); fn_82668EA0(&it, &lbl_831E7A5C.roots.end());
         fn_8265D3D0(&it), ++index) {
        if (*fn_8265FA58(&it, 0) == root) {
            return index;
        }
    }
    return -1;
}
