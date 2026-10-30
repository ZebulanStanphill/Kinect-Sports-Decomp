// ScaleformMovieView::ScaleformCommandSubstituteTexture::~ScaleformCommandSubstituteTexture(): stores the vtable, destroys the members in reverse
// order (value array, string), then runs the ScaleformCommand base destructor out of line
// (fn_82670A50). The base destructor and this one keep their fn_ names.
extern "C" {
void fn_82230300(void *str, bool built, unsigned int newsize);
void fn_8266FF40(void *array, unsigned int count);
void fn_82670A50(void *self);
}

struct String_func_82670B10 {
    unsigned char bytes[0x1c];
    ~String_func_82670B10() { fn_82230300(this, true, 0); }
};

struct Array_func_82670B10 {
    void *data;
    unsigned int size;
    ~Array_func_82670B10() { fn_8266FF40(this, size); }
};

class ScaleformMovieView {
public:
    class __declspec(novtable) ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommand() { fn_82670A50(this); }
        char pad[0x10];
    };
    class ScaleformCommandSubstituteTexture : public ScaleformCommand {
    public:
        virtual __forceinline ~ScaleformCommandSubstituteTexture();
        String_func_82670B10 str;

    };
};

__forceinline ScaleformMovieView::ScaleformCommandSubstituteTexture::~ScaleformCommandSubstituteTexture()
{
}

extern "C" void fn_82670B10(ScaleformMovieView::ScaleformCommandSubstituteTexture *self)
{
    self->ScaleformMovieView::ScaleformCommandSubstituteTexture::~ScaleformCommandSubstituteTexture();
}
