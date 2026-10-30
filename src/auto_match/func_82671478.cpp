// ScaleformMovieView::ScaleformCommandCleanUpTextures scalar deleting destructor
extern "C" {
void fn_82670A50(void *self);
void fn_8265CA20(void *p);
}

class ScaleformMovieView {
public:
    class __declspec(novtable) ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommand() { fn_82670A50(this); }
        char pad[0x10];
    };
    class ScaleformCommandCleanUpTextures : public ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommandCleanUpTextures() {}
    };
};

extern "C" ScaleformMovieView::ScaleformCommandCleanUpTextures *fn_82671478(ScaleformMovieView::ScaleformCommandCleanUpTextures *self, unsigned int flags)
{
    self->ScaleformMovieView::ScaleformCommandCleanUpTextures::~ScaleformCommandCleanUpTextures();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
