// hkSocket scalar deleting destructor: implicit destructor (the two adapter members) and the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkStreamWriter.h"
#include "havok/hkStreamReader.h"

// hkSocket (Common/Base/System/Io/Socket/hkSocket.h): its reader and writer
// adapters are members, so its destructor ends with their (implicit)
// destructors storing hkBaseObject's vtable at +0x14 and +0x8.
class hkSocket : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    class ReaderAdapter : public hkStreamReader {
    public:
        ReaderAdapter() {}
        virtual hkBool isOk() const;
        virtual int read(void *buf, int nbytes);
        hkSocket *m_socket;   // +0x8
    };
    class WriterAdapter : public hkStreamWriter {
    public:
        WriterAdapter() {}
        virtual hkBool isOk() const;
        virtual int write(const void *buf, int nbytes);
        hkSocket *m_socket;   // +0x8
    };
    hkSocket() {}

    ReaderAdapter m_reader;   // +0x8
    WriterAdapter m_writer;   // +0x14
};

void emitVtable_82CFBA20(void *p) { new (p) hkSocket; }
