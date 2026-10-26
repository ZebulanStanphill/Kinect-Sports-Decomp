// Dynamic initializer of hkpCylinderShapeClass (Havok reflection):
// constructs the static hkClass with hkClass::hkClass (fn_82CEB3D8).
//
// The class's enum table and its defaults struct are static data of this
// translation unit (as in Havok's generated *Class.cpp files), laid out one
// after the other in .rdata: the compiler then forms the defaults address
// from the enums address (`addi r5, r9, 0x14`) and allocates registers as
// the original does. With extern data (one symbol plus an offset) the
// arguments go through other registers and numMembers through r31.
// The defaults struct is named LAB_<address> so that objdiff treats it as a
// label inside lbl_8213FD0C (the decomp's 0x30-byte object covering both),
// as it does for the original's lbl_8213FD0C+0x14 reference.
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
extern hkClass lbl_8323DC90;                            // hkpCylinderShapeClass
extern const hkClass lbl_8323D960;                      // hkpConvexShapeClass
extern const hkInternalClassEnumItem lbl_82135C48[];    // VertexIdEncoding items
extern const hkClassMember lbl_83184040[];              // declared members
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

// hkpCylinderShapeEnums (0x82135C70)
static const hkInternalClassEnum lbl_8213FD0C[] = {
    { "VertexIdEncoding", lbl_82135C48, 5, 0, 0 },
};

// hkpCylinderShape_Default (0x82135C84)
struct hkpCylinderShape_DefaultStruct {
    int s_defaultOffsets[8];
    hkReal m_cylBaseRadiusFactorForHeightFieldCollisions;
};
static const hkpCylinderShape_DefaultStruct LAB_82135C84 = {
    { -1, 0x18, -1, -1, -1, -1 },
    0.8f
};

extern "C" void fn_83132AC8()
{
    fn_82CEB3D8(&lbl_8323DC90, "hkpConeLimitConstraintAtom", &lbl_8323D960, 0x14,
        0, 0, reinterpret_cast<const hkClassEnum *>(lbl_8213FD0C), 1, lbl_83184040, 8, &LAB_82135C84, 0, 0, 0);
}
