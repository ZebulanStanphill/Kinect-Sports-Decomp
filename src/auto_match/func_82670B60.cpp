// ScaleformMovieView::ScaleformCommandCallActionScriptCallback::~ScaleformCommandCallActionScriptCallback(): stores the vtable, clears the value array in the body, destroys the string member, then runs the ScaleformCommand base destructor out of line
// (fn_82670A50). The base destructor and this one keep their fn_ names.
extern "C" {
void fn_82230300(void *str, bool built, unsigned int newsize);
void fn_8266FF40(void *array, unsigned int count);
void fn_82670A50(void *self);
}

struct String_func_82670B60 {
    unsigned char bytes[0x1c];
    ~String_func_82670B60() { fn_82230300(this, true, 0); }
};

struct Array_func_82670B60 {
    void *data;
    unsigned int size;
};

class ScaleformMovieView {
public:
    class __declspec(novtable) ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommand() { fn_82670A50(this); }
        char pad[0x10];
    };
    class ScaleformCommandCallActionScriptCallback : public ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommandCallActionScriptCallback();
        String_func_82670B60 str;
        Array_func_82670B60 args;
    };
};

__forceinline ScaleformMovieView::ScaleformCommandCallActionScriptCallback::~ScaleformCommandCallActionScriptCallback()
{
    fn_8266FF40(&args, args.size);
}

extern "C" void fn_82670B60(ScaleformMovieView::ScaleformCommandCallActionScriptCallback *self)
{
    self->ScaleformMovieView::ScaleformCommandCallActionScriptCallback::~ScaleformCommandCallActionScriptCallback();
}
