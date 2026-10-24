// fn_8312F328: the dynamic initializer of hkpBvTreeShapeClass (hkpBvTreeShapeClass.cpp, Havok's generated
// reflection data): hkClass::hkClass (fn_82CEB3D8, which keeps its fn_ name) on the global hkClass lbl_8323C3D4.
//
// The enum list (lbl_82137C70) and hkpBvTreeShape_Default (right after it, at +0x14) are static data of that
// file, so the compiler addresses the defaults from the enum list's address (addi r5, r9, 0x14). It does that
// after register allocation: with an extern lbl_82137C70 + 0x14 (or one object holding both) it combines the
// addresses earlier and allocates other registers. So both are defined here as static objects, laid out as in
// the game. The defaults' name starts with LAB_ only so that objdiff's pooled-data guess reads
// lbl_82137C70 + 0x14 as lbl_82137C70 (as for the original object, where it is external); the code is the same
// under any name. Havok code: /O2 (flag file).
#include "havok/hkBase.h"

class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;

// hkInternalClassEnumItem / hkInternalClassEnum (Common/Base/Reflection/hkInternalClassMember.h)
struct hkInternalClassEnumItem {
    int m_value;
    const char *m_name;
};
struct hkInternalClassEnum {
    const char *m_name;
    const hkInternalClassEnumItem *m_items;
    int m_numItems;
    const hkCustomAttributes *m_attributes;
    hkUint32 m_flags;
};

extern "C" {
extern hkClass lbl_8323C3D4;                          // hkpBvTreeShapeClass (constructed here)
extern const hkClass lbl_8323C5E4;                    // hkpShapeClass (the parent)
extern const hkClassMember lbl_83181764[];            // hkpBvTreeShapeClass_Members (1 member)
extern const hkInternalClassEnumItem lbl_82137C50[];  // hkpBvTreeShapeBvTreeTypeEnumItems (4 items)
// hkClass::hkClass(className, parentClass, objectSizeInBytes, implementedInterfaces, numImplementedInterfaces,
//     declaredEnums, numDeclaredEnums, declaredMembers, numDeclaredMembers, defaults, attributes, flags, version)
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

// hkpBvTreeShapeEnums
static const hkInternalClassEnum lbl_82137C70[] = {
    { "BvTreeType", lbl_82137C50, 4, 0, 0 }
};

// hkpBvTreeShape_Default (+0x14): member 0, m_bvTreeType, defaults to BVTREE_USER.
struct hkpBvTreeShape_DefaultStruct {
    int s_defaultOffsets[1];
    hkUint8 m_bvTreeType;
};
static const hkpBvTreeShape_DefaultStruct LAB_82137C84 = { { 4 }, 2 };

extern "C" void fn_8312F328()
{
    fn_82CEB3D8(&lbl_8323C3D4, "hkpBvTreeShape", &lbl_8323C5E4, 0x14, 0, 0,
        reinterpret_cast<const hkClassEnum *>(lbl_82137C70), 1, lbl_83181764, 1, &LAB_82137C84, 0, 0, 0);
}
