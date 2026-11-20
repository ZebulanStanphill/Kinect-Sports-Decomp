#ifndef HAVOK_HKCLASSNAMEREGISTRY_H
#define HAVOK_HKCLASSNAMEREGISTRY_H

#include "havok/hkBase.h"

class hkClassNameRegistry : public hkReferencedObject {
public:
    hkClassNameRegistry() {}
    virtual const char *getName() const;                                   // +0x0C
    virtual const hkClass *getClassByName(const char *className) const;    // +0x10
    virtual void getClasses(hkArray<const hkClass *> &classesOut) const;                       // +0x14
};

#endif
