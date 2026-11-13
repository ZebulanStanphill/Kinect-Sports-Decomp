// hkpCollisionDispatcher::debugPrintTable (Havok, /O2).
// hkStringBuf(const char *s0, const char *s1, s2..s5 = HK_NULL) is the out-of-line
// constructor fn_82D05288, renamed so the call is a real C++ constructor call (this
// first, then the defaulted s2..s5 in order). hkErrStream keeps its fn_ constructor
// and destructor behind inline wrappers; its destructor keeps the four streams in
// separate stack slots, while the plain char buffers share theirs.
#include "havok/hkBase.h"

class hkError : public hkReferencedObject {
public:
    virtual int message(int type, int id, const char *text, const char *file, int line);
    virtual void setEnabled(int id, hkBool enabled);
    virtual hkBool isEnabled(int id);
    virtual void enableAll();
    virtual void sectionBegin(int id, const char *sectionName);
    virtual void sectionEnd();
};

class hkStringBuf {
public:
    hkStringBuf(const char *s0, const char *s1, const char *s2 = HK_NULL, const char *s3 = HK_NULL,
        const char *s4 = HK_NULL, const char *s5 = HK_NULL);
    hkInplaceArray<char, 32, hkContainerTempAllocator> m_string;
};

class hkErrStream;
extern "C" {
extern hkError *lbl_8323B464; // hkSingleton<hkError>::s_instance
const char *fn_82D6F1D8(int shapeType); // hkGetShapeTypeName
void fn_82CEE578(hkErrStream *, void *buf, int bufSize); // hkErrStream::hkErrStream
void fn_82CEE238(hkErrStream *, const hkStringBuf *); // operator<<(const hkStringBuf &)
void fn_82CEDB38(hkErrStream *, const char *); // operator<<(const char *)
void fn_82CED958(hkErrStream *); // ~hkErrStream
int fn_82CFBB60(char *buf, int n, const char *fmt, ...); // hkString::snprintf
}

class hkErrStream {
public:
    HK_FORCE_INLINE hkErrStream(void *buf, int bufSize) { fn_82CEE578(this, buf, bufSize); }
    HK_FORCE_INLINE ~hkErrStream() { fn_82CED958(this); }
    char m_data[16];
};

struct DebugEntry {
    signed char m_typeA;
    signed char m_typeB;
    signed char m_priority;
};

struct hkpCollisionDispatcher {
    char pad[0x1e30];
    DebugEntry *m_debugTable;     // 32 x 32 entries
    DebugEntry *m_debugTablePred; // 32 x 32 entries
};

#define HK_MAX_SHAPE_TYPE 32

extern "C" void fn_82D59888(hkpCollisionDispatcher *self)
{
    lbl_8323B464->sectionBegin(0x5e4345e4, "hkpCollisionDispatcher::debugPrintTable");
    if (self->m_debugTable && self->m_debugTablePred) {
        char buffer[512];
        for (int a = 0, row = 0; row < HK_MAX_SHAPE_TYPE * HK_MAX_SHAPE_TYPE; row += HK_MAX_SHAPE_TYPE, ++a) {
            hkStringBuf str("\nEntries for (continuous)", fn_82D6F1D8(a));
            {
                hkErrStream ostr(buffer, 512);
                fn_82CEE238(&ostr, &str);
                lbl_8323B464->message(0, -1, buffer, ".\\Dispatch\\hkpCollisionDispatcher.cpp", 0x222);
            }
            for (int b = 1; b < HK_MAX_SHAPE_TYPE; ++b) {
                DebugEntry *e = &self->m_debugTablePred[row + b];
                if (e->m_priority < 100) {
                    char text[256];
                    const char *name = fn_82D6F1D8(b);
                    const char *typeA = fn_82D6F1D8(e->m_typeA);
                    const char *typeB = fn_82D6F1D8(e->m_typeB);
                    fn_82CFBB60(text, 255, "vs %30s <%i:%s-%s>", name, e->m_priority, typeA, typeB);
                    hkErrStream ostr(buffer, 512);
                    fn_82CEDB38(&ostr, text);
                    lbl_8323B464->message(0, -1, buffer, ".\\Dispatch\\hkpCollisionDispatcher.cpp", 0x231);
                }
            }
        }
        for (int a = 0, row = 0; row < HK_MAX_SHAPE_TYPE * HK_MAX_SHAPE_TYPE; row += HK_MAX_SHAPE_TYPE, ++a) {
            hkStringBuf str("\nEntries for (discrete)", fn_82D6F1D8(a));
            {
                hkErrStream ostr(buffer, 512);
                fn_82CEE238(&ostr, &str);
                lbl_8323B464->message(0, -1, buffer, ".\\Dispatch\\hkpCollisionDispatcher.cpp", 0x239);
            }
            for (int b = 1; b < HK_MAX_SHAPE_TYPE; ++b) {
                DebugEntry *e = &self->m_debugTable[row + b];
                if (e->m_priority < 100) {
                    char text[256];
                    const char *name = fn_82D6F1D8(b);
                    const char *typeA = fn_82D6F1D8(e->m_typeA);
                    const char *typeB = fn_82D6F1D8(e->m_typeB);
                    fn_82CFBB60(text, 255, "vs %30s <%i:%s-%s>", name, e->m_priority, typeA, typeB);
                    hkErrStream ostr(buffer, 512);
                    fn_82CEDB38(&ostr, text);
                    lbl_8323B464->message(0, -1, buffer, ".\\Dispatch\\hkpCollisionDispatcher.cpp", 0x248);
                }
            }
        }
        lbl_8323B464->sectionEnd();
    }
}
