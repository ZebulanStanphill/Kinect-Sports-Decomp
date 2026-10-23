// hkBinaryPackfileReader::getUpdateTracker() const (Common/Serialize/Packfile/Binary/hkBinaryPackfileReader.cpp).
// Creates m_tracker once: a hkContentsUpdateTracker over the loaded objects (its constructor keeps its fn_
// name, fn_82E0DE40), registers every section's global fixups (objectPointedBy) and virtual fixups
// (addFinish) with it, sets the top level object, then walks the contents with the anonymous-namespace
// listeners PackfilePointersMapListener (version 1 files) and PackfileCstringListener (versions up to 6).
#include "havok/hkBase.h"

struct hkVariant {
    void *m_object;
    const hkClass *m_class;
};

class hkClassNameRegistry : public hkReferencedObject {
public:
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
};

class hkObjectUpdateTracker : public hkReferencedObject {
public:
    virtual void addAllocation(void *p);
    virtual void addChunk(void *p, int n, int c);
    virtual void objectPointedBy(void *newObject, void *fromWhere);
    virtual void replaceObject(void *oldObject, void *newObject, const hkClass *newClass);
    virtual void addFinish(void *newObject, const char *className);
};

class hkPackfileObjectUpdateTracker : public hkObjectUpdateTracker {
public:
    HK_FORCE_INLINE void setTopLevelObject(void *topObject, const char *topClass);

    char m_members[0x34 - 0x8];
    void *m_topLevelObject;   // +0x34
};

class hkContentsUpdateTracker : public hkPackfileObjectUpdateTracker {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    char m_more[0x40 - 0x38];
};

class hkObjectInspector {
public:
    class ObjectListener {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~ObjectListener() {}
        virtual int objectCallback(const void *objP, const hkClass &klass, void *p) = 0;
    };
};

class hkBinaryPackfileReader;
extern "C" {
const hkClassNameRegistry *fn_82E0BA38(const hkBinaryPackfileReader *self);   // getClassNameRegistry
const void *fn_82E0A0F8(const hkBinaryPackfileReader *self);                  // getOriginalContents
hkContentsUpdateTracker *fn_82E0DE40(hkContentsUpdateTracker *self, void *packfileData,
                                     const hkArray<hkVariant> &objects, void *owner);   // hkContentsUpdateTracker ctor
void fn_82E16E40(hkPackfileObjectUpdateTracker *self, const void *topObject, const char *topClass);   // setTopLevelObject
void fn_82E17B38(const void *object, const hkClass *klass, hkObjectInspector::ObjectListener *listener);   // hkObjectInspector::walkPointers
void fn_82E129F0(const hkClass *klass, int fileVersion, const char *contentsVersion, void *updateFlags);
}

HK_FORCE_INLINE void hkPackfileObjectUpdateTracker::setTopLevelObject(void *topObject, const char *topClass)
{
    fn_82E16E40(this, topObject, topClass);
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

struct hkPackfileHeader {
    int m_magic[2];
    int m_userTag;
    int m_fileVersion;                       // +0xc
    unsigned char m_layoutRules[4];
    int m_numSections;                       // +0x14
    int m_contentsSectionIndex;              // +0x18
    int m_contentsSectionOffset;             // +0x1c
    int m_contentsClassNameSectionIndex;     // +0x20
    int m_contentsClassNameSectionOffset;    // +0x24
};

struct hkPackfileSectionHeader {
    char m_sectionTag[19];
    char m_nullByte;
    int m_absoluteDataStart;    // +0x14
    int m_localFixupsOffset;    // +0x18
    int m_globalFixupsOffset;   // +0x1c
    int m_virtualFixupsOffset;  // +0x20
    int m_exportsOffset;        // +0x24
    int m_importsOffset;        // +0x28
    int m_endOffset;            // +0x2c
    HK_FORCE_INLINE int getGlobalFixupsSize() const { return m_virtualFixupsOffset - m_globalFixupsOffset; }
    HK_FORCE_INLINE int getVirtualFixupsSize() const { return m_exportsOffset - m_virtualFixupsOffset; }
};

class hkPackfileReader : public hkReferencedObject {
public:
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual const hkArray<hkVariant> &getLoadedObjects() const;
    virtual void v8();
    virtual void v9();
    virtual const char *getContentsVersion() const;
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual int getSectionIndex(const char *sectionTag) const;
    virtual void *getSectionDataByIndex(int sectionIndex, int offset) const;

    hkPointerMap<const hkClass *, hkInt32> m_updateFlagFromClass;   // +0x8
    char *m_contentsVersion;                                       // +0x14
};

class hkBinaryPackfileReader : public hkPackfileReader {
public:
    HK_FORCE_INLINE const char *getContentsClassName() const
    {
        int sectionIndex = m_header->m_contentsClassNameSectionIndex;
        int offset = m_header->m_contentsClassNameSectionOffset;
        if (sectionIndex >= 0 && offset >= 0)
            return (const char *)getSectionDataByIndex(sectionIndex, offset);
        return HK_NULL;
    }

    void *m_packfileData;                          // +0x18
    hkPackfileHeader *m_header;                    // +0x1c
    hkPackfileSectionHeader *m_sections;           // +0x20
    void **m_sectionData;                          // +0x24 (hkInplaceArray<void *, 16>)
    char m_sectionDataRest[0x74 - 0x28];
    mutable hkArray<hkVariant> *m_loadedObjects;   // +0x74
    mutable hkPackfileObjectUpdateTracker *m_tracker;   // +0x78
    char m_owner[4];                               // +0x7c
};

extern "C" hkPackfileObjectUpdateTracker *fn_82E0CA00(const hkBinaryPackfileReader *self)
{
    if (self->m_tracker == HK_NULL) {
        hkRefPtr<const hkClassNameRegistry> classReg(fn_82E0BA38(self));
        void *p = hkContentsUpdateTracker::operator new(sizeof(hkContentsUpdateTracker));
        self->m_tracker = fn_82E0DE40((hkContentsUpdateTracker *)p, self->m_packfileData, self->getLoadedObjects(),
                                      (void *)self->m_owner);
        hkBool isVersion1 = self->m_header->m_fileVersion == 1;
        for (int sectionIndex = 0; sectionIndex < self->m_header->m_numSections; ++sectionIndex) {
            if (self->m_sectionData[sectionIndex]) {
                const hkPackfileSectionHeader &section = self->m_sections[sectionIndex];
                char *dataBegin = (char *)self->m_sectionData[sectionIndex];
                if (!isVersion1) {
                    const int *globalFixups = (const int *)(dataBegin + section.m_globalFixupsOffset);
                    for (int i = 0; i < section.getGlobalFixupsSize() / int(sizeof(int)); i += 3) {
                        int srcOff = globalFixups[i];
                        if (srcOff == -1)
                            continue;
                        int dstSec = globalFixups[i + 1];
                        int dstOff = globalFixups[i + 2];
                        void *dst = self->getSectionDataByIndex(dstSec, dstOff);
                        self->m_tracker->objectPointedBy(dst, dataBegin + srcOff);
                    }
                }
                const int *virtualFixups = (const int *)(dataBegin + section.m_virtualFixupsOffset);
                for (int i = 0; i < section.getVirtualFixupsSize() / int(sizeof(int)); i += 3) {
                    int srcOff = virtualFixups[i];
                    if (srcOff == -1)
                        continue;
                    int dstSec = virtualFixups[i + 1];
                    int dstOff = virtualFixups[i + 2];
                    void *obj = self->getSectionDataByIndex(sectionIndex, srcOff);
                    const char *className = (const char *)self->getSectionDataByIndex(dstSec, dstOff);
                    self->m_tracker->addFinish(obj, className);
                }
            }
        }
        self->m_tracker->setTopLevelObject((void *)fn_82E0A0F8(self), self->getContentsClassName());
        if (isVersion1) {
            PackfilePointersMapListener listener(self->m_tracker, classReg, self->m_header->m_fileVersion,
                                                 self->getContentsVersion(), (void *)&self->m_updateFlagFromClass);
            const hkClass *klass = classReg->getClassByName(self->getContentsClassName());
            fn_82E129F0(klass, self->m_header->m_fileVersion, self->getContentsVersion(),
                        (void *)&self->m_updateFlagFromClass);
            fn_82E17B38(self->m_tracker->m_topLevelObject, klass, &listener);
        }
        if (self->m_header->m_fileVersion <= 6) {
            PackfileCstringListener listener(self->m_tracker, classReg);
            fn_82E17B38(self->m_tracker->m_topLevelObject, classReg->getClassByName(self->getContentsClassName()),
                        &listener);
        }
    }
    return self->m_tracker;
}
