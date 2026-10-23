// hkArrayStreamWriter scalar deleting destructor, generated from the destructor below (Common/Base/System/Io/Writer/Array/hkArrayStreamWriter.h). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

// The scalar deleting destructor the compiler generates for `delete` on an
// hkArray<char> (out of line, non-virtual). It keeps its fn_ name because it is
// defined by a Matching C unit, so `delete m_arr` is written as the call it
// compiles to.
extern "C" void *fn_82CEE440(hkArrayBase<char> *arr, unsigned int flags);

class hkStreamWriter : public hkReferencedObject {
public:
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
};

class hkArrayStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum ArrayOwnership { ARRAY_TAKE, ARRAY_BORROW };
    hkArrayStreamWriter(hkArrayBase<char> *arr, ArrayOwnership o) : m_arr(arr), m_offset(0), m_ownerShip(o) {}
    virtual ~hkArrayStreamWriter()
    {
        if (m_ownerShip == ARRAY_TAKE && m_arr)
            fn_82CEE440(m_arr, 1);   // delete m_arr;
    }

    hkArrayBase<char> *m_arr;    // +0x8
    int m_offset;                // +0xC
    ArrayOwnership m_ownerShip;  // +0x10
};

void emitVtable_82CEE4D8(void *p) { new (p) hkArrayStreamWriter(HK_NULL, hkArrayStreamWriter::ARRAY_BORROW); }
