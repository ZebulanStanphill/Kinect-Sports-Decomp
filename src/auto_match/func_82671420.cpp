// ScaleformMovieView::ScaleformCommandSetViewport scalar deleting destructor
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
    class ScaleformCommandSetViewport : public ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommandSetViewport() {}
    };
};

extern "C" ScaleformMovieView::ScaleformCommandSetViewport *fn_82671420(ScaleformMovieView::ScaleformCommandSetViewport *self, unsigned int flags)
{
    self->ScaleformMovieView::ScaleformCommandSetViewport::~ScaleformCommandSetViewport();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
