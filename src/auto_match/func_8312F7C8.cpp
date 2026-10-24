// Dynamic initializer of hkpSampledHeightFieldShapeClass (Havok reflection):
// constructs the static hkClass with hkClass::hkClass (fn_82CEB3D8).
//
// The class's enum table and its defaults struct are static data of this
// translation unit (as in Havok's generated *Class.cpp files), laid out one
// after the other in .rdata: the compiler then forms the defaults address
// from the enums address (`addi r5, r9, 0x14`) and allocates registers as
// the original does. With extern data (one symbol plus an offset) the
// arguments go through other registers and numMembers through r31.
// The defaults struct is named LAB_<address> so that objdiff treats it as a
// label inside lbl_821380C0 (the decomp's 0x3C-byte object covering both),
// as it does for the original's lbl_821380C0+0x14 reference.
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
extern hkClass lbl_8323C5B4;                            // hkpSampledHeightFieldShapeClass
extern const hkClass lbl_8323C4F4;                      // hkpHeightFieldShapeClass
extern const hkInternalClassEnumItem lbl_821380A0[];    // HeightFieldType items
extern const hkClassMember lbl_831817F8[];              // declared members
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

// hkpSampledHeightFieldShapeEnums (0x821380C0)
static const hkInternalClassEnum lbl_821380C0[] = {
    { "HeightFieldType", lbl_821380A0, 4, 0, 0 },
};

// hkpSampledHeightFieldShape_Default (0x821380D4)
struct hkpSampledHeightFieldShape_DefaultStruct {
    int s_defaultOffsets[9];
    hkUint8 m_heightfieldType;   // hkEnum<HeightFieldType, hkUint8>
};
static const hkpSampledHeightFieldShape_DefaultStruct LAB_821380D4 = {
    { -1, -1, -1, -1, 0x24, -1, -1, -1, -1 },
    2   // HEIGHTFIELD_USER
};

extern "C" void fn_8312F7C8()
{
    fn_82CEB3D8(&lbl_8323C5B4, "hkpSampledHeightFieldShape", &lbl_8323C4F4, 0x60,
        0, 0, reinterpret_cast<const hkClassEnum *>(lbl_821380C0), 1, lbl_831817F8, 9, &LAB_821380D4, 0, 0, 0);
}
