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
};

namespace ScaleformMovieView {
class ScaleformCommand {
public:
    ScaleformCommand(const void *a);
    virtual ~ScaleformCommand();
    unsigned int data[4];
};

class ScaleformCommandSetVariableArray : public ScaleformCommand {
public:
    ScaleformCommandSetVariableArray(const void *a, const char *name, unsigned int type, const void *values, unsigned int n, unsigned int index);
    virtual ~ScaleformCommandSetVariableArray();
    String_82230110 name;
    unsigned int type;
    ArgArray_826700E0 values;
    unsigned int index;
};

ScaleformCommandSetVariableArray::ScaleformCommandSetVariableArray(const void *a, const char *nm, unsigned int t, const void *v, unsigned int n, unsigned int i)
    : ScaleformCommand(a), name(nm)
{
    values.count = n;
    type = t;
    index = i;
    fn_826700E0(&values, v, n);
}
}
