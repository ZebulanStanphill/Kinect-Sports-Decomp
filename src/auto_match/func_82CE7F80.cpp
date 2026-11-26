// hkNativeFileSystem::openReader (Common/Base/System/Io/FileSystem/Native/hkNativeFileSystem.cpp): opens a stdio reader on the converted path and wraps it in a buffered reader unless it supports marks.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"
#include "havok/hkNativeFileSystem.h"
#include "havok/hkBufferedStreamReader.h"

// hkStringBuf: an in-place string buffer (32 chars) on the temp allocator.
// Its constructor and destructor are out of line and keep their fn_ names.
class hkStringBuf;
extern "C" {
void fn_82CE7EE0(hkStringBuf *self);   // hkStringBuf::hkStringBuf()
void fn_82CE7E68(hkStringBuf *self);   // hkStringBuf::~hkStringBuf()
}
class hkStringBuf {
public:
    HK_FORCE_INLINE hkStringBuf() { fn_82CE7EE0(this); }
    HK_FORCE_INLINE ~hkStringBuf() { fn_82CE7E68(this); }
    char *m_data;                 // +0x0 (hkInplaceArray<char, 32>)
    int m_size;                   // +0x4
    int m_capacityAndFlags;       // +0x8
    char m_storage[0x20];         // +0xC
};

// The path converter the native file system applies to file names.
extern "C" const char *(*lbl_8317F4E4)(const char *name, hkStringBuf &buf);

hkStreamReader *hkNativeFileSystem::openReader(const char *name)
{
    hkStringBuf sb;
    hkStreamReader *s = new hkStdioStreamReader(lbl_8317F4E4(name, sb));
    if (!s->markSupported()) {
        hkStreamReader *b = new hkBufferedStreamReader(s);
        s->removeReference();
        return b;
    }
    return s;
}
