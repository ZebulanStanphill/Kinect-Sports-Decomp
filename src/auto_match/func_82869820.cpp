// Scalar deleting destructor of R1::Soundscape::CAkFilePackageLowLevelIO<CAkDefaultIOHookBlocking>:
// stores the three vtables of the derived class, runs the base destructor (fn_828762C8) and frees.
extern "C" void fn_8265CA20(void *);

namespace AK {
namespace StreamMgr {
class __declspec(novtable) IAkFileLocationResolver {
public:
    virtual ~IAkFileLocationResolver() {}
    virtual void f1() = 0;
    virtual void f2() = 0;
};
class __declspec(novtable) IAkIOHookBlocking {
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
class __declspec(novtable) CAkFileLocationBase {
public:
    virtual ~CAkFileLocationBase() {}
    unsigned char pad[0x414 - 4];
};

class CAkDefaultIOHookBlocking;
}
}
extern "C" void fn_828762C8(R1::Soundscape::CAkDefaultIOHookBlocking *self);

namespace R1 {
namespace Soundscape {
class __declspec(novtable) CAkDefaultIOHookBlocking : public AK::StreamMgr::IAkFileLocationResolver,
                                 public AK::StreamMgr::IAkIOHookBlocking,
                                 public CAkFileLocationBase {
public:
    CAkDefaultIOHookBlocking();
    virtual __forceinline ~CAkDefaultIOHookBlocking() { fn_828762C8(this); }
    int m_41c;
    unsigned char m_420;
};

template <class T> class CAkFilePackageLowLevelIO : public T {
public:
    CAkFilePackageLowLevelIO();
    virtual __forceinline ~CAkFilePackageLowLevelIO() {}
    unsigned int m_424;
};

extern "C" CAkFilePackageLowLevelIO<CAkDefaultIOHookBlocking> *fn_82869820(CAkFilePackageLowLevelIO<CAkDefaultIOHookBlocking> *self, unsigned int flags)
{
    self->CAkFilePackageLowLevelIO<CAkDefaultIOHookBlocking>::~CAkFilePackageLowLevelIO();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
}
}
