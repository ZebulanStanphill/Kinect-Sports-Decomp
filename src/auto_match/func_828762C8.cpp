namespace AK {
namespace StreamMgr {
class IAkFileLocationResolver {
public:
    virtual ~IAkFileLocationResolver() {}
    virtual void f1() = 0;
    virtual void f2() = 0;
};
class IAkLowLevelIOHook {
public:
    virtual ~IAkLowLevelIOHook() {}
    virtual void f1() = 0;
    virtual void f2() = 0;
    virtual void f3() = 0;
};
}
}

namespace R1 {
namespace Soundscape {
class CAkFileLocationBase {
public:
    virtual ~CAkFileLocationBase();
};

class CAkDefaultIOHookBlocking : public AK::StreamMgr::IAkFileLocationResolver, public AK::StreamMgr::IAkLowLevelIOHook, public CAkFileLocationBase {
public:
    virtual __forceinline ~CAkDefaultIOHookBlocking();
};

__forceinline CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking()
{
}
}
}

extern "C" void fn_828762C8(R1::Soundscape::CAkDefaultIOHookBlocking *self)
{
    self->R1::Soundscape::CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking();
}
