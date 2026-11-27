// hkMemorySystem (Common/Base/Memory/System/hkMemorySystem.h), 4 bytes: the interface that sets up the memory
// routers of the main thread and the worker threads. A root class (RTTI); hkFreeListMemorySystem derives from it.
// The destructor is out of line (82CE7330, which only stores the vtable; the scalar deleting destructor 82CE6B40
// calls it). The deleting destructor frees nothing, so the class has the placement allocator. getInstance is
// fn_82CE7310 (it returns lbl_8323B214; the name is Havok's, so it keeps its fn_ name).
// The vtable (??_7hkMemorySystem@@6B@, 14 slots) has six pure slots after the destructor and seven defaults
// (empty, except slot 8, which returns 0, and slot 9, which returns 1). The names of the first five follow
// Havok's header and are checked against hkFreeListMemorySystem's overrides: mainInit 82CE6C08 (stores the frame
// info), mainQuit 82CE6CB0, threadInit 82CE6D78 and threadQuit 82CE6E98 (both index the thread data by the
// router), printStatistics 82CE70C0 (writes to an hkOstream). The other slots are not named yet: the sixth pure
// one (hkFreeListMemorySystem: 82CE6B80, forwards to its main allocator) and the defaults are declared as slotNN.
#ifndef HAVOK_HKMEMORYSYSTEM_H
#define HAVOK_HKMEMORYSYSTEM_H

#include "havok/hkBaseTypes.h"
#include "havok/hkFlags.h"

class hkMemoryRouter;
class hkOstream;
class hkMemorySystem;
extern "C" hkMemorySystem &fn_82CE7310(void);   // hkMemorySystem::getInstance()

class hkMemorySystem {
public:
    enum FlagBits {
        FLAG_PERSISTENT = 1,
        FLAG_TEMPORARY = 2,
        FLAG_ALL = FLAG_PERSISTENT | FLAG_TEMPORARY
    };
    typedef hkFlags<FlagBits, int> Flags;

    // HK_DECLARE_PLACEMENT_ALLOCATOR (hkReferencedObject.h), written out: units that include this header keep a
    // local hkMemoryRouter, which hkReferencedObject.h would redefine.
    HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t, void *p) { return p; }
    HK_FORCE_INLINE void HK_CALL operator delete(void *, void *) {}
    HK_FORCE_INLINE void HK_CALL operator delete(void *) {}

    static HK_FORCE_INLINE hkMemorySystem &getInstance() { return fn_82CE7310(); }

    virtual ~hkMemorySystem();
    virtual hkMemoryRouter *mainInit(void *info, Flags f = FLAG_ALL) = 0;                             // +0x4
    virtual int mainQuit(Flags f = FLAG_ALL) = 0;                                                     // +0x8
    virtual void threadInit(hkMemoryRouter &r, const char *name, Flags f = FLAG_ALL) = 0;             // +0xC
    virtual void threadQuit(hkMemoryRouter &r, Flags f = FLAG_ALL) = 0;                               // +0x10
    virtual void printStatistics(hkOstream *ostr) = 0;                                                // +0x14
    virtual void slot18() = 0;                                                                        // +0x18
    virtual void slot1C();                                                                            // +0x1C
    virtual int slot20();                                                                             // +0x20
    virtual int slot24();                                                                             // +0x24
    virtual void slot28();                                                                            // +0x28
    virtual void slot2C();                                                                            // +0x2C
    virtual void slot30();                                                                            // +0x30
    virtual void slot34();                                                                            // +0x34
};

#endif
