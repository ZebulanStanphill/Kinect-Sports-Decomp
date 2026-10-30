extern "C" void fn_8265CA20(void *p);

class GSysAlloc {
public:
    virtual __forceinline ~GSysAlloc() {}
};

class __declspec(novtable) Class_8267BA18 : public GSysAlloc {
public:
    GSysAlloc m;
    virtual __forceinline ~Class_8267BA18() {}
};

extern "C" Class_8267BA18 *fn_8267BA18(Class_8267BA18 *self, unsigned int flags)
{
    self->Class_8267BA18::~Class_8267BA18();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
