// Dynamic initializer of hkpConeLimitConstraintAtomClass (Havok reflection):
// constructs the static hkClass with hkClass::hkClass (fn_82CEB3D8).
//
// The class's enum table and its defaults struct are static data of this
// translation unit (as in Havok's generated *Class.cpp files), laid out one
// after the other in .rdata: the compiler then forms the defaults address
// from the enums address (`addi r5, r9, 0x14`) and allocates registers as
// the original does. With extern data (one symbol plus an offset) the
// arguments go through other registers and numMembers through r31.
// The defaults struct is named LAB_<address> so that objdiff treats it as a
// label inside lbl_8213FD0C (the decomp's 0x3C-byte object covering both),
// as it does for the original's lbl_8213FD0C+0x14 reference.
// Both objects hold the values the game has at 0x8213FD0C and 0x8213FD20
// (scripts/check_addends.py compares this unit's own data with the image).
#include "havok/hkBase.h"
#include "havok/hkInternalClassMember.h"
class hkClassMember;

extern "C" {
extern hkClass lbl_8323DC90;                            // hkpConeLimitConstraintAtomClass
extern const hkClass lbl_8323D960;                      // the parent class
extern const hkInternalClassEnumItem lbl_8213FCFC[];    // MeasurementMode items (ZERO_WHEN_VECTORS_ALIGNED, ..._PERPENDICULAR)
extern const hkClassMember lbl_83184040[];              // declared members
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

// hkpConeLimitConstraintAtomEnums (0x8213FD0C)
static const hkInternalClassEnum lbl_8213FD0C[] = {
    { "MeasurementMode", lbl_8213FCFC, 2, 0, 0 },
};

// hkpConeLimitConstraintAtom_Default (0x8213FD20): member 4, m_memOffsetToAngleOffset, defaults to 1 and
// member 7, m_angularLimitsTauFactor, to 1.0f.
struct hkpConeLimitConstraintAtom_DefaultStruct {
    int s_defaultOffsets[8];
    hkUint8 m_memOffsetToAngleOffset;
    hkReal m_angularLimitsTauFactor;
};
static const hkpConeLimitConstraintAtom_DefaultStruct LAB_8213FD20 = {
    { -1, -1, -1, -1, 0x20, -1, -1, 0x24 },
    1,
    1.0f
};

extern "C" void fn_83132AC8()
{
    fn_82CEB3D8(&lbl_8323DC90, "hkpConeLimitConstraintAtom", &lbl_8323D960, 0x14,
        0, 0, reinterpret_cast<const hkClassEnum *>(lbl_8213FD0C), 1, lbl_83184040, 8, &LAB_8213FD20, 0, 0, 0);
}
