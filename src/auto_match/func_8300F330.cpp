struct Inner_8300F330 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6();
};
struct Obj_8300F330 {
    virtual void v0(int flags);
    int pad4;
    Inner_8300F330 *inner;
    char pad[0x1c];
    unsigned int f28;
};
extern "C" int fn_82FA5190(unsigned int, Obj_8300F330 *);
extern "C" int fn_82FF5198(unsigned int, unsigned int);
extern "C" unsigned int lbl_831BC768;
extern "C" unsigned int lbl_83264304;

extern "C" void fn_8300F330(long long param_1, Obj_8300F330 *param_2)
{
    param_2->inner->v6();
    if (param_2->f28 != 0) {
        fn_82FF5198(lbl_83264304, param_2->f28);
    }
    param_2->inner->v2();
    unsigned int uVar1 = lbl_831BC768;
    param_2->v0(0);
    fn_82FA5190(uVar1, param_2);
}
