// hkTraceStream (Common/Base/DebugUtil/TraceStream/hkTraceStream.h), 0x1C bytes: hkReferencedObject and the empty
// hkSingleton<hkTraceStream> (RTTI), an output stream, a word and a list of 32-byte titles (hkTraceStreamTitle,
// a reflected struct: its name string is in the game).
// The singleton creation function (83080AC0) clears m_stream and the word at +0xC in the constructor body. The
// destructor is implicit; it is shared with hkpMultiRayShape (fn_82D3A990), which also ends in an array of 32-byte
// elements at +0x10. The finish constructor (82CE4AF8) runs hkReferencedObject's default constructor
// (m_referenceCount = 1) and touches nothing else.
// The names of m_stream and m_titles follow Havok's header; the word at +0xC is not named by any unit.
#ifndef HAVOK_HKTRACESTREAM_H
#define HAVOK_HKTRACESTREAM_H

#include "havok/hkBase.h"
#include "havok/hkSingleton.h"

class hkOstream;

class hkTraceStream : public hkReferencedObject, public hkSingleton<hkTraceStream> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    struct Title {
        char m_value[32];
    };
    hkTraceStream()
    {
        m_stream = HK_NULL;
        m_unknownC = 0;
    }
    hkTraceStream(hkFinishLoadedObjectFlag flag) : m_titles(flag) {}

    hkOstream *m_stream;      // +0x8
    hkInt32 m_unknownC;       // +0xC
    hkArray<Title> m_titles;  // +0x10
};

#endif
