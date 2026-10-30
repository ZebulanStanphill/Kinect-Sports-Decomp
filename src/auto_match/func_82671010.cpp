// ScaleformMovieView::ScaleformCommandLoadMovieDef scalar deleting destructor
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
    class ScaleformCommandLoadMovieDef : public ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommandLoadMovieDef();
        void *a;
    };
};

__forceinline ScaleformMovieView::ScaleformCommandLoadMovieDef::~ScaleformCommandLoadMovieDef()
{
    a = 0;
}

extern "C" ScaleformMovieView::ScaleformCommandLoadMovieDef *fn_82671010(ScaleformMovieView::ScaleformCommandLoadMovieDef *self, unsigned int flags)
{
    self->ScaleformMovieView::ScaleformCommandLoadMovieDef::~ScaleformCommandLoadMovieDef();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
