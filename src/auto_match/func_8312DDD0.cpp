// Dynamic initializer of hkpMeshShapeClass (Havok reflection):
// constructs the static hkClass with hkClass::hkClass (fn_82CEB3D8).
//
// The class's enum table and its defaults struct are static data of this
// translation unit (as in Havok's generated *Class.cpp files), laid out in
// .rdata: the two enums (0x82136580), hkpMeshShapeSubpart's defaults
// (0x821365A8, used by that class's own hkClass, fn_8312DD38) and
// hkpMeshShape's defaults (0x821365E8). The compiler then forms the defaults
// address from the enums address (`addi r5, r9, 0x68`) and allocates
// registers as the original does. With extern data (one symbol plus an
// offset) the arguments go through other registers and numMembers through
// r31.
// Nothing here references the subpart defaults, so they are kept in place by
// declaring them in one static object with the enums. hkpMeshShape's
// defaults must be a separate static object (as a member at +0x40 the
// address is formed in two steps); it is named LAB_<address> so that objdiff
// treats it as a label inside lbl_82136580, as it does for the original's
// lbl_82136580+0x68 reference.
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
extern hkClass lbl_8323BC74;                            // hkpMeshShapeClass
extern const hkClass lbl_8323C614;                      // hkpShapeCollectionClass
extern const hkInternalClassEnumItem lbl_82136540[];    // MeshShapeIndexStridingType items
extern const hkInternalClassEnumItem lbl_82136560[];    // MeshShapeMaterialIndexStridingType items
extern const hkClassMember lbl_83181148[];              // declared members
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

// hkpMeshShapeSubpart_Default (0x821365A8)
struct hkpMeshShapeSubpart_DefaultStruct {
    int s_defaultOffsets[15];
    hkInt32 m_triangleOffset;
};

// hkpMeshShapeEnums (0x82136580, 0x82136594), then the subpart defaults
struct hkpMeshShapeEnumsAndSubpartDefault {
    hkInternalClassEnum m_enums[2];
    hkpMeshShapeSubpart_DefaultStruct m_subpartDefault;
};
static const hkpMeshShapeEnumsAndSubpartDefault lbl_82136580 = {
    {
        { "MeshShapeIndexStridingType", lbl_82136540, 4, 0, 0 },
        { "MeshShapeMaterialIndexStridingType", lbl_82136560, 4, 0, 0 },
    },
    { { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0x3C }, -1 },
};

// hkpMeshShape_Default (0x821365E8)
struct hkpMeshShape_DefaultStruct {
    int s_defaultOffsets[7];
    hkUint8 m_weldingType;   // hkEnum<hkpWeldingUtility::WeldingType, hkUint8>
};
static const hkpMeshShape_DefaultStruct LAB_821365E8 = {
    { -1, -1, -1, -1, 0x1C, -1, -1 },
    6   // WELDING_TYPE_NONE
};

extern "C" void fn_8312DDD0()
{
    fn_82CEB3D8(&lbl_8323BC74, "hkpMeshShape", &lbl_8323C614, 0x60,
        0, 0, reinterpret_cast<const hkClassEnum *>(lbl_82136580.m_enums), 2, lbl_83181148, 7, &LAB_821365E8, 0, 0, 0);
}
