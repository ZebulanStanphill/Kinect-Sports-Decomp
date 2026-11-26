// hkObjectCopier::copyObject (Common/Serialize/Copier/hkObjectCopier.cpp; the
// same code serves PackfileObjectCopier, identical-code folding): saves the
// object body and its extras through an hkOArchive on the stack, padding the
// output to 16 bytes after each, and reports whether the archive is still ok.
// The copier's own helpers keep their fn_ names.
#include "havok/hkBase.h"

#include "havok/hkOArchive.h"

class hkRelocationInfo;
class hkObjectCopier;

extern "C" {
int fn_82E18720(hkObjectCopier *self, const void *dataIn, const hkClass &klassIn, hkOArchive &dataOut,
                const hkClass &klassOut);                                 // saveBody
void fn_82E182B0(hkStreamWriter *w, int align);                           // writePadding
void fn_82E19000(hkObjectCopier *self, const void *dataIn, const hkClass &klassIn, hkOArchive &dataOut,
                 const hkClass &klassOut, int objectStart, hkRelocationInfo &reloc, void *extra);   // saveExtras
}

class hkObjectCopier : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    virtual hkResult copyObject(const void *dataIn, const hkClass &klassIn, hkStreamWriter *dataOut,
                                const hkClass &klassOut, hkRelocationInfo &reloc);

    hkUint8 m_layouts[0xC];   // +0x8 (not needed here)
    hkBool m_byteSwap;        // +0x14
};

hkResult hkObjectCopier::copyObject(const void *dataIn, const hkClass &klassIn, hkStreamWriter *dataOut,
                                    const hkClass &klassOut, hkRelocationInfo &reloc)
{
    hkOArchive dataArchive(dataOut, m_byteSwap);
    int objectStart = fn_82E18720(this, dataIn, klassIn, dataArchive, klassOut);
    fn_82E182B0(dataOut, 16);
    fn_82E19000(this, dataIn, klassIn, dataArchive, klassOut, objectStart, reloc, HK_NULL);
    fn_82E182B0(dataOut, 16);
    return dataArchive.isOk() ? HK_SUCCESS : HK_FAILURE;
}
