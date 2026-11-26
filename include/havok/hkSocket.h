// hkSocket (Common/Base/System/Io/Socket/hkSocket.h), 0x20 bytes, with its nested ReaderAdapter and
// WriterAdapter (0xC bytes each): a stream reader and a stream writer over the socket, held as members.
// The layout is the constructor's (82CFB988): the adapters start with a null socket, the constructor then
// points both at itself and, the first time, runs the platform's network initialisation.
// The vtable (??_7hkSocket@@6B@, 11 slots) has eight slots after hkReferencedObject's, all pure except the
// seventh (82D7EA10, which returns 1). Their places come from hkBsdSocket's vtable: isOk (82D058C8 tests the
// handle), close (82D058E8), read (82D05988 calls recv), write (82D059F0 calls send), connect (82D05BD0),
// listen (82D05DA0 calls bind and listen) and pollForNewClient (82D05F78 calls accept). The adapters forward
// to isOk (+0xC), read (+0x14) and write (+0x18). The names are Havok's; the name of the seventh slot is not
// known. The destructor is the implicit one (??_GhkSocket@@UAAPAXI@Z at 82CFBA20 destroys the two adapters).
#ifndef HAVOK_HKSOCKET_H
#define HAVOK_HKSOCKET_H

#include "havok/hkBase.h"
#include "havok/hkStreamReader.h"
#include "havok/hkStreamWriter.h"

class hkSocket : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);

    // The two adapters' functions keep their fn_ names: isOk 82CFB850, read 82CFB7E0 (loops until nbytes are
    // read or the socket returns 0); the writer's are 82CFB900 and 82CFB890.
    class ReaderAdapter : public hkStreamReader {
    public:
        ReaderAdapter() : m_socket(HK_NULL) {}
        virtual hkBool isOk() const;
        virtual int read(void *buf, int nbytes);

        hkSocket *m_socket;   // +0x8
    };
    class WriterAdapter : public hkStreamWriter {
    public:
        WriterAdapter() : m_socket(HK_NULL) {}
        virtual hkBool isOk() const;
        virtual int write(const void *buf, int nbytes);

        hkSocket *m_socket;   // +0x8
    };

    hkSocket();
    virtual hkBool isOk() const = 0;                                      // +0xC
    virtual void close() = 0;                                             // +0x10
    virtual int read(void *buf, int nbytes) = 0;                          // +0x14
    virtual int write(const void *buf, int nbytes) = 0;                   // +0x18
    virtual hkResult connect(const char *servername, int portNumber) = 0;   // +0x1C
    virtual hkResult listen(int port) = 0;                                // +0x20
    virtual int slot24();                                                 // +0x24: name unknown; 82D7EA10 returns 1
    virtual hkSocket *pollForNewClient() = 0;                             // +0x28

    ReaderAdapter m_reader;   // +0x8
    WriterAdapter m_writer;   // +0x14
};

#endif
