// hkPackfileData::~hkPackfileData() (Common/Serialize/Packfile/hkPackfileData.cpp): the user-written body runs the
// destructors of the loaded objects (fn_82E16580, kept under its fn_ name), frees the allocations and chunks and
// the name, then the members are destroyed in reverse order and hkBaseObject's vtable is stored last.
#include "havok/hkPackfileData.h"

hkPackfileData::~hkPackfileData()
{
    // callDestructors(): a virtual call in a destructor binds statically, here to the C unit's fn_ name.
    fn_82E16580(this);
    for (int i = 0; i < m_memory.getSize(); ++i)
        hkDeallocate(m_memory[i]);
    for (int i = 0; i < m_chunks.getSize(); ++i)
        hkDeallocateChunk<char>(static_cast<char *>(m_chunks[i].pointer), m_chunks[i].numBytes, HK_MEMORY_CLASS_SERIALIZE);
    hkDeallocate(m_name);
}
