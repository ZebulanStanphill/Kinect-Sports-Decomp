// hkOstream scalar deleting destructor (vtable slot 0). It calls the out-of-line destructor fn_82CED958, which keeps its fn_ name, so it is written out by hand and keeps its own.
#include "havok/hkBase.h"

class hkStreamWriter : public hkReferencedObject {
public:
    virtual hkBool isOk() const = 0;
    virtual int write(const void *buf, int nbytes) = 0;
};

class hkOstream : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkOstream(hkStreamWriter *sw);
    // Out of line in hkOStream.cpp as fn_82CED958, which keeps its fn_ name
    // (about 100 units that need no C++ call it); defined inline here so the
    // extern "C" definition below can expand it.
    virtual ~hkOstream()
    {
        if (m_writer)
            m_writer->removeReferenceLockUnchecked();
    }
    virtual const hkClass *getClassType() const;
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;

protected:
    // A reference-counted writer, managed with the lock-free reference
    // functions (fn_82CE3E28 / fn_82CE3E48).
    hkStreamWriter *m_writer;   // +0x8
};

extern "C" void fn_82CED958(hkOstream *self);   // hkOstream::~hkOstream

extern "C" hkOstream *fn_82CEE790(hkOstream *self, unsigned int flags)
{
    fn_82CED958(self);
    if (flags & 1)
        hkOstream::operator delete(self);
    return self;
}
