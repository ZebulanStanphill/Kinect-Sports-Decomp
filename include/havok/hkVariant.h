// hkVariant (Common/Base/Reflection/hkVariant.h? the game has no reflection data for it), 8 bytes: an object
// and the hkClass that describes it. hkBinaryPackfileReader::getLoadedObjects returns an
// hkArray<hkVariant> (its mangled name, ?getLoadedObjects@hkBinaryPackfileReader@@UBAABV?$hkArray@UhkVariant@@...,
// gives a struct), whose elements the units fill as (object, class) pairs.
#ifndef HAVOK_HKVARIANT_H
#define HAVOK_HKVARIANT_H

class hkClass;

struct hkVariant {
    void *m_object;           // +0x0
    const hkClass *m_class;   // +0x4
};

#endif
