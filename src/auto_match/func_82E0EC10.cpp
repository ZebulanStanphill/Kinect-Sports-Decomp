// Writes the members of an object that the given registry does not know into a
// buffer: an hkBufferedStreamWriter over the memory, then for each member of
// the class that fn_82CEAFA8 does not find, seek to the member's offset
// (hkBufferedStreamWriter::seek, called directly because the writer's type
// is known) and write it (fn_82CEB2D8). Part of Havok's
// serialization utilities. It needs C++ because hkBufferedStreamWriter's
// constructor and destructor are renamed; the hkClass functions keep their
// fn_ names.
#include "havok/hkBufferedStreamWriter.h"

class hkClassMember {
public:
    const char *m_name;   // +0x0
    char pad04[0xE];
    hkUint16 m_offset;    // +0x12
};

extern "C" {
int fn_82CEB1A8(const hkClass *cls);                              // hkClass::getObjectSize
int fn_82CEAE80(const hkClass *cls);                              // hkClass::getNumMembers
const hkClassMember *fn_82CEAEA8(const hkClass *cls, int i);      // hkClass::getMember
const void *fn_82CEAFA8(const void *registry, const char *name);
void fn_82CEB2D8(const hkClass *cls, int i, hkStreamWriter *w);
}

extern "C" void fn_82E0EC10(void *mem, const void *registry, const hkClass *cls)
{
    hkBufferedStreamWriter writer(mem, fn_82CEB1A8(cls), false);
    for (int i = 0; i < fn_82CEAE80(cls); i++) {
        const hkClassMember *m = fn_82CEAEA8(cls, i);
        if (fn_82CEAFA8(registry, m->m_name) == 0) {
            writer.seek(m->m_offset, hkStreamWriter::STREAM_SET);
            fn_82CEB2D8(cls, i, &writer);
        }
    }
}
