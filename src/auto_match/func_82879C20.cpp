// R1::Soundscape::WwiseEmitter_c destructor (bases Emitter_i at +0 and EmitterSubject_c at +4):
// stops its events (fn_82878D48(this, true)), releases the handle at +0x50 through the manager
// returned by fn_828681F8, unregisters (fn_82879878), then the members in reverse order: the
// vector at +0x7c (inline _Tidy, freed with operator delete fn_8265CA20), the
// ReverbEmitterControl_c at +0x58, the WwiseEventContext_c at +0x44, the inline
// WwiseEmitterRTPCStategy_c at +0x40, the AudioVariant_c at +0x18, then the bases. The destructors of AudioVariant_c and EmitterSubject_c keep their fn_ names
// (novtable keeps the inline forwarders from storing a vtable first).
extern "C" {
void fn_8265CA20(void *p);
void fn_82878D48(void *self, bool all);
void *fn_828681F8(void);
void fn_8286C910(void *mgr, void *handle);
void fn_82879878(void *self);
void fn_82864898(void *self);
void fn_8287BD28(void *self);
}

namespace R1 {
namespace Soundscape {
class Emitter_i {
public:
    virtual ~Emitter_i() {}
};

class __declspec(novtable) EmitterSubject_c {
public:
    virtual __forceinline ~EmitterSubject_c() { fn_8287BD28(this); }
    void *m_first;
    void *m_last;
    void *m_end;
};

class __declspec(novtable) AudioVariant_c {
public:
    virtual __forceinline ~AudioVariant_c() { fn_82864898(this); }
    char m_name[0x1c];
    unsigned int m_id;
};

class WwiseEmitterRTPCStategy_c {
public:
    virtual ~WwiseEmitterRTPCStategy_c() {}
};

class WwiseEventContext_c {
public:
    virtual ~WwiseEventContext_c();
    int m_4;
    int m_8;
};

class ReverbEmitterControl_c {
public:
    virtual ~ReverbEmitterControl_c();
    char m_4[0x1c];
};

struct EventVec_82879C20 {
    void **first;
    void **last;
    void **end;
    ~EventVec_82879C20()
    {
        if (first != 0)
            fn_8265CA20(first);
        first = 0;
        last = 0;
        end = 0;
    }
};

class WwiseEmitter_c : public Emitter_i, public EmitterSubject_c {
public:
    virtual __forceinline ~WwiseEmitter_c();
    int m_14;
    AudioVariant_c m_variant;
    int m_3c;
    WwiseEmitterRTPCStategy_c m_rtpc;
    WwiseEventContext_c m_context;
    void *m_handle;
    int m_54;
    ReverbEmitterControl_c m_reverb;
    int m_78;
    EventVec_82879C20 m_events;
};

__forceinline WwiseEmitter_c::~WwiseEmitter_c()
{
    fn_82878D48(this, true);
    if (m_handle != 0)
        fn_8286C910(fn_828681F8(), &m_handle);
    fn_82879878(this);
}
}
}

extern "C" void fn_82879C20(R1::Soundscape::WwiseEmitter_c *self)
{
    self->R1::Soundscape::WwiseEmitter_c::~WwiseEmitter_c();
}
