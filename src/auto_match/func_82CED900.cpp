// hkOstream::hkOstream(hkStreamWriter *) (Common/Base/System/Io/OStream/hkOStream.cpp).
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
    virtual ~hkOstream();
    virtual const hkClass *getClassType() const;
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;

protected:
    // A reference-counted writer, managed with the lock-free reference
    // functions (fn_82CE3E28 / fn_82CE3E48).
    hkStreamWriter *m_writer;   // +0x8
};

hkOstream::hkOstream(hkStreamWriter *sw)
{
    m_writer = sw;
    if (sw)
        sw->addReferenceLockUnchecked();
}
