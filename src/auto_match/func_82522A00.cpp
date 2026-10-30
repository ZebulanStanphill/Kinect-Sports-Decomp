extern "C" void fn_8265CA20(void *p);
namespace R1 { class IAllocator { public: virtual ~IAllocator() {} }; } 
extern "C" R1::IAllocator *fn_82522A00(R1::IAllocator *self, unsigned int flags)
{
    self->R1::IAllocator::~IAllocator();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
