extern "C" {
void fn_82230110(void *self, const char *s);
void fn_826700E0(void *self, const void *src, unsigned int n);
}

struct String_82230110 {
    unsigned int data[7];
    __forceinline String_82230110(const char *s) { fn_82230110(this, s); }
};

struct ArgArray_826700E0 {
    void *items;
    unsigned int count;
    __forceinline ArgArray_826700E0(const void *src, unsigned int n) : count(n), items(0) { fn_826700E0(this, src, n); }
};

namespace ScaleformMovieView {
class ScaleformCommand {
public:
    ScaleformCommand(const void *a);
    virtual ~ScaleformCommand();
    unsigned int data[4];
};

class ScaleformCommandInvoke : public ScaleformCommand {
public:
    ScaleformCommandInvoke(const void *a, const char *method, const void *args, unsigned int n);
    virtual ~ScaleformCommandInvoke();
    String_82230110 method;
    ArgArray_826700E0 args;
};

ScaleformCommandInvoke::ScaleformCommandInvoke(const void *a, const char *m, const void *args_, unsigned int n)
    : ScaleformCommand(a), method(m), args(args_, n)
{
}
}
