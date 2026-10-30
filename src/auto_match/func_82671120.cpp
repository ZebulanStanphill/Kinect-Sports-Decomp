// ScaleformMovieView::ScaleformCommandLoadMovie scalar deleting destructor
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
    class ScaleformCommandLoadMovie : public ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommandLoadMovie();
        void *a;
        void *b;
        void *c;
    };
};

__forceinline ScaleformMovieView::ScaleformCommandLoadMovie::~ScaleformCommandLoadMovie()
{
    a = 0;
    b = 0;
    c = 0;
}

extern "C" ScaleformMovieView::ScaleformCommandLoadMovie *fn_82671120(ScaleformMovieView::ScaleformCommandLoadMovie *self, unsigned int flags)
{
    self->ScaleformMovieView::ScaleformCommandLoadMovie::~ScaleformCommandLoadMovie();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
