// ScaleformMovieView::ScaleformCommandSetVariableArray::~ScaleformCommandSetVariableArray(): stores the vtable, clears the value array in the body, destroys the string member, then runs the ScaleformCommand base destructor out of line
// (fn_82670A50). The base destructor and this one keep their fn_ names.
extern "C" {
void fn_82230300(void *str, bool built, unsigned int newsize);
void fn_8266FF40(void *array, unsigned int count);
void fn_82670A50(void *self);
}

struct String_func_82670BB8 {
    unsigned char bytes[0x1c];
    ~String_func_82670BB8() { fn_82230300(this, true, 0); }
};

struct Array_func_82670BB8 {
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
    class ScaleformCommandSetVariableArray : public ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommandSetVariableArray();
        String_func_82670BB8 str;
        char pad2[4];
        Array_func_82670BB8 args;
    };
};

__forceinline ScaleformMovieView::ScaleformCommandSetVariableArray::~ScaleformCommandSetVariableArray()
{
    fn_8266FF40(&args, args.size);
}

extern "C" void fn_82670BB8(ScaleformMovieView::ScaleformCommandSetVariableArray *self)
{
    self->ScaleformMovieView::ScaleformCommandSetVariableArray::~ScaleformCommandSetVariableArray();
}
