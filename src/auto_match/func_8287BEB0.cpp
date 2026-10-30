extern "C" {
void *fn_82811400(void *out, int n);
void fn_82811238(void *heap, void *p, void *r);
extern char lbl_832116F8[];
}
namespace R1 { namespace Soundscape {  class EmitterObserver_i { public: virtual ~EmitterObserver_i() {} }; } } 
extern "C" R1::Soundscape::EmitterObserver_i *fn_8287BEB0(R1::Soundscape::EmitterObserver_i *self, unsigned int flags)
{
    self->R1::Soundscape::EmitterObserver_i::~EmitterObserver_i();
    if (flags & 1) {
        char buf[24];
        fn_82811238(lbl_832116F8, self, fn_82811400(buf, 4));
    }
    return self;
}
