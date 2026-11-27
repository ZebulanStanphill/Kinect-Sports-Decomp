// hkBinaryPackfileReader::loadEntireFile(hkStreamReader *) (slot +0xC of ??_7hkBinaryPackfileReader@@6B@): reads
// the header (82E0B0D0), the section headers (82E0B220) and every section (82E0BFD8), then fixes up the global
// references (82E0D0A8). The helpers are not in this unit's family and keep their fn_ names.
#include "havok/hkBinaryPackfileReader.h"

extern "C" {
hkResult fn_82E0B0D0(hkBinaryPackfileReader *self, hkStreamReader *stream, int);
hkResult fn_82E0B220(hkBinaryPackfileReader *self, hkStreamReader *stream, int);
hkResult fn_82E0BFD8(hkBinaryPackfileReader *self, hkStreamReader *stream, int sectionIndex, int);
hkResult fn_82E0D0A8(hkBinaryPackfileReader *self);
}

hkResult hkBinaryPackfileReader::loadEntireFile(hkStreamReader *stream)
{
    if (fn_82E0B0D0(this, stream, 0) == HK_SUCCESS && fn_82E0B220(this, stream, 0) == HK_SUCCESS) {
        for (int i = 0; i < m_header->m_numSections; i++) {
            if (fn_82E0BFD8(this, stream, i, 0) == HK_FAILURE)
                return HK_FAILURE;
        }
        return fn_82E0D0A8(this) == HK_FAILURE ? HK_FAILURE : HK_SUCCESS;
    }
    return HK_FAILURE;
}
