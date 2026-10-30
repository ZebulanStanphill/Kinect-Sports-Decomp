extern "C" void *fn_82688CA8(void *);
struct __declspec(novtable) GFxFontLib {
    int base[3];
    GFxFontLib() { fn_82688CA8(this); }
    virtual ~GFxFontLib();
    virtual void f1();
};

struct Sub { int a,b,c; Sub():a(0),b(0),c(0){} };
struct ScaleformFontLib : GFxFontLib { Sub s; ScaleformFontLib(); virtual ~ScaleformFontLib(); virtual void f1(); };
ScaleformFontLib::ScaleformFontLib() {}
