extern "C" void fn_82517978(void *weak, void *ptr, void *rep, int flag);

struct Weak_82670F48 {
    void *ptr;
    void *rep;
    __forceinline Weak_82670F48() : ptr(0), rep(0) {}
};

class ScaleformMovieView {
public:
    class ScaleformCommand {
    public:
        ScaleformCommand(const void *view);
        virtual ~ScaleformCommand();
        Weak_82670F48 view;
        void *raw;
        bool flag;
    };
};

ScaleformMovieView::ScaleformCommand::ScaleformCommand(const void *view_)
{
    const void *const *v = (const void *const *)view_;
    fn_82517978(&view, (void *)v[0], (void *)v[1], 0);
    raw = (void *)v[0];
    flag = true;
}
