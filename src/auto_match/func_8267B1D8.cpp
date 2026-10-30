extern "C" void fn_8265CA20(void *p);
class GSysAlloc { public: virtual ~GSysAlloc() {} }; 
extern "C" GSysAlloc *fn_8267B1D8(GSysAlloc *self, unsigned int flags)
{
    self->GSysAlloc::~GSysAlloc();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
