// hkOstream::~hkOstream (Common/Base/System/Io/OStream/hkOStream.cpp), under its fn_ name.
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

extern "C" void fn_82CED958(hkOstream *self)
{
    self->hkOstream::~hkOstream();
}
