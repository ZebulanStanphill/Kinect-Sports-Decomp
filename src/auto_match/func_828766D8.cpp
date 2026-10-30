// R1::Soundscape::CAkDefaultIOHookBlocking::CAkDefaultIOHookBlocking(): stores the two interface vtables,
// runs CAkFileLocationBase's out-of-line constructor, then stores its own three vtables and
// initialises its members. Classes are declared from the vtable names and RTTI.
namespace AK {
namespace StreamMgr {
class IAkFileLocationResolver {
public:
    virtual ~IAkFileLocationResolver() {}
    virtual void f1() = 0;
    virtual void f2() = 0;
};
class IAkIOHookBlocking {
public:
    virtual ~IAkIOHookBlocking() {}
    virtual void f1() = 0;
    virtual void f2() = 0;
    virtual void f3() = 0;
    virtual void f4() = 0;
    virtual void f5() = 0;
};
class __declspec(novtable) IAkLowLevelIOHook : public IAkIOHookBlocking {
public:
};
}
}

namespace R1 {
namespace Soundscape {
class CAkFileLocationBase {
public:
    CAkFileLocationBase();
    virtual ~CAkFileLocationBase();
    unsigned char m_data[0x414 - 4];
};

class CAkDefaultIOHookBlocking : public AK::StreamMgr::IAkFileLocationResolver, public AK::StreamMgr::IAkLowLevelIOHook, public CAkFileLocationBase {
public:
    CAkDefaultIOHookBlocking();
    virtual ~CAkDefaultIOHookBlocking();
    int m_41c;
    unsigned char m_420;
};

CAkDefaultIOHookBlocking::CAkDefaultIOHookBlocking()
    : m_41c(-1), m_420(0)
{
}
}
}
