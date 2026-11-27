// hkBinaryPackfileReader::getUpdateTracker() const (Common/Serialize/Packfile/Binary/hkBinaryPackfileReader.cpp).
// Creates m_tracker once: a hkContentsUpdateTracker over the loaded objects (its constructor keeps its fn_
// name, fn_82E0DE40), registers every section's global fixups (objectPointedBy) and virtual fixups
// (addFinish) with it, sets the top level object, then walks the contents with the anonymous-namespace
// listeners PackfilePointersMapListener (version 1 files) and PackfileCstringListener (versions up to 6).
#include "havok/hkBinaryPackfileReader.h"
#include "havok/hkPackfileObjectUpdateTracker.h"
#include "havok/hkObjectInspector.h"

class hkContentsUpdateTracker : public hkPackfileObjectUpdateTracker {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    char m_more[0x40 - 0x38];
};

extern "C" {
const hkClassNameRegistry *fn_82E0BA38(const hkBinaryPackfileReader *self);   // getClassNameRegistry
const void *fn_82E0A0F8(const hkBinaryPackfileReader *self);                  // getOriginalContents
hkContentsUpdateTracker *fn_82E0DE40(hkContentsUpdateTracker *self, void *packfileData,
                                     const hkArray<hkVariant> &objects, void *owner);   // hkContentsUpdateTracker ctor
void fn_82E129F0(const hkClass *klass, int fileVersion, const char *contentsVersion, void *updateFlags);
}

namespace {

class PackfilePointersMapListener : public hkObjectInspector::ObjectListener {
public:
    PackfilePointersMapListener(hkPackfileObjectUpdateTracker *tracker, const hkClassNameRegistry *classReg,
                                int fileVersion, const char *contentsVersion, void *updateFlags)
        : m_tracker(tracker), m_classReg(classReg), m_fileVersion(fileVersion), m_contentsVersion(contentsVersion),
          m_updateFlags(updateFlags)
    {
    }
    virtual int objectCallback(const void *objP, const hkClass &klass, void *p);

    hkPackfileObjectUpdateTracker *m_tracker;   // +0x4
    const hkClassNameRegistry *m_classReg;      // +0x8
    int m_fileVersion;                          // +0xc
    const char *m_contentsVersion;              // +0x10
    void *m_updateFlags;                        // +0x14
    hkPointerMap<const void *, int> m_seen;     // +0x18
};

class PackfileCstringListener : public hkObjectInspector::ObjectListener {
public:
    PackfileCstringListener(hkPackfileObjectUpdateTracker *tracker, const hkClassNameRegistry *classReg)
        : m_tracker(tracker), m_classReg(classReg)
    {
    }
    virtual int objectCallback(const void *objP, const hkClass &klass, void *p);

    hkPackfileObjectUpdateTracker *m_tracker;   // +0x4
    const hkClassNameRegistry *m_classReg;      // +0x8
    hkPointerMap<const void *, int> m_seen;     // +0xc
};

}  // namespace

// The contents' class name as the header records it, inlined here (not the virtual getContentsClassName,
// 82E0A1C0, which also consults the update tracker).
static HK_FORCE_INLINE const char *headerContentsClassName(const hkBinaryPackfileReader *reader)
{
    int sectionIndex = reader->m_header->m_contentsClassNameSectionIndex;
    int offset = reader->m_header->m_contentsClassNameSectionOffset;
    if (sectionIndex >= 0 && offset >= 0)
        return (const char *)reader->getSectionDataByIndex(sectionIndex, offset);
    return HK_NULL;
}

hkObjectUpdateTracker &hkBinaryPackfileReader::getUpdateTracker() const
{
    if (m_tracker == HK_NULL) {
        hkRefPtr<const hkClassNameRegistry> classReg(fn_82E0BA38(this));
        void *p = hkContentsUpdateTracker::operator new(sizeof(hkContentsUpdateTracker));
        m_tracker = fn_82E0DE40((hkContentsUpdateTracker *)p, m_packfileData, getLoadedObjects(),
                                      (void *)&m_packfileClassRegistry);
        hkBool isVersion1 = m_header->m_fileVersion == 1;
        for (int sectionIndex = 0; sectionIndex < m_header->m_numSections; ++sectionIndex) {
            if (m_sectionData[sectionIndex]) {
                const hkPackfileSectionHeader &section = m_sections[sectionIndex];
                char *dataBegin = (char *)m_sectionData[sectionIndex];
                if (!isVersion1) {
                    const int *globalFixups = (const int *)(dataBegin + section.m_globalFixupsOffset);
                    for (int i = 0; i < section.getGlobalSize() / int(sizeof(int)); i += 3) {
                        int srcOff = globalFixups[i];
                        if (srcOff == -1)
                            continue;
                        int dstSec = globalFixups[i + 1];
                        int dstOff = globalFixups[i + 2];
                        void *dst = getSectionDataByIndex(dstSec, dstOff);
                        m_tracker->objectPointedBy(dst, dataBegin + srcOff);
                    }
                }
                const int *virtualFixups = (const int *)(dataBegin + section.m_virtualFixupsOffset);
                for (int i = 0; i < section.getFinishSize() / int(sizeof(int)); i += 3) {
                    int srcOff = virtualFixups[i];
                    if (srcOff == -1)
                        continue;
                    int dstSec = virtualFixups[i + 1];
                    int dstOff = virtualFixups[i + 2];
                    void *obj = getSectionDataByIndex(sectionIndex, srcOff);
                    const char *className = (const char *)getSectionDataByIndex(dstSec, dstOff);
                    m_tracker->addFinish(obj, className);
                }
            }
        }
        m_tracker->setTopLevelObject((void *)fn_82E0A0F8(this), headerContentsClassName(this));
        if (isVersion1) {
            PackfilePointersMapListener listener(m_tracker, classReg, m_header->m_fileVersion,
                                                 getContentsVersion(), (void *)&m_updateFlagFromClass);
            const hkClass *klass = classReg->getClassByName(headerContentsClassName(this));
            fn_82E129F0(klass, m_header->m_fileVersion, getContentsVersion(),
                        (void *)&m_updateFlagFromClass);
            fn_82E17B38(m_tracker->m_topLevelObject, klass, &listener);
        }
        if (m_header->m_fileVersion <= 6) {
            PackfileCstringListener listener(m_tracker, classReg);
            fn_82E17B38(m_tracker->m_topLevelObject, classReg->getClassByName(headerContentsClassName(this)),
                        &listener);
        }
    }
    return *m_tracker;
}
