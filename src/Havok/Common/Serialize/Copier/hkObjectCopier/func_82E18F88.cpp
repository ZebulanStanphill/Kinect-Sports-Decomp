// hkObjectCopier helper (Common/Serialize/Copier/hkObjectCopier.cpp): writes a
// class name into the archive at a 2-aligned offset and records it.
#include "havok/hkOArchive.h"
#include "havok/hkString.h"

extern "C" {
void fn_82E182B0(hkStreamWriter *w, int align);         // writePadding
void fn_82E19C10(unsigned int a, unsigned int b, int offset);
}

extern "C" unsigned int fn_82E18F88(const char *name, unsigned int param_2, hkOArchive *archive,
                                    unsigned int param_4)
{
    fn_82E182B0(archive->getStreamWriter(), 2);
    int offset = archive->getStreamWriter()->tell();
    fn_82E19C10(param_4, param_2, offset);
    archive->writeRaw(name, hkString::strLen(name) + 1);
    return 0;
}
