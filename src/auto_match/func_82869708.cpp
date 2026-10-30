// R1::Soundscape::CAkFilePackageLowLevelIO<CAkDefaultIOHookBlocking> constructor: runs the
// CAkDefaultIOHookBlocking base constructor (out of line, fn_828766D8), stores the three vtables of
// the derived class and clears the member at +0x424.
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
};
}
}

namespace R1 {
namespace Soundscape {
class CAkFileLocationBase {
public:
    virtual ~CAkFileLocationBase();
    unsigned char pad[0x414 - 4];
};

class CAkDefaultIOHookBlocking : public AK::StreamMgr::IAkFileLocationResolver,
                                 public AK::StreamMgr::IAkIOHookBlocking,
                                 public CAkFileLocationBase {
public:
    CAkDefaultIOHookBlocking();
    virtual ~CAkDefaultIOHookBlocking();
    int m_41c;
    unsigned char m_420;
};

template <class T> class CAkFilePackageLowLevelIO : public T {
public:
    CAkFilePackageLowLevelIO();
    virtual ~CAkFilePackageLowLevelIO();
    unsigned int m_424;
};

template <class T> CAkFilePackageLowLevelIO<T>::CAkFilePackageLowLevelIO()
    : m_424(0)
{
}

template CAkFilePackageLowLevelIO<CAkDefaultIOHookBlocking>::CAkFilePackageLowLevelIO();
}
}
