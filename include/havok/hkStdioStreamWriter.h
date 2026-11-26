// hkStdioStreamWriter (Common/Base/System/Io/Writer/Stdio/hkStdioStreamWriter.h), 0x10 bytes: a stream writer over
// a C runtime FILE.
// Two constructors: one over stdout or stderr, which it does not own (82CFB608, ??0hkStdioStreamWriter@@QAA@H@Z),
// and one that opens a file "wb" and owns it (82CFB670, which keeps its fn_ name). The destructor (82CFB6D8)
// closes an owned file and clears the handle.
// The vtable (??_7hkStdioStreamWriter@@6B@, 10 slots) gives the overrides, which keep their fn_ names: isOk
// 82CFB598 (the handle is not null), write 82CFB4F8, flush 82CFB580, seekTellSupported 82CFB5C0, seek 82CFB5D0,
// tell 82CFB600, and one slot more than hkStreamWriter.h declares (82CFB5B0, returns true; its name is not
// known). The member names are invented.
#ifndef HAVOK_HKSTDIOSTREAMWRITER_H
#define HAVOK_HKSTDIOSTREAMWRITER_H

#include "havok/hkStreamWriter.h"

class hkStdioStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkStdioStreamWriter(int stdStream);   // 2: stderr, anything else: stdout
    hkStdioStreamWriter(const char *nameIn);
    virtual ~hkStdioStreamWriter();
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
    virtual void flush();
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;
    virtual hkBool slot24() const;

protected:
    void *m_handle;   // +0x8: the FILE
    hkBool m_owns;    // +0xC: close the file in the destructor
};

#endif
