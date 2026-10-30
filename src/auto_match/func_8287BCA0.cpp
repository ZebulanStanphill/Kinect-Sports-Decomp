// R1::Soundscape::EmitterSubject_i scalar deleting destructor: stores the interface vtable, then deletes.
extern "C" void fn_8265CA20(void *);

namespace R1 { namespace Soundscape {
class EmitterSubject_i {
public:
    virtual ~EmitterSubject_i() {}
    virtual void s1() = 0;
    virtual void s2() = 0;
    virtual void s3() = 0;
    virtual void s4() = 0;
    static void operator delete(void *p) { fn_8265CA20(p); }
};
}}

void emitVtable_8287BCA0(R1::Soundscape::EmitterSubject_i *p) { p->R1::Soundscape::EmitterSubject_i::~EmitterSubject_i(); }
