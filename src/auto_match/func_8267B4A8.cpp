// Scalar deleting destructor of a class with bases GSysAlloc (+0) and, at +8, the abstract class whose
// vtable is lbl_82005480 (Node_8267B3E8 in func_8267B3E8.cpp; no RTTI, so its name is not known).
extern "C" void fn_8265CA20(void *p);

class GSysAlloc {
public:
    virtual __forceinline ~GSysAlloc() {}
    int pad;
};

class Node_8267B3E8 {
public:
    virtual __forceinline ~Node_8267B3E8() {}
    int pad;
};

class __declspec(novtable) Class_8267B4A8 : public GSysAlloc, public Node_8267B3E8 {
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
