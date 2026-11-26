// hkArrayStreamWriter (Common/Base/System/Io/Writer/Array/hkArrayStreamWriter.h),
// 0x14 bytes: writes into an hkArray<char> and keeps it null terminated.
// Its vtable (??_7hkArrayStreamWriter@@6B@, ten slots) ends with clear() at
// +0x24, after the six slots of hkStreamWriter.
#ifndef HAVOK_HKARRAYSTREAMWRITER_H
#define HAVOK_HKARRAYSTREAMWRITER_H

#include "havok/hkStreamWriter.h"

extern "C" {
void fn_82CEE3C0(void *self);   // hkArrayStreamWriter::nullTerminate
// The scalar deleting destructor the compiler generates for `delete` on an
// hkArray<char> (out of line, non-virtual). It keeps its fn_ name because a
// Matching C unit defines it.
void *fn_82CEE440(hkArrayBase<char> *arr, unsigned int flags);
}

class hkArrayStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum ArrayOwnership { ARRAY_TAKE, ARRAY_BORROW };
    hkArrayStreamWriter(hkArrayBase<char> *arr, ArrayOwnership o)
        : m_arr(arr), m_offset(arr->getSize()), m_ownerShip(o)
    {
        nullTerminate();
    }
    virtual ~hkArrayStreamWriter()
    {
        if (m_ownerShip == ARRAY_TAKE && m_arr)
            fn_82CEE440(m_arr, 1);   // delete m_arr;
    }
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;
    virtual void clear();                                 // +0x24
    void nullTerminate() { fn_82CEE3C0(this); }

    hkArrayBase<char> *m_arr;    // +0x8
    int m_offset;                // +0xC
    ArrayOwnership m_ownerShip;  // +0x10
};

#endif
