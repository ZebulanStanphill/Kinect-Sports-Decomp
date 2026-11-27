// hkNativeFileSystem::openWriter (Common/Base/System/Io/FileSystem/Native/hkNativeFileSystem.cpp; vtable slot +0x10):
// opens a stdio writer on the converted path and returns it wrapped in a buffered writer (4 KB), which holds the
// only reference.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"
#include "havok/hkNativeFileSystem.h"
#include "havok/hkBufferedStreamWriter.h"

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

hkStreamWriter *hkNativeFileSystem::openWriter(const char *name)
{
    hkStringBuf sb;
    hkStreamWriter *s = new hkStdioStreamWriter(lbl_8317F4E4(name, sb));
    hkStreamWriter *b = new hkBufferedStreamWriter(s, 0x1000);
    s->removeReference();
    return b;
}
