// hkStdioStreamWriter::hkStdioStreamWriter (hkStdioStreamWriter.cpp): a
// writer over the CRT's stderr (2) or stdout (anything else), which it does
// not own. fn_82F6AB08 is the CRT's __iob_func (FILE is 0x20 bytes).
#include "havok/hkBase.h"

// CRT functions; they keep their fn_ names because Matching C units call them.
extern "C" {
char *fn_82F6AB08(void);   // __iob_func
}

class hkStreamWriter : public hkReferencedObject {
public:
    virtual hkBool isOk() const = 0;
    virtual int write(const void *buf, int nbytes) = 0;
    virtual void flush() {}
};

class hkStdioStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkStdioStreamWriter(int stdStream);
    virtual ~hkStdioStreamWriter();
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);

protected:
    void *m_handle;      // +0x8  FILE *
    hkBool m_owns;       // +0xC  close the file in the destructor
};

hkStdioStreamWriter::hkStdioStreamWriter(int stdStream)
{
    m_owns = false;
    if (stdStream == 2)
        m_handle = fn_82F6AB08() + 0x40;   // stderr
    else
        m_handle = fn_82F6AB08() + 0x20;   // stdout
}
