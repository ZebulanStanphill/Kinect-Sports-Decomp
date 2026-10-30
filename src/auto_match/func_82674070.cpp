// ScaleformFontMap constructor: calls the GFxFontMap base constructor (fn_8268AA10 stores the
// GFxFontMap vtable and sets up its fields), then stores the ScaleformFontMap vtable.
// The base constructor keeps its fn_ name (C units call it); novtable keeps the inline
// wrapper from storing a vtable of its own.
extern "C" void fn_8268AA10(void *self);

class __declspec(novtable) GFxFontMap {
public:
    __forceinline GFxFontMap() { fn_8268AA10(this); }
    virtual void f0();
};

class ScaleformFontMap : public GFxFontMap {
public:
    virtual void f0();
    __forceinline ScaleformFontMap() {}
};

extern "C" ScaleformFontMap *fn_82674070(ScaleformFontMap *p)
{
    p->ScaleformFontMap::ScaleformFontMap();
    return p;
}
