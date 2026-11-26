// hkResource (Common/Serialize/Resource/hkResource.h), 8 bytes: the interface of a loaded file's contents.
// The game has no vtable of its own for it (it is abstract and only constructed inline under its
// subclasses); its five slots after hkReferencedObject's are placed by ??_7hkPackfileData@@6B@ (8214B440),
// whose functions agree with the names, which are Havok's: getName (823AA970 returns the name at +0xC),
// callDestructors (82E16580), getImportsExports (82E16698 copies hkPackfileData's import and export
// arrays), getContentsPointer (82E16928) and getContentsTypeName (82E16288 looks the top-level object
// up in the tracked objects). The Import and Export layouts are hkPackfileData's 8-byte array elements.
#ifndef HAVOK_HKRESOURCE_H
#define HAVOK_HKRESOURCE_H

#include "havok/hkBase.h"

class hkTypeInfoRegistry;

class hkResource : public hkReferencedObject {
public:
    struct Export {
        const char *name;   // +0x0
        void *data;         // +0x4
    };
    struct Import {
        const char *name;   // +0x0
        void **location;    // +0x4
    };

    virtual const char *getName() const;                                                       // +0xC
    virtual void callDestructors();                                                            // +0x10
    virtual void getImportsExports(hkArray<Import> &impOut, hkArray<Export> &expOut) const;    // +0x14
    virtual void *getContentsPointer(const char *typeName, const hkTypeInfoRegistry *typeRegistry) const;   // +0x18
    virtual const char *getContentsTypeName() const;                                           // +0x1C
};

#endif
