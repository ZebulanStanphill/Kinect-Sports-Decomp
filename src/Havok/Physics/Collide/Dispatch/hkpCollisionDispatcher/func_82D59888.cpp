// hkpCollisionDispatcher::debugPrintTable() (Havok, /O2); the name is the game's report section string.
// hkStringBuf(const char *s0, const char *s1, s2..s5 = HK_NULL) is the out-of-line
// constructor fn_82D05288, renamed so the call is a real C++ constructor call (this
// first, then the defaulted s2..s5 in order). hkErrStream keeps its fn_ constructor
// behind an inline wrapper, and the inline destructor calls hkOstream's; its destructor keeps the four streams in
// separate stack slots, while the plain char buffers share theirs.
#include "havok/hkOstream.h"
#include "havok/hkpCollisionDispatcher.h"
#include "havok/hkError.h"
#include "havok/hkStringBuf.h"

class hkErrStream;
extern "C" {
const char *fn_82D6F1D8(int shapeType); // hkGetShapeTypeName
void fn_82CEE578(hkErrStream *, void *buf, int bufSize); // hkErrStream::hkErrStream
void fn_82CEE238(hkErrStream *, const hkStringBuf *); // operator<<(const hkStringBuf &)
}

class hkErrStream {
public:
    HK_FORCE_INLINE hkErrStream(void *buf, int bufSize) { fn_82CEE578(this, buf, bufSize); }
    HK_FORCE_INLINE ~hkErrStream() { ((hkOstream *)this)->hkOstream::~hkOstream(); }
    char m_data[16];
};

void hkpCollisionDispatcher::debugPrintTable()
{
    const int MAX_TYPES = HK_MAX_SHAPE_TYPE;
    hkError::getInstance().sectionBegin(0x5e4345e4, "hkpCollisionDispatcher::debugPrintTable");
    if (m_debugAgent2Table && m_debugAgent2TablePred) {
        char buffer[512];
        for (int a = 0, row = 0; row < MAX_TYPES * MAX_TYPES; row += MAX_TYPES, ++a) {
            hkStringBuf str("\nEntries for (continuous)", fn_82D6F1D8(a));
            {
                hkErrStream ostr(buffer, 512);
                fn_82CEE238(&ostr, &str);
                hkError::getInstance().message(hkError::MESSAGE_REPORT, -1, buffer,
                                               ".\\Dispatch\\hkpCollisionDispatcher.cpp", 0x222);
            }
            for (int b = 1; b < MAX_TYPES; ++b) {
                DebugEntry *e = &m_debugAgent2TablePred[row + b];
                if (e->m_priority < 100) {
                    char text[256];
                    const char *name = fn_82D6F1D8(b);
                    const char *typeA = fn_82D6F1D8(e->m_typeA);
                    const char *typeB = fn_82D6F1D8(e->m_typeB);
                    hkString::snprintf(text, 255, "vs %30s <%i:%s-%s>", name, e->m_priority, typeA, typeB);
                    hkErrStream ostr(buffer, 512);
                    *(hkOstream *)&ostr << text;
                    hkError::getInstance().message(hkError::MESSAGE_REPORT, -1, buffer,
                                                   ".\\Dispatch\\hkpCollisionDispatcher.cpp", 0x231);
                }
            }
        }
        for (int a = 0, row = 0; row < MAX_TYPES * MAX_TYPES; row += MAX_TYPES, ++a) {
            hkStringBuf str("\nEntries for (discrete)", fn_82D6F1D8(a));
            {
                hkErrStream ostr(buffer, 512);
                fn_82CEE238(&ostr, &str);
                hkError::getInstance().message(hkError::MESSAGE_REPORT, -1, buffer,
                                               ".\\Dispatch\\hkpCollisionDispatcher.cpp", 0x239);
            }
            for (int b = 1; b < MAX_TYPES; ++b) {
                DebugEntry *e = &m_debugAgent2Table[row + b];
                if (e->m_priority < 100) {
                    char text[256];
                    const char *name = fn_82D6F1D8(b);
                    const char *typeA = fn_82D6F1D8(e->m_typeA);
                    const char *typeB = fn_82D6F1D8(e->m_typeB);
                    hkString::snprintf(text, 255, "vs %30s <%i:%s-%s>", name, e->m_priority, typeA, typeB);
                    hkErrStream ostr(buffer, 512);
                    *(hkOstream *)&ostr << text;
                    hkError::getInstance().message(hkError::MESSAGE_REPORT, -1, buffer,
                                                   ".\\Dispatch\\hkpCollisionDispatcher.cpp", 0x248);
                }
            }
        }
        hkError::getInstance().sectionEnd();
    }
}
