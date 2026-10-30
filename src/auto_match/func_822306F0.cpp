extern "C" void fn_8265CA20(void *p);
class GSysAlloc { public: virtual ~GSysAlloc() {} }; 
extern "C" GSysAlloc *fn_822306F0(GSysAlloc *self, unsigned int flags)
{
    self->GSysAlloc::~GSysAlloc();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
