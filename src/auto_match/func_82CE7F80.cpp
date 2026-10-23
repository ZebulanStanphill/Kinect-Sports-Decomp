// hkNativeFileSystem::openReader (Common/Base/System/Io/FileSystem/Native/hkNativeFileSystem.cpp): opens a stdio reader on the converted path and wraps it in a buffered reader unless it supports marks.
#include "havok/hkBase.h"

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

class hkStreamReader : public hkReferencedObject {
public:
    virtual hkBool isOk() const;                // +0x0C
    virtual int read(void *buf, int nbytes);    // +0x10
    virtual int skip(int nbytes);               // +0x14
    virtual hkBool markSupported() const;       // +0x18
};

class hkStreamWriter : public hkReferencedObject {
public:
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
};

class hkStdioStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkStdioStreamReader(const char *nameIn);
    int m_unknown8;      // +0x8
    void *m_handle;      // +0xC
    hkBool m_isOk;       // +0x10
};

class hkBufferedStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkBufferedStreamReader(hkStreamReader *s, int bufSize = 0x1000);
    hkStreamReader *m_stream;   // +0x8
    char m_buf[0x18];           // +0xC
};

class hkFileSystem : public hkReferencedObject {
public:
    virtual hkStreamReader *openReader(const char *name);   // +0x0C
    virtual hkStreamWriter *openWriter(const char *name);   // +0x10
};

class hkNativeFileSystem : public hkFileSystem {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual hkStreamReader *openReader(const char *name);
    virtual hkStreamWriter *openWriter(const char *name);
};

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
