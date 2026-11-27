// hkMemorySystem's scalar deleting destructor ??_GhkMemorySystem@@UAAPAXI@Z (slot 0 of ??_7hkMemorySystem@@6B@):
// it calls the destructor (82CE7330); the placement allocator's operator delete frees nothing. The class at the
// end only makes the compiler emit hkMemorySystem's vtable and with it the deleting destructor.
#include "havok/hkBase.h"
#include "havok/hkMemorySystem.h"

namespace {
class EmitVtable_82CE6B40 : public hkMemorySystem {
public:
    virtual hkMemoryRouter *mainInit(void *, Flags);
    virtual int mainQuit(Flags);
    virtual void threadInit(hkMemoryRouter &, const char *, Flags);
    virtual void threadQuit(hkMemoryRouter &, Flags);
    virtual void printStatistics(hkOstream *);
    virtual void slot18();
};
}

void emitVtable_82CE6B40(void *p) { new (p) EmitVtable_82CE6B40; }
