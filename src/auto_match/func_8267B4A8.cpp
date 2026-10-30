// Scalar deleting destructor of a class with bases GSysAlloc (+0) and GTextureImplNode (+8).
extern "C" void fn_8265CA20(void *p);

class GSysAlloc {
public:
    virtual __forceinline ~GSysAlloc() {}
    int pad;
};

class GTextureImplNode {
public:
    virtual __forceinline ~GTextureImplNode() {}
    int pad;
};

class __declspec(novtable) Class_8267B4A8 : public GSysAlloc, public GTextureImplNode {
public:
    virtual __forceinline ~Class_8267B4A8() {}
};

extern "C" Class_8267B4A8 *fn_8267B4A8(Class_8267B4A8 *self, unsigned int flags)
{
    self->Class_8267B4A8::~Class_8267B4A8();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
