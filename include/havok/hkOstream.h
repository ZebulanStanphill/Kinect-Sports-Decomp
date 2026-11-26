// hkOstream (Common/Base/System/Io/OStream/hkOStream.h), 0xC bytes.
// operator<<(char) is 82CEDAE8 and operator<<(const char *) 82CEDB38. Before them come operator<<(const void *) (82CED9E8, "%p")
// and operator<<(hkBool) (82CEDA50, "true"/"false"), as in Havok's declaration order.
#ifndef HAVOK_HKOSTREAM_H
#define HAVOK_HKOSTREAM_H

#include "havok/hkStreamWriter.h"

class hkMemoryTrack;

class hkOstream : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkOstream(hkStreamWriter *sw);
    hkOstream(const char *filename);
    hkOstream(void *mem, int memSize, hkBool isString);
    hkOstream(hkMemoryTrack *track);
    hkOstream(hkArray<char> &buf);
    // The finish constructor runs hkReferencedObject's default constructor
    // (m_referenceCount = 1) and leaves m_writer alone.
    hkOstream(hkFinishLoadedObjectFlag flag) {}
    virtual ~hkOstream();
    virtual const hkClass *getClassType() const;
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;

    // 82CED9E8, fn_82CED9E8 in the symbol list: a unit that calls it needs
    // the C++ name mapped to that (82E0A208 has the mapping).
    hkOstream &operator<<(const void *p);
    hkOstream &operator<<(char c);
    hkOstream &operator<<(const char *str);

    void printf(const char *fmt, ...);

    // Havok's accessor; 82E0F818 hands the stream's writer to hkObjectCopier::copyObject.
    HK_FORCE_INLINE hkStreamWriter *getStreamWriter() { return m_writer; }

protected:
    // A reference-counted writer, managed with the lock-free reference
    // functions (fn_82CE3E28 / fn_82CE3E48).
    hkStreamWriter *m_writer;   // +0x8
};

#endif
