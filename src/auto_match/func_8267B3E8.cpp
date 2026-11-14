// Scalar deleting destructor of the abstract class whose vtable is lbl_82005480 (no RTTI: the class
// name is not known; five pure virtuals and this destructor in the last slot).
extern "C" void fn_8265CA20(void *p);
class Node_8267B3E8 { public: virtual ~Node_8267B3E8() {} };
extern "C" Node_8267B3E8 *fn_8267B3E8(Node_8267B3E8 *self, unsigned int flags)
{
    self->Node_8267B3E8::~Node_8267B3E8();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
