extern "C" void fn_8265CA20(void *p);
class GAcquireInterface { public: virtual ~GAcquireInterface() {} }; 
extern "C" GAcquireInterface *fn_8267CBF0(GAcquireInterface *self, unsigned int flags)
{
    self->GAcquireInterface::~GAcquireInterface();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
