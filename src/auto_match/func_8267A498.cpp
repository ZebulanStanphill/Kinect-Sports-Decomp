extern "C" {
void fn_8267C488(void *self);
void fn_8267BE38(void *p);
}


class ScaleformdbFile {
public:
    virtual __forceinline ~ScaleformdbFile() { fn_8267C488(this); }
};


extern "C" ScaleformdbFile *fn_8267A498(ScaleformdbFile *self, unsigned int flags)
{
    self->ScaleformdbFile::~ScaleformdbFile();
    if (flags & 1) {
        fn_8267BE38(self);
    }
    return self;
}
