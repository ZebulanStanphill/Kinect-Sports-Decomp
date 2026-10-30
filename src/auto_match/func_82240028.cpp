extern "C" void fn_8265CA20(void *p);
namespace stdext { class exception { public: virtual ~exception() {} }; } 
extern "C" stdext::exception *fn_82240028(stdext::exception *self, unsigned int flags)
{
    self->stdext::exception::~exception();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
