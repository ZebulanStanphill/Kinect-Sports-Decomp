// ~hkPackfileReader (non-deleting destructor).
#include "havok/hkBase.h"

extern "C" {
void fn_82CEA4B8(void *self, hkMemoryAllocator *alloc);
void fn_82BA02A8(void *self);
}

// A Havok map member (+0x8, 0xc bytes): its destructor frees the storage
// through the heap allocator, then runs an empty out-of-line base destructor.
struct hkMapMember {
    void *m_elem;
    int m_numElems;
    int m_hashMod;
    ~hkMapMember()
    {
        fn_82CEA4B8(this, &hkMemoryRouter::getInstance().heap());
        fn_82BA02A8(this);
    }
};

class hkPackfileReader : public hkReferencedObject {
public:
    HK_FORCE_INLINE virtual ~hkPackfileReader() { hkDeallocate<char>(m_contentsVersion); }

    hkMapMember m_map;
    char *m_contentsVersion;
};

extern "C" void fn_82E12A48(hkPackfileReader *self)
{
    self->hkPackfileReader::~hkPackfileReader();
}
