extern "C" {
void fn_8268AA90(void *self);
void fn_8267BE38(void *p);
}


class ScaleformFontMap {
public:
    virtual __forceinline ~ScaleformFontMap() { fn_8268AA90(this); }
};


extern "C" ScaleformFontMap *fn_826740B0(ScaleformFontMap *self, unsigned int flags)
{
    self->ScaleformFontMap::~ScaleformFontMap();
    if (flags & 1) {
        fn_8267BE38(self);
    }
    return self;
}
