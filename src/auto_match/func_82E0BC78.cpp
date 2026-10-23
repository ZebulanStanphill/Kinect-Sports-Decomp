// hkBinaryPackfileReader::getLoadedObjects() const (Common/Serialize/Packfile/Binary/hkBinaryPackfileReader.cpp),
// slot 7 of ??_7hkBinaryPackfileReader@@6B@. Builds m_loadedObjects once: collects the objects named by
// every section's virtual fixups into a pointer map, then walks the contents with a
// PackfileObjectsCollector. That listener lives in an anonymous namespace of the original file
// (?A0x11ff29d5), whose mangled name a unit cannot reproduce: it is declared at global scope here and
// the rename map names the original's vtable ??_7PackfileObjectsCollector@@6B@ (as func_82E0EBC0 does
// for PackfileObjectCopier).
// Notes: fn_82E09E40/fn_82E09DA8 return a C++ bool (hkBool would come back through a hidden pointer);
// the fixup's section and offset are read into locals after the -1 test (inline reads anchor the
// strength-reduced pointer at the wrong element); getContentsClassName() reads both header fields first.
#include "havok/hkBase.h"

extern "C" {
void fn_82CEA160(void *self, hkMemoryAllocator *alloc, hkUlong key, hkUlong val);   // hkMapBase<hkUlong, hkUlong>::insert
void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqCapacity, int sizeElem);   // hkArrayUtil::_reserve
}

struct hkVariant {
    void *m_object;
    const hkClass *m_class;
};

template <typename T>
class hkArrayA : public hkArray<T> {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ARRAY, hkArrayA);
    HK_FORCE_INLINE hkArrayA() {}
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &a, int n)
    {
        const int capacity = this->getCapacity();
        if (capacity < n) {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            fn_82CE6310(&a, this, newSize, sizeof(T));
        }
    }
    HK_FORCE_INLINE void reserve(int n) { _reserve(hkContainerHeapAllocator::get(this), n); }
};

template <typename K, typename V>
class hkPointerMapX : public hkPointerMap<K, V> {
public:
    HK_FORCE_INLINE hkPointerMapX() {}
    HK_FORCE_INLINE void insert(K key, V val)
    {
        fn_82CEA160(&this->m_map, &hkContainerHeapAllocator::get(this), (hkUlong)key, (hkUlong)val);
    }
    HK_FORCE_INLINE int getSize() const { return this->m_map.m_numElems & 0x7fffffff; }
};

class hkClassNameRegistry : public hkReferencedObject {
public:
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
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

extern "C" {
void fn_82E17B38(const void *object, const hkClass *klass, hkObjectInspector::ObjectListener *listener);   // hkObjectInspector::walkPointers
bool fn_82E09E40(const char *version);
bool fn_82E09DA8(const hkClass *klass);
}

class PackfileObjectsCollector : public hkObjectInspector::ObjectListener {
public:
    PackfileObjectsCollector(hkArray<hkVariant> &objects, const hkPointerMapX<const void *, const hkClass *> &tracked,
                             int fileVersion, const char *contentsVersion, void *updateFlags)
        : m_objects(objects), m_trackedObjects(tracked), m_fileVersion(fileVersion), m_contentsVersion(contentsVersion),
          m_updateFlags(updateFlags)
    {
    }
    virtual int objectCallback(const void *objP, const hkClass &klass, void *p);

    hkArray<hkVariant> &m_objects;                                       // +0x4
    const hkPointerMapX<const void *, const hkClass *> &m_trackedObjects; // +0x8
    hkPointerMap<const void *, int> m_seen;                              // +0xc
    int m_fileVersion;                                                    // +0x18
    const char *m_contentsVersion;                                        // +0x1c
    void *m_updateFlags;                                                  // +0x20
};

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

class hkBinaryPackfileReader;
extern "C" {
const hkClassNameRegistry *fn_82E0BA38(const hkBinaryPackfileReader *self);   // getClassNameRegistry
const void *fn_82E0A0F8(const hkBinaryPackfileReader *self);                  // getOriginalContents
}

class hkBinaryPackfileReader : public hkPackfileReader {
public:
    virtual const hkArray<hkVariant> &getLoadedObjects() const;
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
    mutable hkArrayA<hkVariant> *m_loadedObjects;  // +0x74
};

const hkArray<hkVariant> &hkBinaryPackfileReader::getLoadedObjects() const
{
    if (m_loadedObjects == HK_NULL) {
        const hkClassNameRegistry *classReg = fn_82E0BA38(this);
        int typesSectionIndex = -1;
        if (fn_82E09E40(getContentsVersion()))
            typesSectionIndex = getSectionIndex("__types__");
        hkPointerMapX<const void *, const hkClass *> trackedObjects;
        for (int sectionIndex = 0; sectionIndex < m_header->m_numSections; ++sectionIndex) {
            if (m_sectionData[sectionIndex]) {
                const hkPackfileSectionHeader &section = m_sections[sectionIndex];
                char *dataBegin = (char *)m_sectionData[sectionIndex];
                const int *virtualFixups = (const int *)(dataBegin + section.m_virtualFixupsOffset);
                for (int i = 0; i < section.getVirtualFixupsSize() / int(sizeof(int)); i += 3) {
                    int srcOff = virtualFixups[i];
                    if (srcOff == -1)
                        continue;
                    int dstSec = virtualFixups[i + 1];
                    int dstOff = virtualFixups[i + 2];
                    const char *className = (const char *)getSectionDataByIndex(dstSec, dstOff);
                    const hkClass *klass = classReg->getClassByName(className);
                    if (typesSectionIndex != i && fn_82E09DA8(klass))
                        trackedObjects.insert(dataBegin + srcOff, klass);
                }
            }
        }
        m_loadedObjects = new hkArrayA<hkVariant>();
        PackfileObjectsCollector collector(*m_loadedObjects, trackedObjects, m_header->m_fileVersion, getContentsVersion(),
                                           (void *)&m_updateFlagFromClass);
        m_loadedObjects->reserve(trackedObjects.getSize());
        fn_82E17B38(fn_82E0A0F8(this), classReg->getClassByName(getContentsClassName()), &collector);
    }
    return *m_loadedObjects;
}
