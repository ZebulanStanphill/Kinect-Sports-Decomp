// finishLoadedObjecthkOstream: the finish function in hkOstream's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"

class hkStreamWriter;

class hkOstream : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    // The finish constructor runs hkReferencedObject's default constructor
    // (m_referenceCount = 1) and leaves m_writer alone.
    hkOstream(hkFinishLoadedObjectFlag flag) {}
    virtual ~hkOstream();
    virtual const hkClass *getClassType() const;
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;

protected:
    hkStreamWriter *m_writer;   // +0x8
};

void HK_CALL finishLoadedObjecthkOstream(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkOstream(f);
}
