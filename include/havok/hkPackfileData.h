// hkPackfileData (Common/Serialize/Packfile/hkPackfileData.h), 0x64 bytes (hkBinaryPackfileReader's
// BinaryPackfileData, which adds nothing, is allocated with that size by 82E0B980): the hkResource that owns
// a loaded packfile's memory and objects. The members and their order are those the constructor
// (??0hkPackfileData@@QAA@XZ, 82E16A90) fills in; the names are Havok's. m_destructorsEnabled is a word:
// the constructor stores 1 with stw and callDestructors (82E16580) tests the word. callDestructors looks each
// tracked object's class name up in m_trackedTypes and runs the hkTypeInfo's cleanup function on it.
// The constructor and destructor (??1hkPackfileData@@UAA@XZ, 82E16B88) are out of line; the other virtual
// functions are C units under fn_ names: calcContentStatistics 82E16408, getName 823AA970 (shared),
// callDestructors 82E16580, getImportsExports 82E16698, getContentsPointer 82E16928, getContentsTypeName
// 82E16288; the scalar deleting destructor is fn_82E16DC0.
#ifndef HAVOK_HKPACKFILEDATA_H
#define HAVOK_HKPACKFILEDATA_H

#include "havok/hkClassNameRegistry.h"
#include "havok/hkResource.h"

class hkPackfileData;
class hkTypeInfo;

extern "C" void fn_82E16580(hkPackfileData *self);   // hkPackfileData::callDestructors

class hkPackfileData : public hkResource {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    // An allocation that is freed with hkDeallocateChunk (by the destructor).
    struct Chunk {
        void *pointer;    // +0x0
        int numBytes;     // +0x4
        int alignment;    // +0x8
    };
    hkPackfileData();
    virtual ~hkPackfileData();

    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;
    virtual const char *getName() const;
    virtual void callDestructors();
    virtual void getImportsExports(hkArray<Import> &impOut, hkArray<Export> &expOut) const;
    virtual void *getContentsPointer(const char *typeName, const hkTypeInfoRegistry *typeRegistry) const;
    virtual const char *getContentsTypeName() const;

    void *m_topLevelObject;                                          // +0x8
    char *m_name;                                                    // +0xC
    hkPointerMap<void *, const char *> m_trackedObjects;             // +0x10 object -> class name
    hkStringMap<const hkTypeInfo *> m_trackedTypes;                  // +0x1C class name -> type info
    hkRefPtr<const hkClassNameRegistry> m_packfileClassRegistry;     // +0x2C
    hkBool32 m_destructorsEnabled;                                   // +0x30
    hkArray<void *> m_memory;                                        // +0x34 freed with hkDeallocate
    hkArray<Chunk> m_chunks;                                         // +0x40
    hkArray<Export> m_exports;                                       // +0x4C
    hkArray<Import> m_imports;                                       // +0x58
};

#endif
