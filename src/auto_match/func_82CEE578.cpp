#include "havok/hkBufferedStreamWriter.h"
#include "havok/hkOstream.h"

class hkErrStream : public hkOstream {
public:
    HK_FORCE_INLINE hkErrStream(char *buffer, int size) : hkOstream(static_cast<hkStreamWriter *>(HK_NULL)) {
        m_writer = new (buffer + size - 32) hkBufferedStreamWriter(buffer, size - 32, true);
        m_writer->addReferenceLockUnchecked();
    }
};

extern "C" hkErrStream *fn_82CEE578(hkErrStream *p, char *b, int n) {
    p->hkErrStream::hkErrStream(b, n);
    return p;
}
