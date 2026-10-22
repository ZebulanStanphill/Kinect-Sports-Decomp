class Source {
public:
    virtual void f0() = 0;
    virtual void f1() = 0;
    virtual void f2() = 0;
    virtual void f3() = 0;
    virtual void f4() = 0;
    virtual int GetCount(unsigned int *count) = 0;
};
struct Obj { int pad[2]; Source *source; unsigned int value; int pad10; unsigned int base; };

extern "C" int fn_82E65760(Obj *self, unsigned int *value, unsigned int *remaining)
{
    unsigned int n = 0;
    int hr = self->source->GetCount(&n);
    if (hr >= 0) {
        if (n < self->base) hr = 0x8000ffff;
        else {
            if (remaining) *remaining = n - self->base;
            if (value) *value = self->value;
        }
    }
    return hr;
}
