// ScaleformAllocator constructor: stores the vtable.
class ScaleformAllocator {
public:
    virtual void f0();
    __forceinline ScaleformAllocator() {}
};

extern "C" void fn_8267A280(ScaleformAllocator *p)
{
    p->ScaleformAllocator::ScaleformAllocator();
}
