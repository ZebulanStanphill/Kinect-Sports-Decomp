extern "C" void fn_82266D28(void *weak, void *p);

struct Weak_82670F48 {
    void *ptr;
    void *rep;
    __forceinline Weak_82670F48() : ptr(0), rep(0) {}
};

class ScaleformMovieView {
public:
    class ScaleformCommand {
    public:
        ScaleformCommand(ScaleformMovieView *mv);
        virtual ~ScaleformCommand();
        Weak_82670F48 view;
        void *raw;
        bool flag;
    };
};

ScaleformMovieView::ScaleformCommand::ScaleformCommand(ScaleformMovieView *mv)
{
    fn_82266D28(&view, 0);
    raw = mv;
    flag = true;
}
