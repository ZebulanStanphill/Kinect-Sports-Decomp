// hkStdioStreamReader::~hkStdioStreamReader (hkStdioStreamReader.cpp).
#include "havok/hkBase.h"
#include "havok/hkStreamWriter.h"
#include "havok/hkStreamReader.h"

// C runtime functions
extern "C" {
void *fopen(const char *name, const char *mode);
int fclose(void *stream);
}

class hkStdioStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkStdioStreamReader(const char *nameIn);
    virtual ~hkStdioStreamReader();
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);

protected:
    int m_unknown8;      // +0x8, set to -1
    void *m_handle;      // +0xC  FILE *
    hkBool m_isOk;       // +0x10
};

class hkStdioStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkStdioStreamWriter(const char *nameIn);
    virtual ~hkStdioStreamWriter();
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);

protected:
    void *m_handle;      // +0x8  FILE *
    hkBool m_owns;       // +0xC  close the file in the destructor
};

hkStdioStreamReader::~hkStdioStreamReader()
{
    if (m_handle)
        fclose(m_handle);
}
