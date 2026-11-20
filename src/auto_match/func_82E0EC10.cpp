// Writes the members of an object that the given class does not know into a
// buffer: an hkBufferedStreamWriter over the memory, then for each member of
// the class that fn_82CEAFA8 (hkClass::getMemberByName on the other class) does
// not find, seek to the member's offset (hkBufferedStreamWriter::seek, called
// directly because the writer's type is known) and write it (fn_82CEB2D8).
// Part of Havok's serialization utilities.
#include "havok/hkBufferedStreamWriter.h"
#include "havok/hkClass.h"

extern "C" {
const hkClassMember *fn_82CEAFA8(const hkClass *klass, const char *name);  // hkClass::getMemberByName
void fn_82CEB2D8(const hkClass *cls, int i, hkStreamWriter *w);
}

extern "C" void fn_82E0EC10(void *mem, const hkClass *other, const hkClass *cls)
{
    hkBufferedStreamWriter writer(mem, cls->getObjectSize(), false);
    for (int i = 0; i < cls->getNumMembers(); i++) {
        const hkClassMember *m = &cls->getMember(i);
        if (fn_82CEAFA8(other, m->m_name) == 0) {
            writer.seek(m->m_offset, hkStreamWriter::STREAM_SET);
            fn_82CEB2D8(cls, i, &writer);
        }
    }
}
