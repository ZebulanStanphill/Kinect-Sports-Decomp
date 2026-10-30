// ScaleformMovieView::ScaleformCommandCallActionScriptCallback constructor: ScaleformCommand base
// constructor (fn_82670F48), the vtable, the std::string name (fn_82230110), the value array
// (empty, then filled by fn_826700E0).
extern "C" {
void fn_82230110(void *str, const char *s);
void fn_826700E0(void *array, void *values, unsigned int count);
}

struct String_82672138 {
    unsigned char bytes[0x1c];
    __forceinline String_82672138(const char *s) { fn_82230110(this, s); }
};

struct Array_82672138 {
    void *data;
    unsigned int size;
    __forceinline Array_82672138(unsigned int n) : data(0), size(n) {}
};

class ScaleformMovieView {
public:
    class ScaleformCommand {
    public:
        ScaleformCommand(const void *view);
        virtual ~ScaleformCommand();
        unsigned char m_4[0xc];
        unsigned char flag;
    };
    class ScaleformCommandCallActionScriptCallback : public ScaleformCommand {
    public:
        virtual ~ScaleformCommandCallActionScriptCallback();
        String_82672138 name;
        Array_82672138 args;
        __forceinline ScaleformCommandCallActionScriptCallback(const void *view, const char *n, void *values, unsigned int count)
            : ScaleformCommand(view), name(n), args(count)
        {
            flag = 0;
            fn_826700E0(&args, values, count);
        }
    };
};

extern "C" ScaleformMovieView::ScaleformCommandCallActionScriptCallback *
fn_82672138(ScaleformMovieView::ScaleformCommandCallActionScriptCallback *p, const void *view, const char *name,
            void *values, unsigned int count)
{
    p->ScaleformMovieView::ScaleformCommandCallActionScriptCallback::ScaleformCommandCallActionScriptCallback(
        view, name, values, count);
    return p;
}
