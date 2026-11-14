// Appends `value` to a std::vector of ints in the XLip library unless it is
// already there (Visual C++ 2010's standard library built without inlining).
// begin() and end() return an iterator through a hidden pointer, which the
// original loads before `this`: only a member call does that. They are the
// folded vector begin()/end() of the library (fn_82668D40, fn_82668D80), as
// in func_8265CE58; the iterator compare, operator[], operator++ and push_back
// are called by their fn_ names. The class and its iterators are placeholders
// named after this function.
struct ConstIter_8266AC20 {
    int *ptr;
};

struct Iter_8266AC20 : ConstIter_8266AC20 {
};

struct Vector_8266AC20 {
    Iter_8266AC20 begin();
    Iter_8266AC20 end();
};

extern "C" {
unsigned char fn_82668EA0(const ConstIter_8266AC20 *self, const ConstIter_8266AC20 *right);
int *fn_8265FA58(const ConstIter_8266AC20 *self, int offset);
void fn_8265D3D0(ConstIter_8266AC20 *self);
void fn_82666560(Vector_8266AC20 *self, const int *value);
}

extern "C" void fn_8266AC20(Vector_8266AC20 *self, int value)
{
    Iter_8266AC20 it;
    for (it = self->begin(); fn_82668EA0(&it, &self->end()); fn_8265D3D0(&it)) {
        if (*fn_8265FA58(&it, 0) == value)
            return;
    }
    fn_82666560(self, &value);
}
