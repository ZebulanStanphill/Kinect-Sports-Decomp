// ScaleformMovieView::ScaleformCommandAdvance scalar deleting destructor
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
    class ScaleformCommandAdvance : public ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommandAdvance() {}
    };
};

extern "C" ScaleformMovieView::ScaleformCommandAdvance *fn_826712C8(ScaleformMovieView::ScaleformCommandAdvance *self, unsigned int flags)
{
    self->ScaleformMovieView::ScaleformCommandAdvance::~ScaleformCommandAdvance();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
