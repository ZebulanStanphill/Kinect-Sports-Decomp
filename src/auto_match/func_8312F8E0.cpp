// Dynamic initializer of hkpShapeCollectionClass (Havok reflection):
// constructs the static hkClass with hkClass::hkClass (fn_82CEB3D8).
//
// The class's enum table and its defaults struct are static data of this
// translation unit (as in Havok's generated *Class.cpp files), laid out one
// after the other in .rdata: the compiler then forms the defaults address
// from the enums address (`addi r5, r9, 0x14`) and allocates registers as
// the original does. With extern data (one symbol plus an offset) the
// arguments go through other registers and numMembers through r31.
// The defaults struct is named LAB_<address> so that objdiff treats it as a
// label inside lbl_821382C8 (the decomp's 0x20-byte object covering both),
// as it does for the original's lbl_821382C8+0x14 reference.
#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;

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
extern hkClass lbl_8323C614;                            // hkpShapeCollectionClass
extern const hkClass lbl_8323C5E4;                      // hkpShapeClass
extern const hkInternalClassEnumItem lbl_82138288[];    // CollectionType items
extern const hkClassMember lbl_831818D4[];              // declared members
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

// hkpShapeCollectionEnums (0x821382C8)
static const hkInternalClassEnum lbl_821382C8[] = {
    { "CollectionType", lbl_82138288, 8, 0, 0 },
};

// hkpShapeCollection_Default (0x821382DC)
struct hkpShapeCollection_DefaultStruct {
    int s_defaultOffsets[2];
    hkUint8 m_collectionType;   // hkEnum<CollectionType, hkUint8>
};
static const hkpShapeCollection_DefaultStruct LAB_821382DC = {
    { -1, 0x8 },
    3   // COLLECTION_USER
};

// One implemented interface (hkpShapeContainer), with a null interface list.
extern "C" void fn_8312F8E0()
{
    fn_82CEB3D8(&lbl_8323C614, "hkpShapeCollection", &lbl_8323C5E4, 0x18,
        0, 1, reinterpret_cast<const hkClassEnum *>(lbl_821382C8), 1, lbl_831818D4, 2, &LAB_821382DC, 0, 0, 0);
}
